// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wile_e_interfaces:msg/RoboclawPowerBroadcast.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__TRAITS_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wile_e_interfaces/msg/detail/roboclaw_power_broadcast__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wile_e_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoboclawPowerBroadcast & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: current_draw
  {
    out << "current_draw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_draw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoboclawPowerBroadcast & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: current_draw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_draw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_draw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoboclawPowerBroadcast & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wile_e_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use wile_e_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wile_e_interfaces::msg::RoboclawPowerBroadcast & msg,
  std::ostream & out, size_t indentation = 0)
{
  wile_e_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wile_e_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wile_e_interfaces::msg::RoboclawPowerBroadcast & msg)
{
  return wile_e_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wile_e_interfaces::msg::RoboclawPowerBroadcast>()
{
  return "wile_e_interfaces::msg::RoboclawPowerBroadcast";
}

template<>
inline const char * name<wile_e_interfaces::msg::RoboclawPowerBroadcast>()
{
  return "wile_e_interfaces/msg/RoboclawPowerBroadcast";
}

template<>
struct has_fixed_size<wile_e_interfaces::msg::RoboclawPowerBroadcast>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wile_e_interfaces::msg::RoboclawPowerBroadcast>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wile_e_interfaces::msg::RoboclawPowerBroadcast>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__TRAITS_HPP_
