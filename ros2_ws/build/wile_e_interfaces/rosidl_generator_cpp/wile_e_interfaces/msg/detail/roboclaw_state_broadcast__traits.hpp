// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wile_e_interfaces:msg/RoboclawStateBroadcast.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_STATE_BROADCAST__TRAITS_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_STATE_BROADCAST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wile_e_interfaces/msg/detail/roboclaw_state_broadcast__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wile_e_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoboclawStateBroadcast & msg,
  std::ostream & out)
{
  out << "{";
  // member: right_shoulder
  {
    out << "right_shoulder: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder, out);
    out << ", ";
  }

  // member: left_shoulder
  {
    out << "left_shoulder: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder, out);
    out << ", ";
  }

  // member: right_elbow
  {
    out << "right_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.right_elbow, out);
    out << ", ";
  }

  // member: left_elbow
  {
    out << "left_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.left_elbow, out);
    out << ", ";
  }

  // member: right_shoulder_speed
  {
    out << "right_shoulder_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder_speed, out);
    out << ", ";
  }

  // member: left_shoulder_speed
  {
    out << "left_shoulder_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder_speed, out);
    out << ", ";
  }

  // member: right_elbow_speed
  {
    out << "right_elbow_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_elbow_speed, out);
    out << ", ";
  }

  // member: left_elbow_speed
  {
    out << "left_elbow_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_elbow_speed, out);
    out << ", ";
  }

  // member: right_wheel_speed
  {
    out << "right_wheel_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_speed, out);
    out << ", ";
  }

  // member: left_wheel_speed
  {
    out << "left_wheel_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoboclawStateBroadcast & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: right_shoulder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_shoulder: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder, out);
    out << "\n";
  }

  // member: left_shoulder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_shoulder: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder, out);
    out << "\n";
  }

  // member: right_elbow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.right_elbow, out);
    out << "\n";
  }

  // member: left_elbow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.left_elbow, out);
    out << "\n";
  }

  // member: right_shoulder_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_shoulder_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder_speed, out);
    out << "\n";
  }

  // member: left_shoulder_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_shoulder_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder_speed, out);
    out << "\n";
  }

  // member: right_elbow_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_elbow_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_elbow_speed, out);
    out << "\n";
  }

  // member: left_elbow_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_elbow_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_elbow_speed, out);
    out << "\n";
  }

  // member: right_wheel_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_speed, out);
    out << "\n";
  }

  // member: left_wheel_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoboclawStateBroadcast & msg, bool use_flow_style = false)
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
  const wile_e_interfaces::msg::RoboclawStateBroadcast & msg,
  std::ostream & out, size_t indentation = 0)
{
  wile_e_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wile_e_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
{
  return wile_e_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wile_e_interfaces::msg::RoboclawStateBroadcast>()
{
  return "wile_e_interfaces::msg::RoboclawStateBroadcast";
}

template<>
inline const char * name<wile_e_interfaces::msg::RoboclawStateBroadcast>()
{
  return "wile_e_interfaces/msg/RoboclawStateBroadcast";
}

template<>
struct has_fixed_size<wile_e_interfaces::msg::RoboclawStateBroadcast>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wile_e_interfaces::msg::RoboclawStateBroadcast>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wile_e_interfaces::msg::RoboclawStateBroadcast>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_STATE_BROADCAST__TRAITS_HPP_
