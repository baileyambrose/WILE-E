// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wile_e_interfaces:msg/RoboclawPowerBroadcast.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__BUILDER_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wile_e_interfaces/msg/detail/roboclaw_power_broadcast__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wile_e_interfaces
{

namespace msg
{

namespace builder
{

class Init_RoboclawPowerBroadcast_current_draw
{
public:
  explicit Init_RoboclawPowerBroadcast_current_draw(::wile_e_interfaces::msg::RoboclawPowerBroadcast & msg)
  : msg_(msg)
  {}
  ::wile_e_interfaces::msg::RoboclawPowerBroadcast current_draw(::wile_e_interfaces::msg::RoboclawPowerBroadcast::_current_draw_type arg)
  {
    msg_.current_draw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawPowerBroadcast msg_;
};

class Init_RoboclawPowerBroadcast_battery_voltage
{
public:
  Init_RoboclawPowerBroadcast_battery_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoboclawPowerBroadcast_current_draw battery_voltage(::wile_e_interfaces::msg::RoboclawPowerBroadcast::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_RoboclawPowerBroadcast_current_draw(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawPowerBroadcast msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::msg::RoboclawPowerBroadcast>()
{
  return wile_e_interfaces::msg::builder::Init_RoboclawPowerBroadcast_battery_voltage();
}

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__BUILDER_HPP_
