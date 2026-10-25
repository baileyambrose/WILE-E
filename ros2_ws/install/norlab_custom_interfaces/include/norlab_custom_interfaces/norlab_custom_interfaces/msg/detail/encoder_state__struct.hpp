// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from norlab_custom_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "norlab_custom_interfaces/msg/encoder_state.hpp"


#ifndef NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_HPP_
#define NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__norlab_custom_interfaces__msg__EncoderState __attribute__((deprecated))
#else
# define DEPRECATED__norlab_custom_interfaces__msg__EncoderState __declspec(deprecated)
#endif

namespace norlab_custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EncoderState_
{
  using Type = EncoderState_<ContainerAllocator>;

  explicit EncoderState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0ul;
      this->velocity = 0.0f;
      this->ticks_per_rotation = 0.0f;
      this->ticks_per_meter = 0.0f;
    }
  }

  explicit EncoderState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0ul;
      this->velocity = 0.0f;
      this->ticks_per_rotation = 0.0f;
      this->ticks_per_meter = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    uint32_t;
  _position_type position;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _ticks_per_rotation_type =
    float;
  _ticks_per_rotation_type ticks_per_rotation;
  using _ticks_per_meter_type =
    float;
  _ticks_per_meter_type ticks_per_meter;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const uint32_t & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__ticks_per_rotation(
    const float & _arg)
  {
    this->ticks_per_rotation = _arg;
    return *this;
  }
  Type & set__ticks_per_meter(
    const float & _arg)
  {
    this->ticks_per_meter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator> *;
  using ConstRawPtr =
    const norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__norlab_custom_interfaces__msg__EncoderState
    std::shared_ptr<norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__norlab_custom_interfaces__msg__EncoderState
    std::shared_ptr<norlab_custom_interfaces::msg::EncoderState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncoderState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->ticks_per_rotation != other.ticks_per_rotation) {
      return false;
    }
    if (this->ticks_per_meter != other.ticks_per_meter) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncoderState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncoderState_

// alias to use template instance with default allocator
using EncoderState =
  norlab_custom_interfaces::msg::EncoderState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace norlab_custom_interfaces

#endif  // NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_HPP_
