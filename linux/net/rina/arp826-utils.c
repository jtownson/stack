/*
 * ARP 826 (wonnabe) core
 *
 *    Francesco Salvestrini <f.salvestrini@nextworks.it>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/skbuff.h>
#include <linux/netdevice.h>
#include <linux/slab.h>
#include <linux/list.h>
#include <linux/if_ether.h>

/* FIXME: The following dependencies have to be removed */
#define RINA_PREFIX "arp826-utils"

#include "logs.h"
#include "debug.h"
#include "utils.h"
/* FIXME: End of dependencies ... */

#include "arp826-utils.h"

/*
 * NOTE: In 'static' functions there should be no input parameters checks while
 *       in non-static ones there should be plenty
 */

struct gpa {
        uint8_t * address;
        size_t    length;
};

/*
 * NOTE: Even if GPA is a base type we avoid ASSERTions here, preferring a
 *       merciful approach. Look at the logs guys ...
 */

struct gpa * gpa_create(const uint8_t * address,
                        size_t          length)
{
        struct gpa * tmp;

        if (!address || length == 0) {
                LOG_ERR("Bad input parameters, cannot create GPA");
                return NULL;
        }

        tmp = rkmalloc(sizeof(*tmp), GFP_KERNEL);
        if (!tmp)
                return NULL;

        tmp->length  = length;
        tmp->address = rkmalloc(tmp->length, GFP_KERNEL);
        if (!tmp->address) {
                rkfree(tmp);
                return NULL;
        }
        memcpy(tmp->address, address, tmp->length);

        return tmp;
}
EXPORT_SYMBOL(gpa_create);

bool gpa_is_ok(const struct gpa * gpa)
{ return (!gpa || gpa->address == NULL || gpa->length == 0) ? 0 : 1; }
EXPORT_SYMBOL(gpa_is_ok);

void gpa_destroy(struct gpa * gpa)
{
        if (!gpa_is_ok(gpa)) {
                LOG_ERR("Bogus GPA, cannot destroy");
                return;
        }

        rkfree(gpa->address);
        rkfree(gpa);
}
EXPORT_SYMBOL(gpa_destroy);

struct gpa * gpa_dup(const struct gpa * gpa)
{
        if (!gpa_is_ok(gpa)) {
                LOG_ERR("Bogus input parameter, cannot duplicate GPA");
                return NULL;
        }

        return gpa_create(gpa->address, gpa->length);
}
EXPORT_SYMBOL(gpa_dup);

const uint8_t * gpa_address_value(const struct gpa * gpa)
{
        if (!gpa_is_ok(gpa)) {
                LOG_ERR("Bad input parameter, "
                        "cannot get a meaningful address from GPA");
                return NULL;
        }

        return gpa->address;
}
EXPORT_SYMBOL(gpa_address_value);

size_t gpa_address_length(const struct gpa * gpa)
{
        if (!gpa_is_ok(gpa)) {
                LOG_ERR("Bad input parameter, "
                        "cannot get a meaningful size from GPA");
                return 0;
        }

        return gpa->length;
}
EXPORT_SYMBOL(gpa_address_length);

int gpa_address_shrink(struct gpa * gpa, uint8_t filler)
{
        uint8_t * new_address;
        uint8_t * position;
        uint8_t * tmp;
        size_t    count;
        size_t    length;

        if (!gpa_is_ok(gpa)) {
                LOG_ERR("Bad input parameter, cannot shrink the GPA");
                return -1;
        }

        position = strnchr(gpa->address, filler, gpa->length);
        if (!position) {
                LOG_ERR("No filler in the GPA, cannot shrink");
                return -1;
        }

        count = position - gpa->address;
        if (!count)
                return 0;

        ASSERT(count);

        length      = gpa->length - count;
        new_address = rkmalloc(length, GFP_KERNEL);
        if (!new_address)
                return -1;

        memcpy(new_address, gpa->address, gpa->length - count);
        for (tmp = new_address + count; count != 0; tmp++, count--)
                *tmp = filler;

        rkfree(gpa->address);
        gpa->address = new_address;
        gpa->length  = length;

        return 0;
}
EXPORT_SYMBOL(gpa_address_shrink);

int gpa_address_grow(struct gpa * gpa, size_t length, uint8_t filler)
{
        uint8_t * new_address;

        if (!gpa_is_ok(gpa)) {
                LOG_ERR("Bad input parameter, cannot grow the GPA");
                return -1;
        }

        if (length == 0 || length < gpa->length) {
                LOG_ERR("Can't grow the GPA, bad length");
                return -1;
        }

        /* No needs to grow */
        if (gpa->length == length)
                return 1;

        ASSERT(length > gpa->length);

        new_address = rkmalloc(length, GFP_KERNEL);
        if (!new_address)
                return -1;

        memcpy(new_address, gpa->address, gpa->length);
        memset(new_address + gpa->length, filler, length - gpa->length);
        rkfree(gpa->address);
        gpa->address = new_address;
        gpa->length  = length;

        return 1;
}
EXPORT_SYMBOL(gpa_address_grow);

bool gpa_is_equal(const struct gpa * a, const struct gpa * b)
{
        if (!gpa_is_ok(a) || !gpa_is_ok(b)) {
                LOG_ERR("Bad input parameters, cannot compare GPAs");
                return 0;
        }

        ASSERT(a && a->length != 0 && a->address != NULL);
        ASSERT(b && b->length != 0 && b->address != NULL);

        if (a->length != b->length)
                return 0;

        ASSERT(a->length == b->length);

        if (memcmp(a->address, b->address, a->length))
                return 0;

        return 1;
}
EXPORT_SYMBOL(gpa_is_equal);

struct gha {
        gha_type_t type;
        union {
                uint8_t mac_802_3[6];
        } data;
};

bool gha_is_ok(const struct gha * gha)
{ return (!gha || gha->type != MAC_ADDR_802_3) ? 0 : 1; }
EXPORT_SYMBOL(gha_is_ok);

struct gha * gha_create(gha_type_t      type,
                        const uint8_t * address)
{
        struct gha * gha;

        if (type != MAC_ADDR_802_3 || !address) {
                LOG_ERR("Wrong input parameters, cannot create GHA");
                return NULL;
        }

        gha = rkzalloc(sizeof(*gha), GFP_KERNEL);
        if (!gha)
                return NULL;
        
        gha->type = type;
        switch (type) {
        case MAC_ADDR_802_3:
                memcpy(gha->data.mac_802_3,
                       address,
                       sizeof(gha->data.mac_802_3));
                break;
        default:
                BUG();
                break; /* Only to stop the compiler from barfing */
        }

        return gha;
}
EXPORT_SYMBOL(gha_create);

int gha_destroy(struct gha * gha)
{
        if (!gha_is_ok(gha)) {
                LOG_ERR("Bogus GHA, cannot destroy");
                return -1;
        }

        rkfree(gha);

        return 0;
}
EXPORT_SYMBOL(gha_destroy);

struct gha * gha_dup(const struct gha * gha)
{
        struct gha * tmp;

        if (!gha_is_ok(gha)) {
                LOG_ERR("Bogus GHA, cannot duplicate");
                return NULL;
        }

        tmp = rkmalloc(sizeof(*gha), GFP_KERNEL);
        if (!tmp)
                return NULL;

        *tmp = *gha;

        return tmp;
}
EXPORT_SYMBOL(gha_dup);

const uint8_t * gha_address(const struct gha * gha)
{
        const uint8_t * tmp;

        if (!gha_is_ok(gha)) {
                LOG_ERR("Bogus GHA passed, cannot get address");
                return NULL;
        }

        switch (gha->type) {
        case MAC_ADDR_802_3: tmp = gha->data.mac_802_3; break;
        default:             BUG();                     break; /* shut up */
        }
        
        return tmp;
}
EXPORT_SYMBOL(gha_address);

gha_type_t gha_type(const struct gha * gha)
{
        ASSERT(gha_is_ok(gha));

        return gha->type;
}
EXPORT_SYMBOL(gha_type);

bool gha_is_equal(const struct gha * a,
                  const struct gha * b)
{
        bool v;

        v = 0;
        if (!gha_is_ok(a) || !gha_is_ok(b))
                return v;

        if (a->type != b->type)
                return v;

        ASSERT(a->type == b->type);

        switch (a->type) {
        case MAC_ADDR_802_3:
                v = !memcmp(a->data.mac_802_3,
                            b->data.mac_802_3,
                            sizeof(a->data.mac_802_3));
                break;
        default:
                BUG(); /* As usual, shut up compiler! */
                break;
        }

        return v;
}
EXPORT_SYMBOL(gha_is_equal);

struct sk_buff * arp826_create(__be16                oper,
                               __be16                ptype,
                               __u8                  plen,
                               struct net_device *   dev,
                               const unsigned char * src_nwaddr,
                               const unsigned char * dest_nwaddr,
                               const unsigned char * dest_hw)
{
        struct sk_buff *      skb;
        struct arp_header *   arp;
        unsigned char *       arp_ptr;
        int                   hlen = LL_RESERVED_SPACE(dev);
        int                   tlen = dev->needed_tailroom;
        const unsigned char * src_hw;

        /* Allocate a buffer */
        int length = sizeof(struct arp_header) + (dev->addr_len + plen) * 2;

        skb = alloc_skb(length + hlen + tlen, GFP_ATOMIC);
        if (skb == NULL)
                return NULL;

        skb_reserve(skb, hlen);
        skb_reset_network_header(skb);
        arp = (struct arp_header *) skb_put(skb, length);
        skb->dev = dev;
        skb->protocol = htons(ETH_P_ARP);
        src_hw = dev->dev_addr;
        if (dest_hw == NULL)
                dest_hw = dev->broadcast;

        /*
         *      Fill the device header for the ARP frame
         */
        if (dev_hard_header(skb, dev, ptype, dest_hw, src_hw, skb->len) < 0) {
                kfree_skb(skb);
                return NULL;
        }

        /*
         * Fill out the arp protocol part.
         */

        switch (dev->type) {
        default:
                arp->htype = htons(dev->type);
                arp->ptype = htons(ptype);
                break;
        }

        arp->hlen = dev->addr_len;
        arp->plen = plen;
        arp->oper = htons(oper);

        arp_ptr = (unsigned char *)(arp + 1);
        memcpy(arp_ptr, src_hw, dev->addr_len);
        arp_ptr += dev->addr_len;
        memcpy(arp_ptr, src_nwaddr, plen);
        arp_ptr += plen;

        switch (dev->type) {
        default:
                if (dest_hw != NULL)
                        memcpy(arp_ptr, dest_hw, dev->addr_len);
                else
                        memset(arp_ptr, 0, dev->addr_len);
                arp_ptr += dev->addr_len;
        }
        memcpy(arp_ptr, dest_nwaddr, plen);

        return skb;
}
