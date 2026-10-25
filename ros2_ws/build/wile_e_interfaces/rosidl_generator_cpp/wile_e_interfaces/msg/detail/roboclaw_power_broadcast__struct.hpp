// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wile_e_interfaces:msg/RoboclawPowerBroadcast.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__STRUCT_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wile_e_interfaces__msg__RoboclawPowerBroadcast __attribute__((deprecated))
#else
# define DEPRECATED__wile_e_interfaces__msg__RoboclawPowerBroadcast __declspec(deprecated)
#endif

namespace wile_e_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoboclawPowerBroadcast_
{
  using Type = RoboclawPowerBroadcast_<ContainerAllocator>;

  explicit RoboclawPowerBroadcast_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0;
      this->current_draw = 0;
    }
  }

  explicit RoboclawPowerBroadcast_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0;
      this->current_draw = 0;
    }
  }

  // field types and members
  using _battery_voltage_type =
    uint8_t;
  _battery_voltage_type battery_voltage;
  using _current_draw_type =
    int16_t;
  _current_draw_type current_draw;

  // setters for named parameter idiom
  Type & set__battery_voltage(
    const uint8_t & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__current_draw(
    const int16_t & _arg)
  {
    this->current_draw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator> *;
  using ConstRawPtr =
    const wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wile_e_interfaces__msg__RoboclawPowerBroadcast
    std::shared_ptr<wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wile_e_interfaces__msg__RoboclawPowerBroadcast
    std::shared_ptr<wile_e_interfaces::msg::RoboclawPowerBroadcast_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoboclawPowerBroadcast_ & other) const
  {
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->current_draw != other.current_draw) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoboclawPowerBroadcast_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoboclawPowerBroadcast_

// alias to use template instance with default allocator
using RoboclawPowerBroadcast =
  wile_e_interfaces::msg::RoboclawPowerBroadcast_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__STRUCT_HPP_
