// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wile_e_interfaces:msg/FileCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__FILE_COMMAND__STRUCT_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__FILE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wile_e_interfaces__msg__FileCommand __attribute__((deprecated))
#else
# define DEPRECATED__wile_e_interfaces__msg__FileCommand __declspec(deprecated)
#endif

namespace wile_e_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FileCommand_
{
  using Type = FileCommand_<ContainerAllocator>;

  explicit FileCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_bicep = 0;
      this->left_bicep = 0;
      this->right_forearm = 0;
      this->left_forearm = 0;
      this->right_wheel = 0;
      this->left_wheel = 0;
      this->tail = 0;
      this->head_raise = 0;
      this->head_turn = 0;
      this->eyes = 0;
      this->fan = 0;
      this->headlight = 0;
      this->face_detection = 0;
    }
  }

  explicit FileCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_bicep = 0;
      this->left_bicep = 0;
      this->right_forearm = 0;
      this->left_forearm = 0;
      this->right_wheel = 0;
      this->left_wheel = 0;
      this->tail = 0;
      this->head_raise = 0;
      this->head_turn = 0;
      this->eyes = 0;
      this->fan = 0;
      this->headlight = 0;
      this->face_detection = 0;
    }
  }

  // field types and members
  using _right_bicep_type =
    uint16_t;
  _right_bicep_type right_bicep;
  using _left_bicep_type =
    uint16_t;
  _left_bicep_type left_bicep;
  using _right_forearm_type =
    uint16_t;
  _right_forearm_type right_forearm;
  using _left_forearm_type =
    uint16_t;
  _left_forearm_type left_forearm;
  using _right_wheel_type =
    uint16_t;
  _right_wheel_type right_wheel;
  using _left_wheel_type =
    uint16_t;
  _left_wheel_type left_wheel;
  using _tail_type =
    uint16_t;
  _tail_type tail;
  using _head_raise_type =
    uint16_t;
  _head_raise_type head_raise;
  using _head_turn_type =
    uint16_t;
  _head_turn_type head_turn;
  using _eyes_type =
    uint8_t;
  _eyes_type eyes;
  using _fan_type =
    uint8_t;
  _fan_type fan;
  using _headlight_type =
    uint8_t;
  _headlight_type headlight;
  using _face_detection_type =
    uint8_t;
  _face_detection_type face_detection;

  // setters for named parameter idiom
  Type & set__right_bicep(
    const uint16_t & _arg)
  {
    this->right_bicep = _arg;
    return *this;
  }
  Type & set__left_bicep(
    const uint16_t & _arg)
  {
    this->left_bicep = _arg;
    return *this;
  }
  Type & set__right_forearm(
    const uint16_t & _arg)
  {
    this->right_forearm = _arg;
    return *this;
  }
  Type & set__left_forearm(
    const uint16_t & _arg)
  {
    this->left_forearm = _arg;
    return *this;
  }
  Type & set__right_wheel(
    const uint16_t & _arg)
  {
    this->right_wheel = _arg;
    return *this;
  }
  Type & set__left_wheel(
    const uint16_t & _arg)
  {
    this->left_wheel = _arg;
    return *this;
  }
  Type & set__tail(
    const uint16_t & _arg)
  {
    this->tail = _arg;
    return *this;
  }
  Type & set__head_raise(
    const uint16_t & _arg)
  {
    this->head_raise = _arg;
    return *this;
  }
  Type & set__head_turn(
    const uint16_t & _arg)
  {
    this->head_turn = _arg;
    return *this;
  }
  Type & set__eyes(
    const uint8_t & _arg)
  {
    this->eyes = _arg;
    return *this;
  }
  Type & set__fan(
    const uint8_t & _arg)
  {
    this->fan = _arg;
    return *this;
  }
  Type & set__headlight(
    const uint8_t & _arg)
  {
    this->headlight = _arg;
    return *this;
  }
  Type & set__face_detection(
    const uint8_t & _arg)
  {
    this->face_detection = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wile_e_interfaces::msg::FileCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const wile_e_interfaces::msg::FileCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::FileCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::FileCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::FileCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::FileCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::FileCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::FileCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::FileCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::FileCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wile_e_interfaces__msg__FileCommand
    std::shared_ptr<wile_e_interfaces::msg::FileCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wile_e_interfaces__msg__FileCommand
    std::shared_ptr<wile_e_interfaces::msg::FileCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileCommand_ & other) const
  {
    if (this->right_bicep != other.right_bicep) {
      return false;
    }
    if (this->left_bicep != other.left_bicep) {
      return false;
    }
    if (this->right_forearm != other.right_forearm) {
      return false;
    }
    if (this->left_forearm != other.left_forearm) {
      return false;
    }
    if (this->right_wheel != other.right_wheel) {
      return false;
    }
    if (this->left_wheel != other.left_wheel) {
      return false;
    }
    if (this->tail != other.tail) {
      return false;
    }
    if (this->head_raise != other.head_raise) {
      return false;
    }
    if (this->head_turn != other.head_turn) {
      return false;
    }
    if (this->eyes != other.eyes) {
      return false;
    }
    if (this->fan != other.fan) {
      return false;
    }
    if (this->headlight != other.headlight) {
      return false;
    }
    if (this->face_detection != other.face_detection) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileCommand_

// alias to use template instance with default allocator
using FileCommand =
  wile_e_interfaces::msg::FileCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__FILE_COMMAND__STRUCT_HPP_
