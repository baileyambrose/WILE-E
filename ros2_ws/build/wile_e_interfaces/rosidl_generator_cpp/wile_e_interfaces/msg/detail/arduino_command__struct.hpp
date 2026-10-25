// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wile_e_interfaces:msg/ArduinoCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__STRUCT_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wile_e_interfaces__msg__ArduinoCommand __attribute__((deprecated))
#else
# define DEPRECATED__wile_e_interfaces__msg__ArduinoCommand __declspec(deprecated)
#endif

namespace wile_e_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArduinoCommand_
{
  using Type = ArduinoCommand_<ContainerAllocator>;

  explicit ArduinoCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tail = 0;
      this->head_raise = 0;
      this->head_turn = 0;
      this->eyes = 0;
      this->fan = 0;
      this->headlight = 0;
      this->face_detection = 0;
    }
  }

  explicit ArduinoCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
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
    wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wile_e_interfaces__msg__ArduinoCommand
    std::shared_ptr<wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wile_e_interfaces__msg__ArduinoCommand
    std::shared_ptr<wile_e_interfaces::msg::ArduinoCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduinoCommand_ & other) const
  {
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
  bool operator!=(const ArduinoCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduinoCommand_

// alias to use template instance with default allocator
using ArduinoCommand =
  wile_e_interfaces::msg::ArduinoCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__STRUCT_HPP_
