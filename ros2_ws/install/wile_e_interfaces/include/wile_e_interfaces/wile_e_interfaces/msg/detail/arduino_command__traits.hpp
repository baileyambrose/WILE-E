// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wile_e_interfaces:msg/ArduinoCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__TRAITS_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wile_e_interfaces/msg/detail/arduino_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wile_e_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArduinoCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: tail
  {
    out << "tail: ";
    rosidl_generator_traits::value_to_yaml(msg.tail, out);
    out << ", ";
  }

  // member: head_raise
  {
    out << "head_raise: ";
    rosidl_generator_traits::value_to_yaml(msg.head_raise, out);
    out << ", ";
  }

  // member: head_turn
  {
    out << "head_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.head_turn, out);
    out << ", ";
  }

  // member: eyes
  {
    out << "eyes: ";
    rosidl_generator_traits::value_to_yaml(msg.eyes, out);
    out << ", ";
  }

  // member: fan
  {
    out << "fan: ";
    rosidl_generator_traits::value_to_yaml(msg.fan, out);
    out << ", ";
  }

  // member: headlight
  {
    out << "headlight: ";
    rosidl_generator_traits::value_to_yaml(msg.headlight, out);
    out << ", ";
  }

  // member: face_detection
  {
    out << "face_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.face_detection, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArduinoCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail: ";
    rosidl_generator_traits::value_to_yaml(msg.tail, out);
    out << "\n";
  }

  // member: head_raise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_raise: ";
    rosidl_generator_traits::value_to_yaml(msg.head_raise, out);
    out << "\n";
  }

  // member: head_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.head_turn, out);
    out << "\n";
  }

  // member: eyes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eyes: ";
    rosidl_generator_traits::value_to_yaml(msg.eyes, out);
    out << "\n";
  }

  // member: fan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan: ";
    rosidl_generator_traits::value_to_yaml(msg.fan, out);
    out << "\n";
  }

  // member: headlight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headlight: ";
    rosidl_generator_traits::value_to_yaml(msg.headlight, out);
    out << "\n";
  }

  // member: face_detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "face_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.face_detection, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArduinoCommand & msg, bool use_flow_style = false)
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
  const wile_e_interfaces::msg::ArduinoCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  wile_e_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wile_e_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wile_e_interfaces::msg::ArduinoCommand & msg)
{
  return wile_e_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wile_e_interfaces::msg::ArduinoCommand>()
{
  return "wile_e_interfaces::msg::ArduinoCommand";
}

template<>
inline const char * name<wile_e_interfaces::msg::ArduinoCommand>()
{
  return "wile_e_interfaces/msg/ArduinoCommand";
}

template<>
struct has_fixed_size<wile_e_interfaces::msg::ArduinoCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wile_e_interfaces::msg::ArduinoCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wile_e_interfaces::msg::ArduinoCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__TRAITS_HPP_
