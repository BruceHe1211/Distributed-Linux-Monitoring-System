// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: process.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_process_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_process_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_process_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_process_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_process_2eproto;
namespace monitor {
namespace proto {
class Process;
class ProcessDefaultTypeInternal;
extern ProcessDefaultTypeInternal _Process_default_instance_;
}  // namespace proto
}  // namespace monitor
PROTOBUF_NAMESPACE_OPEN
template<> ::monitor::proto::Process* Arena::CreateMaybeMessage<::monitor::proto::Process>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace monitor {
namespace proto {

// ===================================================================

class Process PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:monitor.proto.Process) */ {
 public:
  inline Process() : Process(nullptr) {}
  virtual ~Process();

  Process(const Process& from);
  Process(Process&& from) noexcept
    : Process() {
    *this = ::std::move(from);
  }

  inline Process& operator=(const Process& from) {
    CopyFrom(from);
    return *this;
  }
  inline Process& operator=(Process&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Process& default_instance();

  static inline const Process* internal_default_instance() {
    return reinterpret_cast<const Process*>(
               &_Process_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Process& a, Process& b) {
    a.Swap(&b);
  }
  inline void Swap(Process* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Process* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Process* New() const final {
    return CreateMaybeMessage<Process>(nullptr);
  }

  Process* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Process>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Process& from);
  void MergeFrom(const Process& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Process* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "monitor.proto.Process";
  }
  protected:
  explicit Process(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_process_2eproto);
    return ::descriptor_table_process_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProcessStateFieldNumber = 1,
  };
  // string process_state = 1;
  void clear_process_state();
  const std::string& process_state() const;
  void set_process_state(const std::string& value);
  void set_process_state(std::string&& value);
  void set_process_state(const char* value);
  void set_process_state(const char* value, size_t size);
  std::string* mutable_process_state();
  std::string* release_process_state();
  void set_allocated_process_state(std::string* process_state);
  private:
  const std::string& _internal_process_state() const;
  void _internal_set_process_state(const std::string& value);
  std::string* _internal_mutable_process_state();
  public:

  // @@protoc_insertion_point(class_scope:monitor.proto.Process)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr process_state_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_process_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Process

// string process_state = 1;
inline void Process::clear_process_state() {
  process_state_.ClearToEmpty();
}
inline const std::string& Process::process_state() const {
  // @@protoc_insertion_point(field_get:monitor.proto.Process.process_state)
  return _internal_process_state();
}
inline void Process::set_process_state(const std::string& value) {
  _internal_set_process_state(value);
  // @@protoc_insertion_point(field_set:monitor.proto.Process.process_state)
}
inline std::string* Process::mutable_process_state() {
  // @@protoc_insertion_point(field_mutable:monitor.proto.Process.process_state)
  return _internal_mutable_process_state();
}
inline const std::string& Process::_internal_process_state() const {
  return process_state_.Get();
}
inline void Process::_internal_set_process_state(const std::string& value) {
  
  process_state_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Process::set_process_state(std::string&& value) {
  
  process_state_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:monitor.proto.Process.process_state)
}
inline void Process::set_process_state(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  process_state_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:monitor.proto.Process.process_state)
}
inline void Process::set_process_state(const char* value,
    size_t size) {
  
  process_state_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:monitor.proto.Process.process_state)
}
inline std::string* Process::_internal_mutable_process_state() {
  
  return process_state_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Process::release_process_state() {
  // @@protoc_insertion_point(field_release:monitor.proto.Process.process_state)
  return process_state_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Process::set_allocated_process_state(std::string* process_state) {
  if (process_state != nullptr) {
    
  } else {
    
  }
  process_state_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), process_state,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:monitor.proto.Process.process_state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace monitor

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_process_2eproto