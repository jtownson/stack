// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DataTransferConstantsMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DataTransferConstantsMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace rina {
namespace messages {

namespace {

const ::google::protobuf::Descriptor* dataTransferConstants_t_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  dataTransferConstants_t_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_DataTransferConstantsMessage_2eproto() {
  protobuf_AddDesc_DataTransferConstantsMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "DataTransferConstantsMessage.proto");
  GOOGLE_CHECK(file != NULL);
  dataTransferConstants_t_descriptor_ = file->message_type(0);
  static const int dataTransferConstants_t_offsets_[14] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, maxpdusize_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, addresslength_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, portidlength_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, cepidlength_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, qosidlength_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, sequencenumberlength_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, lengthlength_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, seqrolloverthreshold_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, maxpdulifetime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, difconcatenation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, diffragmentation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, difintegrity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, maxtimetokeepretransmitting_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, maxtimetoack_),
  };
  dataTransferConstants_t_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      dataTransferConstants_t_descriptor_,
      dataTransferConstants_t::default_instance_,
      dataTransferConstants_t_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dataTransferConstants_t, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(dataTransferConstants_t));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_DataTransferConstantsMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    dataTransferConstants_t_descriptor_, &dataTransferConstants_t::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_DataTransferConstantsMessage_2eproto() {
  delete dataTransferConstants_t::default_instance_;
  delete dataTransferConstants_t_reflection_;
}

void protobuf_AddDesc_DataTransferConstantsMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"DataTransferConstantsMessage.proto\022\rri"
    "na.messages\"\363\002\n\027dataTransferConstants_t\022"
    "\022\n\nmaxPDUSize\030\001 \001(\r\022\025\n\raddressLength\030\002 \001"
    "(\r\022\024\n\014portIdLength\030\003 \001(\r\022\023\n\013cepIdLength\030"
    "\004 \001(\r\022\023\n\013qosidLength\030\005 \001(\r\022\034\n\024sequenceNu"
    "mberLength\030\006 \001(\r\022\024\n\014lengthLength\030\007 \001(\r\022\034"
    "\n\024seqRolloverThreshold\030\010 \001(\004\022\026\n\016maxPDULi"
    "fetime\030\t \001(\r\022\030\n\020DIFConcatenation\030\n \001(\010\022\030"
    "\n\020DIFFragmentation\030\013 \001(\010\022\024\n\014DIFIntegrity"
    "\030\014 \001(\010\022#\n\033maxTimeToKeepRetransmitting\030\r "
    "\001(\r\022\024\n\014maxTimeToACK\030\016 \001(\rB9\n7rina.encodi"
    "ng.impl.googleprotobuf.datatransferconst"
    "ants", 484);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DataTransferConstantsMessage.proto", &protobuf_RegisterTypes);
  dataTransferConstants_t::default_instance_ = new dataTransferConstants_t();
  dataTransferConstants_t::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DataTransferConstantsMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DataTransferConstantsMessage_2eproto {
  StaticDescriptorInitializer_DataTransferConstantsMessage_2eproto() {
    protobuf_AddDesc_DataTransferConstantsMessage_2eproto();
  }
} static_descriptor_initializer_DataTransferConstantsMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int dataTransferConstants_t::kMaxPDUSizeFieldNumber;
const int dataTransferConstants_t::kAddressLengthFieldNumber;
const int dataTransferConstants_t::kPortIdLengthFieldNumber;
const int dataTransferConstants_t::kCepIdLengthFieldNumber;
const int dataTransferConstants_t::kQosidLengthFieldNumber;
const int dataTransferConstants_t::kSequenceNumberLengthFieldNumber;
const int dataTransferConstants_t::kLengthLengthFieldNumber;
const int dataTransferConstants_t::kSeqRolloverThresholdFieldNumber;
const int dataTransferConstants_t::kMaxPDULifetimeFieldNumber;
const int dataTransferConstants_t::kDIFConcatenationFieldNumber;
const int dataTransferConstants_t::kDIFFragmentationFieldNumber;
const int dataTransferConstants_t::kDIFIntegrityFieldNumber;
const int dataTransferConstants_t::kMaxTimeToKeepRetransmittingFieldNumber;
const int dataTransferConstants_t::kMaxTimeToACKFieldNumber;
#endif  // !_MSC_VER

dataTransferConstants_t::dataTransferConstants_t()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void dataTransferConstants_t::InitAsDefaultInstance() {
}

dataTransferConstants_t::dataTransferConstants_t(const dataTransferConstants_t& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void dataTransferConstants_t::SharedCtor() {
  _cached_size_ = 0;
  maxpdusize_ = 0u;
  addresslength_ = 0u;
  portidlength_ = 0u;
  cepidlength_ = 0u;
  qosidlength_ = 0u;
  sequencenumberlength_ = 0u;
  lengthlength_ = 0u;
  seqrolloverthreshold_ = GOOGLE_ULONGLONG(0);
  maxpdulifetime_ = 0u;
  difconcatenation_ = false;
  diffragmentation_ = false;
  difintegrity_ = false;
  maxtimetokeepretransmitting_ = 0u;
  maxtimetoack_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

dataTransferConstants_t::~dataTransferConstants_t() {
  SharedDtor();
}

void dataTransferConstants_t::SharedDtor() {
  if (this != default_instance_) {
  }
}

void dataTransferConstants_t::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* dataTransferConstants_t::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return dataTransferConstants_t_descriptor_;
}

const dataTransferConstants_t& dataTransferConstants_t::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DataTransferConstantsMessage_2eproto();
  return *default_instance_;
}

dataTransferConstants_t* dataTransferConstants_t::default_instance_ = NULL;

dataTransferConstants_t* dataTransferConstants_t::New() const {
  return new dataTransferConstants_t;
}

void dataTransferConstants_t::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    maxpdusize_ = 0u;
    addresslength_ = 0u;
    portidlength_ = 0u;
    cepidlength_ = 0u;
    qosidlength_ = 0u;
    sequencenumberlength_ = 0u;
    lengthlength_ = 0u;
    seqrolloverthreshold_ = GOOGLE_ULONGLONG(0);
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    maxpdulifetime_ = 0u;
    difconcatenation_ = false;
    diffragmentation_ = false;
    difintegrity_ = false;
    maxtimetokeepretransmitting_ = 0u;
    maxtimetoack_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool dataTransferConstants_t::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 maxPDUSize = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxpdusize_)));
          set_has_maxpdusize();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_addressLength;
        break;
      }

      // optional uint32 addressLength = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_addressLength:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &addresslength_)));
          set_has_addresslength();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_portIdLength;
        break;
      }

      // optional uint32 portIdLength = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_portIdLength:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &portidlength_)));
          set_has_portidlength();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_cepIdLength;
        break;
      }

      // optional uint32 cepIdLength = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cepIdLength:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cepidlength_)));
          set_has_cepidlength();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_qosidLength;
        break;
      }

      // optional uint32 qosidLength = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_qosidLength:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &qosidlength_)));
          set_has_qosidlength();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_sequenceNumberLength;
        break;
      }

      // optional uint32 sequenceNumberLength = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sequenceNumberLength:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sequencenumberlength_)));
          set_has_sequencenumberlength();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_lengthLength;
        break;
      }

      // optional uint32 lengthLength = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_lengthLength:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &lengthlength_)));
          set_has_lengthlength();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_seqRolloverThreshold;
        break;
      }

      // optional uint64 seqRolloverThreshold = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_seqRolloverThreshold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &seqrolloverthreshold_)));
          set_has_seqrolloverthreshold();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_maxPDULifetime;
        break;
      }

      // optional uint32 maxPDULifetime = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_maxPDULifetime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxpdulifetime_)));
          set_has_maxpdulifetime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_DIFConcatenation;
        break;
      }

      // optional bool DIFConcatenation = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DIFConcatenation:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &difconcatenation_)));
          set_has_difconcatenation();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_DIFFragmentation;
        break;
      }

      // optional bool DIFFragmentation = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DIFFragmentation:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &diffragmentation_)));
          set_has_diffragmentation();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_DIFIntegrity;
        break;
      }

      // optional bool DIFIntegrity = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DIFIntegrity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &difintegrity_)));
          set_has_difintegrity();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_maxTimeToKeepRetransmitting;
        break;
      }

      // optional uint32 maxTimeToKeepRetransmitting = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_maxTimeToKeepRetransmitting:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxtimetokeepretransmitting_)));
          set_has_maxtimetokeepretransmitting();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(112)) goto parse_maxTimeToACK;
        break;
      }

      // optional uint32 maxTimeToACK = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_maxTimeToACK:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxtimetoack_)));
          set_has_maxtimetoack();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void dataTransferConstants_t::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 maxPDUSize = 1;
  if (has_maxpdusize()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->maxpdusize(), output);
  }

  // optional uint32 addressLength = 2;
  if (has_addresslength()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->addresslength(), output);
  }

  // optional uint32 portIdLength = 3;
  if (has_portidlength()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->portidlength(), output);
  }

  // optional uint32 cepIdLength = 4;
  if (has_cepidlength()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->cepidlength(), output);
  }

  // optional uint32 qosidLength = 5;
  if (has_qosidlength()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->qosidlength(), output);
  }

  // optional uint32 sequenceNumberLength = 6;
  if (has_sequencenumberlength()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->sequencenumberlength(), output);
  }

  // optional uint32 lengthLength = 7;
  if (has_lengthlength()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->lengthlength(), output);
  }

  // optional uint64 seqRolloverThreshold = 8;
  if (has_seqrolloverthreshold()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->seqrolloverthreshold(), output);
  }

  // optional uint32 maxPDULifetime = 9;
  if (has_maxpdulifetime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->maxpdulifetime(), output);
  }

  // optional bool DIFConcatenation = 10;
  if (has_difconcatenation()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->difconcatenation(), output);
  }

  // optional bool DIFFragmentation = 11;
  if (has_diffragmentation()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->diffragmentation(), output);
  }

  // optional bool DIFIntegrity = 12;
  if (has_difintegrity()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(12, this->difintegrity(), output);
  }

  // optional uint32 maxTimeToKeepRetransmitting = 13;
  if (has_maxtimetokeepretransmitting()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->maxtimetokeepretransmitting(), output);
  }

  // optional uint32 maxTimeToACK = 14;
  if (has_maxtimetoack()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->maxtimetoack(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* dataTransferConstants_t::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 maxPDUSize = 1;
  if (has_maxpdusize()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->maxpdusize(), target);
  }

  // optional uint32 addressLength = 2;
  if (has_addresslength()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->addresslength(), target);
  }

  // optional uint32 portIdLength = 3;
  if (has_portidlength()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->portidlength(), target);
  }

  // optional uint32 cepIdLength = 4;
  if (has_cepidlength()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->cepidlength(), target);
  }

  // optional uint32 qosidLength = 5;
  if (has_qosidlength()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->qosidlength(), target);
  }

  // optional uint32 sequenceNumberLength = 6;
  if (has_sequencenumberlength()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->sequencenumberlength(), target);
  }

  // optional uint32 lengthLength = 7;
  if (has_lengthlength()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->lengthlength(), target);
  }

  // optional uint64 seqRolloverThreshold = 8;
  if (has_seqrolloverthreshold()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->seqrolloverthreshold(), target);
  }

  // optional uint32 maxPDULifetime = 9;
  if (has_maxpdulifetime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->maxpdulifetime(), target);
  }

  // optional bool DIFConcatenation = 10;
  if (has_difconcatenation()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->difconcatenation(), target);
  }

  // optional bool DIFFragmentation = 11;
  if (has_diffragmentation()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->diffragmentation(), target);
  }

  // optional bool DIFIntegrity = 12;
  if (has_difintegrity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->difintegrity(), target);
  }

  // optional uint32 maxTimeToKeepRetransmitting = 13;
  if (has_maxtimetokeepretransmitting()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->maxtimetokeepretransmitting(), target);
  }

  // optional uint32 maxTimeToACK = 14;
  if (has_maxtimetoack()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->maxtimetoack(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int dataTransferConstants_t::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 maxPDUSize = 1;
    if (has_maxpdusize()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->maxpdusize());
    }

    // optional uint32 addressLength = 2;
    if (has_addresslength()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->addresslength());
    }

    // optional uint32 portIdLength = 3;
    if (has_portidlength()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->portidlength());
    }

    // optional uint32 cepIdLength = 4;
    if (has_cepidlength()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cepidlength());
    }

    // optional uint32 qosidLength = 5;
    if (has_qosidlength()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->qosidlength());
    }

    // optional uint32 sequenceNumberLength = 6;
    if (has_sequencenumberlength()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sequencenumberlength());
    }

    // optional uint32 lengthLength = 7;
    if (has_lengthlength()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->lengthlength());
    }

    // optional uint64 seqRolloverThreshold = 8;
    if (has_seqrolloverthreshold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->seqrolloverthreshold());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional uint32 maxPDULifetime = 9;
    if (has_maxpdulifetime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->maxpdulifetime());
    }

    // optional bool DIFConcatenation = 10;
    if (has_difconcatenation()) {
      total_size += 1 + 1;
    }

    // optional bool DIFFragmentation = 11;
    if (has_diffragmentation()) {
      total_size += 1 + 1;
    }

    // optional bool DIFIntegrity = 12;
    if (has_difintegrity()) {
      total_size += 1 + 1;
    }

    // optional uint32 maxTimeToKeepRetransmitting = 13;
    if (has_maxtimetokeepretransmitting()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->maxtimetokeepretransmitting());
    }

    // optional uint32 maxTimeToACK = 14;
    if (has_maxtimetoack()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->maxtimetoack());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void dataTransferConstants_t::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const dataTransferConstants_t* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const dataTransferConstants_t*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void dataTransferConstants_t::MergeFrom(const dataTransferConstants_t& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_maxpdusize()) {
      set_maxpdusize(from.maxpdusize());
    }
    if (from.has_addresslength()) {
      set_addresslength(from.addresslength());
    }
    if (from.has_portidlength()) {
      set_portidlength(from.portidlength());
    }
    if (from.has_cepidlength()) {
      set_cepidlength(from.cepidlength());
    }
    if (from.has_qosidlength()) {
      set_qosidlength(from.qosidlength());
    }
    if (from.has_sequencenumberlength()) {
      set_sequencenumberlength(from.sequencenumberlength());
    }
    if (from.has_lengthlength()) {
      set_lengthlength(from.lengthlength());
    }
    if (from.has_seqrolloverthreshold()) {
      set_seqrolloverthreshold(from.seqrolloverthreshold());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_maxpdulifetime()) {
      set_maxpdulifetime(from.maxpdulifetime());
    }
    if (from.has_difconcatenation()) {
      set_difconcatenation(from.difconcatenation());
    }
    if (from.has_diffragmentation()) {
      set_diffragmentation(from.diffragmentation());
    }
    if (from.has_difintegrity()) {
      set_difintegrity(from.difintegrity());
    }
    if (from.has_maxtimetokeepretransmitting()) {
      set_maxtimetokeepretransmitting(from.maxtimetokeepretransmitting());
    }
    if (from.has_maxtimetoack()) {
      set_maxtimetoack(from.maxtimetoack());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void dataTransferConstants_t::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void dataTransferConstants_t::CopyFrom(const dataTransferConstants_t& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool dataTransferConstants_t::IsInitialized() const {

  return true;
}

void dataTransferConstants_t::Swap(dataTransferConstants_t* other) {
  if (other != this) {
    std::swap(maxpdusize_, other->maxpdusize_);
    std::swap(addresslength_, other->addresslength_);
    std::swap(portidlength_, other->portidlength_);
    std::swap(cepidlength_, other->cepidlength_);
    std::swap(qosidlength_, other->qosidlength_);
    std::swap(sequencenumberlength_, other->sequencenumberlength_);
    std::swap(lengthlength_, other->lengthlength_);
    std::swap(seqrolloverthreshold_, other->seqrolloverthreshold_);
    std::swap(maxpdulifetime_, other->maxpdulifetime_);
    std::swap(difconcatenation_, other->difconcatenation_);
    std::swap(diffragmentation_, other->diffragmentation_);
    std::swap(difintegrity_, other->difintegrity_);
    std::swap(maxtimetokeepretransmitting_, other->maxtimetokeepretransmitting_);
    std::swap(maxtimetoack_, other->maxtimetoack_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata dataTransferConstants_t::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = dataTransferConstants_t_descriptor_;
  metadata.reflection = dataTransferConstants_t_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace rina

// @@protoc_insertion_point(global_scope)
