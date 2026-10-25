// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wile_e_interfaces:msg/RoboclawBroadcast.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_BROADCAST__STRUCT_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_BROADCAST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wile_e_interfaces__msg__RoboclawBroadcast __attribute__((deprecated))
#else
# define DEPRECATED__wile_e_interfaces__msg__RoboclawBroadcast __declspec(deprecated)
#endif

namespace wile_e_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoboclawBroadcast_
{
  using Type = RoboclawBroadcast_<ContainerAllocator>;

  explicit RoboclawBroadcast_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_shoulder = 0;
      this->left_shoulder = 0;
      this->right_elbow = 0;
      this->left_elbow = 0;
      this->right_wheel = 0;
      this->left_wheel = 0;
    }
  }

  explicit RoboclawBroadcast_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_shoulder = 0;
      this->left_shoulder = 0;
      this->right_elbow = 0;
      this->left_elbow = 0;
      this->right_wheel = 0;
      this->left_wheel = 0;
    }
  }

  // field types and members
  using _right_shoulder_type =
    uint16_t;
  _right_shoulder_type right_shoulder;
  using _left_shoulder_type =
    uint16_t;
  _left_shoulder_type left_shoulder;
  using _right_elbow_type =
    uint16_t;
  _right_elbow_type right_elbow;
  using _left_elbow_type =
    uint16_t;
  _left_elbow_type left_elbow;
  using _right_wheel_type =
    uint16_t;
  _right_wheel_type right_wheel;
  using _left_wheel_type =
    uint16_t;
  _left_wheel_type left_wheel;

  // setters for named parameter idiom
  Type & set__right_shoulder(
    const uint16_t & _arg)
  {
    this->right_shoulder = _arg;
    return *this;
  }
  Type & set__left_shoulder(
    const uint16_t & _arg)
  {
    this->left_shoulder = _arg;
    return *this;
  }
  Type & set__right_elbow(
    const uint16_t & _arg)
  {
    this->right_elbow = _arg;
    return *this;
  }
  Type & set__left_elbow(
    const uint16_t & _arg)
  {
    this->left_elbow = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator> *;
  using ConstRawPtr =
    const wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wile_e_interfaces__msg__RoboclawBroadcast
    std::shared_ptr<wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wile_e_interfaces__msg__RoboclawBroadcast
    std::shared_ptr<wile_e_interfaces::msg::RoboclawBroadcast_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoboclawBroadcast_ & other) const
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
    return true;
  }
  bool operator!=(const RoboclawBroadcast_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoboclawBroadcast_

// alias to use template instance with default allocator
using RoboclawBroadcast =
  wile_e_interfaces::msg::RoboclawBroadcast_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_BROADCAST__STRUCT_HPP_
