// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wile_e_interfaces:msg/VelocityCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__TRAITS_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wile_e_interfaces/msg/detail/velocity_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wile_e_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: ang_velocity
  {
    out << "ang_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelocityCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: ang_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelocityCommand & msg, bool use_flow_style = false)
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
  const wile_e_interfaces::msg::VelocityCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  wile_e_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wile_e_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wile_e_interfaces::msg::VelocityCommand & msg)
{
  return wile_e_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wile_e_interfaces::msg::VelocityCommand>()
{
  return "wile_e_interfaces::msg::VelocityCommand";
}

template<>
inline const char * name<wile_e_interfaces::msg::VelocityCommand>()
{
  return "wile_e_interfaces/msg/VelocityCommand";
}

template<>
struct has_fixed_size<wile_e_interfaces::msg::VelocityCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wile_e_interfaces::msg::VelocityCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wile_e_interfaces::msg::VelocityCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WILE_E_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__TRAITS_HPP_
