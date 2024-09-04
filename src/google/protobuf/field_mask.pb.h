// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/field_mask.proto
// Protobuf C++ Version: 5.29.0-dev

#ifndef google_2fprotobuf_2ffield_5fmask_2eproto_2epb_2eh
#define google_2fprotobuf_2ffield_5fmask_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029000
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ffield_5fmask_2eproto PROTOBUF_EXPORT

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct PROTOBUF_EXPORT TableStruct_google_2fprotobuf_2ffield_5fmask_2eproto {
  static const ::uint32_t offsets[];
};
PROTOBUF_EXPORT extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto;
namespace google {
namespace protobuf {
class FieldMask;
struct FieldMaskDefaultTypeInternal;
PROTOBUF_EXPORT extern FieldMaskDefaultTypeInternal _FieldMask_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace protobuf {

// ===================================================================


// -------------------------------------------------------------------

class PROTOBUF_EXPORT FieldMask final
    : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:google.protobuf.FieldMask) */ {
 public:
  inline FieldMask() : FieldMask(nullptr) {}
  ~FieldMask() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR FieldMask(
      ::google::protobuf::internal::ConstantInitialized);

  inline FieldMask(const FieldMask& from) : FieldMask(nullptr, from) {}
  inline FieldMask(FieldMask&& from) noexcept
      : FieldMask(nullptr, std::move(from)) {}
  inline FieldMask& operator=(const FieldMask& from) {
    CopyFrom(from);
    return *this;
  }
  inline FieldMask& operator=(FieldMask&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FieldMask& default_instance() {
    return *internal_default_instance();
  }
  static inline const FieldMask* internal_default_instance() {
    return reinterpret_cast<const FieldMask*>(
        &_FieldMask_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(FieldMask& a, FieldMask& b) { a.Swap(&b); }
  inline void Swap(FieldMask* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FieldMask* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FieldMask* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<FieldMask>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const FieldMask& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const FieldMask& from) { FieldMask::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(FieldMask* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "google.protobuf.FieldMask"; }

 protected:
  explicit FieldMask(::google::protobuf::Arena* arena);
  FieldMask(::google::protobuf::Arena* arena, const FieldMask& from);
  FieldMask(::google::protobuf::Arena* arena, FieldMask&& from) noexcept
      : FieldMask(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kPathsFieldNumber = 1,
  };
  // repeated string paths = 1;
  int paths_size() const;
  private:
  int _internal_paths_size() const;

  public:
  void clear_paths() ;
  const std::string& paths(int index) const;
  std::string* mutable_paths(int index);
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_paths(int index, Arg_&& value, Args_... args);
  std::string* add_paths();
  template <typename Arg_ = const std::string&, typename... Args_>
  void add_paths(Arg_&& value, Args_... args);
  const ::google::protobuf::RepeatedPtrField<std::string>& paths() const;
  ::google::protobuf::RepeatedPtrField<std::string>* mutable_paths();

  private:
  const ::google::protobuf::RepeatedPtrField<std::string>& _internal_paths() const;
  ::google::protobuf::RepeatedPtrField<std::string>* _internal_mutable_paths();

  public:
  // @@protoc_insertion_point(class_scope:google.protobuf.FieldMask)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      39, 2>
      _table_;


  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const FieldMask& from_msg);
    ::google::protobuf::RepeatedPtrField<std::string> paths_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fprotobuf_2ffield_5fmask_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// FieldMask

// repeated string paths = 1;
inline int FieldMask::_internal_paths_size() const {
  return _internal_paths().size();
}
inline int FieldMask::paths_size() const {
  return _internal_paths_size();
}
inline void FieldMask::clear_paths() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.paths_.Clear();
}
inline std::string* FieldMask::add_paths() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  std::string* _s = _internal_mutable_paths()->Add();
  // @@protoc_insertion_point(field_add_mutable:google.protobuf.FieldMask.paths)
  return _s;
}
inline const std::string& FieldMask::paths(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldMask.paths)
  return _internal_paths().Get(index);
}
inline std::string* FieldMask::mutable_paths(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldMask.paths)
  return _internal_mutable_paths()->Mutable(index);
}
template <typename Arg_, typename... Args_>
inline void FieldMask::set_paths(int index, Arg_&& value, Args_... args) {
  ::google::protobuf::internal::AssignToString(
      *_internal_mutable_paths()->Mutable(index),
      std::forward<Arg_>(value), args... );
  // @@protoc_insertion_point(field_set:google.protobuf.FieldMask.paths)
}
template <typename Arg_, typename... Args_>
inline void FieldMask::add_paths(Arg_&& value, Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::google::protobuf::internal::AddToRepeatedPtrField(*_internal_mutable_paths(),
                               std::forward<Arg_>(value),
                               args... );
  // @@protoc_insertion_point(field_add:google.protobuf.FieldMask.paths)
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
FieldMask::paths() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:google.protobuf.FieldMask.paths)
  return _internal_paths();
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
FieldMask::mutable_paths() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FieldMask.paths)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_paths();
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
FieldMask::_internal_paths() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.paths_;
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
FieldMask::_internal_mutable_paths() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.paths_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // google_2fprotobuf_2ffield_5fmask_2eproto_2epb_2eh
