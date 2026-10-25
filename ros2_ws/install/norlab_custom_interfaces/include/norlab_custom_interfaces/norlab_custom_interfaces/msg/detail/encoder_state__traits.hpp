// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from norlab_custom_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "norlab_custom_interfaces/msg/encoder_state.hpp"


#ifndef NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__TRAITS_HPP_
#define NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "norlab_custom_interfaces/msg/detail/encoder_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace norlab_custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EncoderState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: ticks_per_rotation
  {
    out << "ticks_per_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.ticks_per_rotation, out);
    out << ", ";
  }

  // member: ticks_per_meter
  {
    out << "ticks_per_meter: ";
    rosidl_generator_traits::value_to_yaml(msg.ticks_per_meter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncoderState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
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

  // member: ticks_per_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ticks_per_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.ticks_per_rotation, out);
    out << "\n";
  }

  // member: ticks_per_meter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ticks_per_meter: ";
    rosidl_generator_traits::value_to_yaml(msg.ticks_per_meter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncoderState & msg, bool use_flow_style = false)
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

}  // namespace norlab_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use norlab_custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const norlab_custom_interfaces::msg::EncoderState & msg,
  std::ostream & out, size_t indentation = 0)
{
  norlab_custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use norlab_custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const norlab_custom_interfaces::msg::EncoderState & msg)
{
  return norlab_custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<norlab_custom_interfaces::msg::EncoderState>()
{
  return "norlab_custom_interfaces::msg::EncoderState";
}

template<>
inline const char * name<norlab_custom_interfaces::msg::EncoderState>()
{
  return "norlab_custom_interfaces/msg/EncoderState";
}

template<>
struct has_fixed_size<norlab_custom_interfaces::msg::EncoderState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<norlab_custom_interfaces::msg::EncoderState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<norlab_custom_interfaces::msg::EncoderState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__TRAITS_HPP_
