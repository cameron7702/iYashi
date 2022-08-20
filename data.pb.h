// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_data_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_data_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021005 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_data_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_data_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_data_2eproto;
namespace HackThe6ix {
class User;
struct UserDefaultTypeInternal;
extern UserDefaultTypeInternal _User_default_instance_;
class UserDataBase;
struct UserDataBaseDefaultTypeInternal;
extern UserDataBaseDefaultTypeInternal _UserDataBase_default_instance_;
class User_dataPoint;
struct User_dataPointDefaultTypeInternal;
extern User_dataPointDefaultTypeInternal _User_dataPoint_default_instance_;
}  // namespace HackThe6ix
PROTOBUF_NAMESPACE_OPEN
template<> ::HackThe6ix::User* Arena::CreateMaybeMessage<::HackThe6ix::User>(Arena*);
template<> ::HackThe6ix::UserDataBase* Arena::CreateMaybeMessage<::HackThe6ix::UserDataBase>(Arena*);
template<> ::HackThe6ix::User_dataPoint* Arena::CreateMaybeMessage<::HackThe6ix::User_dataPoint>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace HackThe6ix {

// ===================================================================

class User_dataPoint final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:HackThe6ix.User.dataPoint) */ {
 public:
  inline User_dataPoint() : User_dataPoint(nullptr) {}
  ~User_dataPoint() override;
  explicit PROTOBUF_CONSTEXPR User_dataPoint(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  User_dataPoint(const User_dataPoint& from);
  User_dataPoint(User_dataPoint&& from) noexcept
    : User_dataPoint() {
    *this = ::std::move(from);
  }

  inline User_dataPoint& operator=(const User_dataPoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline User_dataPoint& operator=(User_dataPoint&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const User_dataPoint& default_instance() {
    return *internal_default_instance();
  }
  static inline const User_dataPoint* internal_default_instance() {
    return reinterpret_cast<const User_dataPoint*>(
               &_User_dataPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(User_dataPoint& a, User_dataPoint& b) {
    a.Swap(&b);
  }
  inline void Swap(User_dataPoint* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(User_dataPoint* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  User_dataPoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<User_dataPoint>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const User_dataPoint& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const User_dataPoint& from) {
    User_dataPoint::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(User_dataPoint* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "HackThe6ix.User.dataPoint";
  }
  protected:
  explicit User_dataPoint(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDatetimeFieldNumber = 2,
    kResistanceFieldNumber = 1,
  };
  // .google.protobuf.Timestamp datetime = 2;
  bool has_datetime() const;
  private:
  bool _internal_has_datetime() const;
  public:
  void clear_datetime();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& datetime() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_datetime();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_datetime();
  void set_allocated_datetime(::PROTOBUF_NAMESPACE_ID::Timestamp* datetime);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_datetime() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_datetime();
  public:
  void unsafe_arena_set_allocated_datetime(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* datetime);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_datetime();

  // optional float resistance = 1;
  bool has_resistance() const;
  private:
  bool _internal_has_resistance() const;
  public:
  void clear_resistance();
  float resistance() const;
  void set_resistance(float value);
  private:
  float _internal_resistance() const;
  void _internal_set_resistance(float value);
  public:

  // @@protoc_insertion_point(class_scope:HackThe6ix.User.dataPoint)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* datetime_;
    float resistance_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_data_2eproto;
};
// -------------------------------------------------------------------

class User final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:HackThe6ix.User) */ {
 public:
  inline User() : User(nullptr) {}
  ~User() override;
  explicit PROTOBUF_CONSTEXPR User(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  User(const User& from);
  User(User&& from) noexcept
    : User() {
    *this = ::std::move(from);
  }

  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }
  inline User& operator=(User&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const User& default_instance() {
    return *internal_default_instance();
  }
  static inline const User* internal_default_instance() {
    return reinterpret_cast<const User*>(
               &_User_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(User& a, User& b) {
    a.Swap(&b);
  }
  inline void Swap(User* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(User* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  User* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<User>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const User& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const User& from) {
    User::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(User* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "HackThe6ix.User";
  }
  protected:
  explicit User(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef User_dataPoint dataPoint;

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 3,
    kNameFieldNumber = 1,
    kUseridFieldNumber = 2,
  };
  // repeated .HackThe6ix.User.dataPoint data = 3;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  ::HackThe6ix::User_dataPoint* mutable_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User_dataPoint >*
      mutable_data();
  private:
  const ::HackThe6ix::User_dataPoint& _internal_data(int index) const;
  ::HackThe6ix::User_dataPoint* _internal_add_data();
  public:
  const ::HackThe6ix::User_dataPoint& data(int index) const;
  ::HackThe6ix::User_dataPoint* add_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User_dataPoint >&
      data() const;

  // optional string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional int32 userid = 2;
  bool has_userid() const;
  private:
  bool _internal_has_userid() const;
  public:
  void clear_userid();
  int32_t userid() const;
  void set_userid(int32_t value);
  private:
  int32_t _internal_userid() const;
  void _internal_set_userid(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:HackThe6ix.User)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User_dataPoint > data_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    int32_t userid_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_data_2eproto;
};
// -------------------------------------------------------------------

class UserDataBase final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:HackThe6ix.UserDataBase) */ {
 public:
  inline UserDataBase() : UserDataBase(nullptr) {}
  ~UserDataBase() override;
  explicit PROTOBUF_CONSTEXPR UserDataBase(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UserDataBase(const UserDataBase& from);
  UserDataBase(UserDataBase&& from) noexcept
    : UserDataBase() {
    *this = ::std::move(from);
  }

  inline UserDataBase& operator=(const UserDataBase& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserDataBase& operator=(UserDataBase&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const UserDataBase& default_instance() {
    return *internal_default_instance();
  }
  static inline const UserDataBase* internal_default_instance() {
    return reinterpret_cast<const UserDataBase*>(
               &_UserDataBase_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(UserDataBase& a, UserDataBase& b) {
    a.Swap(&b);
  }
  inline void Swap(UserDataBase* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(UserDataBase* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UserDataBase* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UserDataBase>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UserDataBase& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const UserDataBase& from) {
    UserDataBase::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UserDataBase* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "HackThe6ix.UserDataBase";
  }
  protected:
  explicit UserDataBase(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsersFieldNumber = 1,
  };
  // repeated .HackThe6ix.User users = 1;
  int users_size() const;
  private:
  int _internal_users_size() const;
  public:
  void clear_users();
  ::HackThe6ix::User* mutable_users(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User >*
      mutable_users();
  private:
  const ::HackThe6ix::User& _internal_users(int index) const;
  ::HackThe6ix::User* _internal_add_users();
  public:
  const ::HackThe6ix::User& users(int index) const;
  ::HackThe6ix::User* add_users();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User >&
      users() const;

  // @@protoc_insertion_point(class_scope:HackThe6ix.UserDataBase)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User > users_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_data_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// User_dataPoint

// optional float resistance = 1;
inline bool User_dataPoint::_internal_has_resistance() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool User_dataPoint::has_resistance() const {
  return _internal_has_resistance();
}
inline void User_dataPoint::clear_resistance() {
  _impl_.resistance_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline float User_dataPoint::_internal_resistance() const {
  return _impl_.resistance_;
}
inline float User_dataPoint::resistance() const {
  // @@protoc_insertion_point(field_get:HackThe6ix.User.dataPoint.resistance)
  return _internal_resistance();
}
inline void User_dataPoint::_internal_set_resistance(float value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.resistance_ = value;
}
inline void User_dataPoint::set_resistance(float value) {
  _internal_set_resistance(value);
  // @@protoc_insertion_point(field_set:HackThe6ix.User.dataPoint.resistance)
}

// .google.protobuf.Timestamp datetime = 2;
inline bool User_dataPoint::_internal_has_datetime() const {
  return this != internal_default_instance() && _impl_.datetime_ != nullptr;
}
inline bool User_dataPoint::has_datetime() const {
  return _internal_has_datetime();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& User_dataPoint::_internal_datetime() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.datetime_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& User_dataPoint::datetime() const {
  // @@protoc_insertion_point(field_get:HackThe6ix.User.dataPoint.datetime)
  return _internal_datetime();
}
inline void User_dataPoint::unsafe_arena_set_allocated_datetime(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* datetime) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.datetime_);
  }
  _impl_.datetime_ = datetime;
  if (datetime) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:HackThe6ix.User.dataPoint.datetime)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* User_dataPoint::release_datetime() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.datetime_;
  _impl_.datetime_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* User_dataPoint::unsafe_arena_release_datetime() {
  // @@protoc_insertion_point(field_release:HackThe6ix.User.dataPoint.datetime)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.datetime_;
  _impl_.datetime_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* User_dataPoint::_internal_mutable_datetime() {
  
  if (_impl_.datetime_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.datetime_ = p;
  }
  return _impl_.datetime_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* User_dataPoint::mutable_datetime() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_datetime();
  // @@protoc_insertion_point(field_mutable:HackThe6ix.User.dataPoint.datetime)
  return _msg;
}
inline void User_dataPoint::set_allocated_datetime(::PROTOBUF_NAMESPACE_ID::Timestamp* datetime) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.datetime_);
  }
  if (datetime) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(datetime));
    if (message_arena != submessage_arena) {
      datetime = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, datetime, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.datetime_ = datetime;
  // @@protoc_insertion_point(field_set_allocated:HackThe6ix.User.dataPoint.datetime)
}

// -------------------------------------------------------------------

// User

// optional string name = 1;
inline bool User::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool User::has_name() const {
  return _internal_has_name();
}
inline void User::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& User::name() const {
  // @@protoc_insertion_point(field_get:HackThe6ix.User.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:HackThe6ix.User.name)
}
inline std::string* User::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:HackThe6ix.User.name)
  return _s;
}
inline const std::string& User::_internal_name() const {
  return _impl_.name_.Get();
}
inline void User::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* User::release_name() {
  // @@protoc_insertion_point(field_release:HackThe6ix.User.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void User::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:HackThe6ix.User.name)
}

// optional int32 userid = 2;
inline bool User::_internal_has_userid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool User::has_userid() const {
  return _internal_has_userid();
}
inline void User::clear_userid() {
  _impl_.userid_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t User::_internal_userid() const {
  return _impl_.userid_;
}
inline int32_t User::userid() const {
  // @@protoc_insertion_point(field_get:HackThe6ix.User.userid)
  return _internal_userid();
}
inline void User::_internal_set_userid(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.userid_ = value;
}
inline void User::set_userid(int32_t value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:HackThe6ix.User.userid)
}

// repeated .HackThe6ix.User.dataPoint data = 3;
inline int User::_internal_data_size() const {
  return _impl_.data_.size();
}
inline int User::data_size() const {
  return _internal_data_size();
}
inline void User::clear_data() {
  _impl_.data_.Clear();
}
inline ::HackThe6ix::User_dataPoint* User::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:HackThe6ix.User.data)
  return _impl_.data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User_dataPoint >*
User::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:HackThe6ix.User.data)
  return &_impl_.data_;
}
inline const ::HackThe6ix::User_dataPoint& User::_internal_data(int index) const {
  return _impl_.data_.Get(index);
}
inline const ::HackThe6ix::User_dataPoint& User::data(int index) const {
  // @@protoc_insertion_point(field_get:HackThe6ix.User.data)
  return _internal_data(index);
}
inline ::HackThe6ix::User_dataPoint* User::_internal_add_data() {
  return _impl_.data_.Add();
}
inline ::HackThe6ix::User_dataPoint* User::add_data() {
  ::HackThe6ix::User_dataPoint* _add = _internal_add_data();
  // @@protoc_insertion_point(field_add:HackThe6ix.User.data)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User_dataPoint >&
User::data() const {
  // @@protoc_insertion_point(field_list:HackThe6ix.User.data)
  return _impl_.data_;
}

// -------------------------------------------------------------------

// UserDataBase

// repeated .HackThe6ix.User users = 1;
inline int UserDataBase::_internal_users_size() const {
  return _impl_.users_.size();
}
inline int UserDataBase::users_size() const {
  return _internal_users_size();
}
inline void UserDataBase::clear_users() {
  _impl_.users_.Clear();
}
inline ::HackThe6ix::User* UserDataBase::mutable_users(int index) {
  // @@protoc_insertion_point(field_mutable:HackThe6ix.UserDataBase.users)
  return _impl_.users_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User >*
UserDataBase::mutable_users() {
  // @@protoc_insertion_point(field_mutable_list:HackThe6ix.UserDataBase.users)
  return &_impl_.users_;
}
inline const ::HackThe6ix::User& UserDataBase::_internal_users(int index) const {
  return _impl_.users_.Get(index);
}
inline const ::HackThe6ix::User& UserDataBase::users(int index) const {
  // @@protoc_insertion_point(field_get:HackThe6ix.UserDataBase.users)
  return _internal_users(index);
}
inline ::HackThe6ix::User* UserDataBase::_internal_add_users() {
  return _impl_.users_.Add();
}
inline ::HackThe6ix::User* UserDataBase::add_users() {
  ::HackThe6ix::User* _add = _internal_add_users();
  // @@protoc_insertion_point(field_add:HackThe6ix.UserDataBase.users)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::HackThe6ix::User >&
UserDataBase::users() const {
  // @@protoc_insertion_point(field_list:HackThe6ix.UserDataBase.users)
  return _impl_.users_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace HackThe6ix

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_data_2eproto
