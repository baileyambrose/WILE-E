// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wile_e_interfaces:msg/ActionCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ACTION_COMMAND__STRUCT_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ACTION_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wile_e_interfaces__msg__ActionCommand __attribute__((deprecated))
#else
# define DEPRECATED__wile_e_interfaces__msg__ActionCommand __declspec(deprecated)
#endif

namespace wile_e_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionCommand_
{
  using Type = ActionCommand_<ContainerAllocator>;

  explicit ActionCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_shoulder = 0.0f;
      this->left_shoulder = 0.0f;
      this->right_elbow = 0.0f;
      this->left_elbow = 0.0f;
      this->right_wheel = 0.0f;
      this->left_wheel = 0.0f;
      this->tail = 0;
      this->head_raise = 0;
      this->head_turn = 0;
      this->eyes = 0;
      this->fan = 0;
      this->headlight = 0;
      this->data = 0;
    }
  }

  explicit ActionCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_shoulder = 0.0f;
      this->left_shoulder = 0.0f;
      this->right_elbow = 0.0f;
      this->left_elbow = 0.0f;
      this->right_wheel = 0.0f;
      this->left_wheel = 0.0f;
      this->tail = 0;
      this->head_raise = 0;
      this->head_turn = 0;
      this->eyes = 0;
      this->fan = 0;
      this->headlight = 0;
      this->data = 0;
    }
  }

  // field types and members
  using _right_shoulder_type =
    float;
  _right_shoulder_type right_shoulder;
  using _left_shoulder_type =
    float;
  _left_shoulder_type left_shoulder;
  using _right_elbow_type =
    float;
  _right_elbow_type right_elbow;
  using _left_elbow_type =
    float;
  _left_elbow_type left_elbow;
  using _right_wheel_type =
    float;
  _right_wheel_type right_wheel;
  using _left_wheel_type =
    float;
  _left_wheel_type left_wheel;
  using _tail_type =
    int16_t;
  _tail_type tail;
  using _head_raise_type =
    int16_t;
  _head_raise_type head_raise;
  using _head_turn_type =
    int16_t;
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
  using _data_type =
    uint8_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__right_shoulder(
    const float & _arg)
  {
    this->right_shoulder = _arg;
    return *this;
  }
  Type & set__left_shoulder(
    const float & _arg)
  {
    this->left_shoulder = _arg;
    return *this;
  }
  Type & set__right_elbow(
    const float & _arg)
  {
    this->right_elbow = _arg;
    return *this;
  }
  Type & set__left_elbow(
    const float & _arg)
  {
    this->left_elbow = _arg;
    return *this;
  }
  Type & set__right_wheel(
    const float & _arg)
  {
    this->right_wheel = _arg;
    return *this;
  }
  Type & set__left_wheel(
    const float & _arg)
  {
    this->left_wheel = _arg;
    return *this;
  }
  Type & set__tail(
    const int16_t & _arg)
  {
    this->tail = _arg;
    return *this;
  }
  Type & set__head_raise(
    const int16_t & _arg)
  {
    this->head_raise = _arg;
    return *this;
  }
  Type & set__head_turn(
    const int16_t & _arg)
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
  Type & set__data(
    const uint8_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wile_e_interfaces::msg::ActionCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const wile_e_interfaces::msg::ActionCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::ActionCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::ActionCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::ActionCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::ActionCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::ActionCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::ActionCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::ActionCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::ActionCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wile_e_interfaces__msg__ActionCommand
    std::shared_ptr<wile_e_interfaces::msg::ActionCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wile_e_interfaces__msg__ActionCommand
    std::shared_ptr<wile_e_interfaces::msg::ActionCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionCommand_ & other) const
  {
    if (this->right_shoulder != other.right_shoulder) {
      return false;
    }
    if (this->left_shoulder != other.left_shoulder) {
      return false;
    }
    if (this->right_elbow != other.right_elbow) {
      return false;
    }
    if (this->left_elbow != other.left_elbow) {
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
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionCommand_

// alias to use template instance with default allocator
using ActionCommand =
  wile_e_interfaces::msg::ActionCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ACTION_COMMAND__STRUCT_HPP_
