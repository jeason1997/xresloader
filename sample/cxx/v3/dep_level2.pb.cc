// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dep_level2.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dep_level2.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_dep_5flevel2_2eproto() {
  dep2_cfg_default_instance_.Shutdown();
}

void protobuf_InitDefaults_dep_5flevel2_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  dep2_cfg_default_instance_.DefaultConstruct();
  dep2_cfg_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_dep_5flevel2_2eproto_once_);
void protobuf_InitDefaults_dep_5flevel2_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_dep_5flevel2_2eproto_once_,
                 &protobuf_InitDefaults_dep_5flevel2_2eproto_impl);
}
void protobuf_AddDesc_dep_5flevel2_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_dep_5flevel2_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dep_5flevel2_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_dep_5flevel2_2eproto_once_);
void protobuf_AddDesc_dep_5flevel2_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_dep_5flevel2_2eproto_once_,
                 &protobuf_AddDesc_dep_5flevel2_2eproto_impl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dep_5flevel2_2eproto {
  StaticDescriptorInitializer_dep_5flevel2_2eproto() {
    protobuf_AddDesc_dep_5flevel2_2eproto();
  }
} static_descriptor_initializer_dep_5flevel2_2eproto_;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int dep2_cfg::kIdFieldNumber;
const int dep2_cfg::kLevelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

dep2_cfg::dep2_cfg()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_dep_5flevel2_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:dep2_cfg)
}

void dep2_cfg::InitAsDefaultInstance() {
}

dep2_cfg::dep2_cfg(const dep2_cfg& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dep2_cfg)
}

void dep2_cfg::SharedCtor() {
  level_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0u;
  _cached_size_ = 0;
}

dep2_cfg::~dep2_cfg() {
  // @@protoc_insertion_point(destructor:dep2_cfg)
  SharedDtor();
}

void dep2_cfg::SharedDtor() {
  level_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void dep2_cfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const dep2_cfg& dep2_cfg::default_instance() {
  protobuf_InitDefaults_dep_5flevel2_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<dep2_cfg> dep2_cfg_default_instance_;

dep2_cfg* dep2_cfg::New(::google::protobuf::Arena* arena) const {
  dep2_cfg* n = new dep2_cfg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void dep2_cfg::Clear() {
// @@protoc_insertion_point(message_clear_start:dep2_cfg)
  id_ = 0u;
  level_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool dep2_cfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dep2_cfg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_level;
        break;
      }

      // optional string level = 2;
      case 2: {
        if (tag == 18) {
         parse_level:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_level()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->level().data(), this->level().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "dep2_cfg.level"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dep2_cfg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dep2_cfg)
  return false;
#undef DO_
}

void dep2_cfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dep2_cfg)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional string level = 2;
  if (this->level().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->level().data(), this->level().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dep2_cfg.level");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->level(), output);
  }

  // @@protoc_insertion_point(serialize_end:dep2_cfg)
}

size_t dep2_cfg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dep2_cfg)
  size_t total_size = 0;

  // optional uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // optional string level = 2;
  if (this->level().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->level());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void dep2_cfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const dep2_cfg*>(&from));
}

void dep2_cfg::MergeFrom(const dep2_cfg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dep2_cfg)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void dep2_cfg::UnsafeMergeFrom(const dep2_cfg& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.level().size() > 0) {

    level_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.level_);
  }
}

void dep2_cfg::CopyFrom(const dep2_cfg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dep2_cfg)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool dep2_cfg::IsInitialized() const {

  return true;
}

void dep2_cfg::Swap(dep2_cfg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void dep2_cfg::InternalSwap(dep2_cfg* other) {
  std::swap(id_, other->id_);
  level_.Swap(&other->level_);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string dep2_cfg::GetTypeName() const {
  return "dep2_cfg";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// dep2_cfg

// optional uint32 id = 1;
void dep2_cfg::clear_id() {
  id_ = 0u;
}
::google::protobuf::uint32 dep2_cfg::id() const {
  // @@protoc_insertion_point(field_get:dep2_cfg.id)
  return id_;
}
void dep2_cfg::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:dep2_cfg.id)
}

// optional string level = 2;
void dep2_cfg::clear_level() {
  level_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& dep2_cfg::level() const {
  // @@protoc_insertion_point(field_get:dep2_cfg.level)
  return level_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void dep2_cfg::set_level(const ::std::string& value) {
  
  level_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dep2_cfg.level)
}
void dep2_cfg::set_level(const char* value) {
  
  level_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dep2_cfg.level)
}
void dep2_cfg::set_level(const char* value, size_t size) {
  
  level_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dep2_cfg.level)
}
::std::string* dep2_cfg::mutable_level() {
  
  // @@protoc_insertion_point(field_mutable:dep2_cfg.level)
  return level_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* dep2_cfg::release_level() {
  // @@protoc_insertion_point(field_release:dep2_cfg.level)
  
  return level_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void dep2_cfg::set_allocated_level(::std::string* level) {
  if (level != NULL) {
    
  } else {
    
  }
  level_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), level);
  // @@protoc_insertion_point(field_set_allocated:dep2_cfg.level)
}

inline const dep2_cfg* dep2_cfg::internal_default_instance() {
  return &dep2_cfg_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)