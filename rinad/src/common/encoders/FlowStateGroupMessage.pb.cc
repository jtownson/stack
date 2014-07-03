// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FlowStateGroupMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "FlowStateGroupMessage.pb.h"

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

const ::google::protobuf::Descriptor* flowStateObjectGroup_t_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  flowStateObjectGroup_t_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_FlowStateGroupMessage_2eproto() {
  protobuf_AddDesc_FlowStateGroupMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "FlowStateGroupMessage.proto");
  GOOGLE_CHECK(file != NULL);
  flowStateObjectGroup_t_descriptor_ = file->message_type(0);
  static const int flowStateObjectGroup_t_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(flowStateObjectGroup_t, flow_state_objects_),
  };
  flowStateObjectGroup_t_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      flowStateObjectGroup_t_descriptor_,
      flowStateObjectGroup_t::default_instance_,
      flowStateObjectGroup_t_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(flowStateObjectGroup_t, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(flowStateObjectGroup_t, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(flowStateObjectGroup_t));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_FlowStateGroupMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    flowStateObjectGroup_t_descriptor_, &flowStateObjectGroup_t::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_FlowStateGroupMessage_2eproto() {
  delete flowStateObjectGroup_t::default_instance_;
  delete flowStateObjectGroup_t_reflection_;
}

void protobuf_AddDesc_FlowStateGroupMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::rina::messages::protobuf_AddDesc_FlowStateMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033FlowStateGroupMessage.proto\022\rrina.mess"
    "ages\032\026FlowStateMessage.proto\"V\n\026flowStat"
    "eObjectGroup_t\022<\n\022flow_state_objects\030\001 \003"
    "(\0132 .rina.messages.flowStateObject_tB-\n+"
    "rina.encoding.impl.googleprotobuf.flowst"
    "ate", 203);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "FlowStateGroupMessage.proto", &protobuf_RegisterTypes);
  flowStateObjectGroup_t::default_instance_ = new flowStateObjectGroup_t();
  flowStateObjectGroup_t::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_FlowStateGroupMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_FlowStateGroupMessage_2eproto {
  StaticDescriptorInitializer_FlowStateGroupMessage_2eproto() {
    protobuf_AddDesc_FlowStateGroupMessage_2eproto();
  }
} static_descriptor_initializer_FlowStateGroupMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int flowStateObjectGroup_t::kFlowStateObjectsFieldNumber;
#endif  // !_MSC_VER

flowStateObjectGroup_t::flowStateObjectGroup_t()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void flowStateObjectGroup_t::InitAsDefaultInstance() {
}

flowStateObjectGroup_t::flowStateObjectGroup_t(const flowStateObjectGroup_t& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void flowStateObjectGroup_t::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

flowStateObjectGroup_t::~flowStateObjectGroup_t() {
  SharedDtor();
}

void flowStateObjectGroup_t::SharedDtor() {
  if (this != default_instance_) {
  }
}

void flowStateObjectGroup_t::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* flowStateObjectGroup_t::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return flowStateObjectGroup_t_descriptor_;
}

const flowStateObjectGroup_t& flowStateObjectGroup_t::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_FlowStateGroupMessage_2eproto();
  return *default_instance_;
}

flowStateObjectGroup_t* flowStateObjectGroup_t::default_instance_ = NULL;

flowStateObjectGroup_t* flowStateObjectGroup_t::New() const {
  return new flowStateObjectGroup_t;
}

void flowStateObjectGroup_t::Clear() {
  flow_state_objects_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool flowStateObjectGroup_t::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .rina.messages.flowStateObject_t flow_state_objects = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_flow_state_objects:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_flow_state_objects()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_flow_state_objects;
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

void flowStateObjectGroup_t::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .rina.messages.flowStateObject_t flow_state_objects = 1;
  for (int i = 0; i < this->flow_state_objects_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->flow_state_objects(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* flowStateObjectGroup_t::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .rina.messages.flowStateObject_t flow_state_objects = 1;
  for (int i = 0; i < this->flow_state_objects_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->flow_state_objects(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int flowStateObjectGroup_t::ByteSize() const {
  int total_size = 0;

  // repeated .rina.messages.flowStateObject_t flow_state_objects = 1;
  total_size += 1 * this->flow_state_objects_size();
  for (int i = 0; i < this->flow_state_objects_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->flow_state_objects(i));
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

void flowStateObjectGroup_t::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const flowStateObjectGroup_t* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const flowStateObjectGroup_t*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void flowStateObjectGroup_t::MergeFrom(const flowStateObjectGroup_t& from) {
  GOOGLE_CHECK_NE(&from, this);
  flow_state_objects_.MergeFrom(from.flow_state_objects_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void flowStateObjectGroup_t::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void flowStateObjectGroup_t::CopyFrom(const flowStateObjectGroup_t& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool flowStateObjectGroup_t::IsInitialized() const {

  return true;
}

void flowStateObjectGroup_t::Swap(flowStateObjectGroup_t* other) {
  if (other != this) {
    flow_state_objects_.Swap(&other->flow_state_objects_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata flowStateObjectGroup_t::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = flowStateObjectGroup_t_descriptor_;
  metadata.reflection = flowStateObjectGroup_t_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace rina

// @@protoc_insertion_point(global_scope)
