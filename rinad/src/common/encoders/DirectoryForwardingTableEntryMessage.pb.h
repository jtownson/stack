// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DirectoryForwardingTableEntryMessage.proto

#ifndef PROTOBUF_DirectoryForwardingTableEntryMessage_2eproto__INCLUDED
#define PROTOBUF_DirectoryForwardingTableEntryMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ApplicationProcessNamingInfoMessage.pb.h"
// @@protoc_insertion_point(includes)

namespace rina {
namespace messages {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DirectoryForwardingTableEntryMessage_2eproto();
void protobuf_AssignDesc_DirectoryForwardingTableEntryMessage_2eproto();
void protobuf_ShutdownFile_DirectoryForwardingTableEntryMessage_2eproto();

class directoryForwardingTableEntry_t;

// ===================================================================

class directoryForwardingTableEntry_t : public ::google::protobuf::Message {
 public:
  directoryForwardingTableEntry_t();
  virtual ~directoryForwardingTableEntry_t();

  directoryForwardingTableEntry_t(const directoryForwardingTableEntry_t& from);

  inline directoryForwardingTableEntry_t& operator=(const directoryForwardingTableEntry_t& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const directoryForwardingTableEntry_t& default_instance();

  void Swap(directoryForwardingTableEntry_t* other);

  // implements Message ----------------------------------------------

  directoryForwardingTableEntry_t* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const directoryForwardingTableEntry_t& from);
  void MergeFrom(const directoryForwardingTableEntry_t& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .rina.messages.applicationProcessNamingInfo_t applicationName = 1;
  inline bool has_applicationname() const;
  inline void clear_applicationname();
  static const int kApplicationNameFieldNumber = 1;
  inline const ::rina::messages::applicationProcessNamingInfo_t& applicationname() const;
  inline ::rina::messages::applicationProcessNamingInfo_t* mutable_applicationname();
  inline ::rina::messages::applicationProcessNamingInfo_t* release_applicationname();
  inline void set_allocated_applicationname(::rina::messages::applicationProcessNamingInfo_t* applicationname);

  // required uint64 ipcProcessSynonym = 2;
  inline bool has_ipcprocesssynonym() const;
  inline void clear_ipcprocesssynonym();
  static const int kIpcProcessSynonymFieldNumber = 2;
  inline ::google::protobuf::uint64 ipcprocesssynonym() const;
  inline void set_ipcprocesssynonym(::google::protobuf::uint64 value);

  // optional uint64 timestamp = 3;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 3;
  inline ::google::protobuf::uint64 timestamp() const;
  inline void set_timestamp(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:rina.messages.directoryForwardingTableEntry_t)
 private:
  inline void set_has_applicationname();
  inline void clear_has_applicationname();
  inline void set_has_ipcprocesssynonym();
  inline void clear_has_ipcprocesssynonym();
  inline void set_has_timestamp();
  inline void clear_has_timestamp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::rina::messages::applicationProcessNamingInfo_t* applicationname_;
  ::google::protobuf::uint64 ipcprocesssynonym_;
  ::google::protobuf::uint64 timestamp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_DirectoryForwardingTableEntryMessage_2eproto();
  friend void protobuf_AssignDesc_DirectoryForwardingTableEntryMessage_2eproto();
  friend void protobuf_ShutdownFile_DirectoryForwardingTableEntryMessage_2eproto();

  void InitAsDefaultInstance();
  static directoryForwardingTableEntry_t* default_instance_;
};
// ===================================================================


// ===================================================================

// directoryForwardingTableEntry_t

// required .rina.messages.applicationProcessNamingInfo_t applicationName = 1;
inline bool directoryForwardingTableEntry_t::has_applicationname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void directoryForwardingTableEntry_t::set_has_applicationname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void directoryForwardingTableEntry_t::clear_has_applicationname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void directoryForwardingTableEntry_t::clear_applicationname() {
  if (applicationname_ != NULL) applicationname_->::rina::messages::applicationProcessNamingInfo_t::Clear();
  clear_has_applicationname();
}
inline const ::rina::messages::applicationProcessNamingInfo_t& directoryForwardingTableEntry_t::applicationname() const {
  return applicationname_ != NULL ? *applicationname_ : *default_instance_->applicationname_;
}
inline ::rina::messages::applicationProcessNamingInfo_t* directoryForwardingTableEntry_t::mutable_applicationname() {
  set_has_applicationname();
  if (applicationname_ == NULL) applicationname_ = new ::rina::messages::applicationProcessNamingInfo_t;
  return applicationname_;
}
inline ::rina::messages::applicationProcessNamingInfo_t* directoryForwardingTableEntry_t::release_applicationname() {
  clear_has_applicationname();
  ::rina::messages::applicationProcessNamingInfo_t* temp = applicationname_;
  applicationname_ = NULL;
  return temp;
}
inline void directoryForwardingTableEntry_t::set_allocated_applicationname(::rina::messages::applicationProcessNamingInfo_t* applicationname) {
  delete applicationname_;
  applicationname_ = applicationname;
  if (applicationname) {
    set_has_applicationname();
  } else {
    clear_has_applicationname();
  }
}

// required uint64 ipcProcessSynonym = 2;
inline bool directoryForwardingTableEntry_t::has_ipcprocesssynonym() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void directoryForwardingTableEntry_t::set_has_ipcprocesssynonym() {
  _has_bits_[0] |= 0x00000002u;
}
inline void directoryForwardingTableEntry_t::clear_has_ipcprocesssynonym() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void directoryForwardingTableEntry_t::clear_ipcprocesssynonym() {
  ipcprocesssynonym_ = GOOGLE_ULONGLONG(0);
  clear_has_ipcprocesssynonym();
}
inline ::google::protobuf::uint64 directoryForwardingTableEntry_t::ipcprocesssynonym() const {
  return ipcprocesssynonym_;
}
inline void directoryForwardingTableEntry_t::set_ipcprocesssynonym(::google::protobuf::uint64 value) {
  set_has_ipcprocesssynonym();
  ipcprocesssynonym_ = value;
}

// optional uint64 timestamp = 3;
inline bool directoryForwardingTableEntry_t::has_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void directoryForwardingTableEntry_t::set_has_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void directoryForwardingTableEntry_t::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void directoryForwardingTableEntry_t::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 directoryForwardingTableEntry_t::timestamp() const {
  return timestamp_;
}
inline void directoryForwardingTableEntry_t::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace rina

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DirectoryForwardingTableEntryMessage_2eproto__INCLUDED
