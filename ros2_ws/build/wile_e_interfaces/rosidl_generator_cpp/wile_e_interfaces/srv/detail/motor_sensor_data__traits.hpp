// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wile_e_interfaces:srv/MotorSensorData.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__SRV__DETAIL__MOTOR_SENSOR_DATA__TRAITS_HPP_
#define WILE_E_INTERFACES__SRV__DETAIL__MOTOR_SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wile_e_interfaces/srv/detail/motor_sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wile_e_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorSensorData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: call
  {
    out << "call: ";
    rosidl_generator_traits::value_to_yaml(msg.call, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorSensorData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: call
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "call: ";
    rosidl_generator_traits::value_to_yaml(msg.call, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorSensorData_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace wile_e_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use wile_e_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wile_e_interfaces::srv::MotorSensorData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  wile_e_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wile_e_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const wile_e_interfaces::srv::MotorSensorData_Request & msg)
{
  return wile_e_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wile_e_interfaces::srv::MotorSensorData_Request>()
{
  return "wile_e_interfaces::srv::MotorSensorData_Request";
}

template<>
inline const char * name<wile_e_interfaces::srv::MotorSensorData_Request>()
{
  return "wile_e_interfaces/srv/MotorSensorData_Request";
}

template<>
struct has_fixed_size<wile_e_interfaces::srv::MotorSensorData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wile_e_interfaces::srv::MotorSensorData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wile_e_interfaces::srv::MotorSensorData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace wile_e_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorSensorData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_shoulder
  {
    out << "left_shoulder: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder, out);
    out << ", ";
  }

  // member: right_shoulder
  {
    out << "right_shoulder: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder, out);
    out << ", ";
  }

  // member: left_elbow
  {
    out << "left_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.left_elbow, out);
    out << ", ";
  }

  // member: right_elbow
  {
    out << "right_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.right_elbow, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorSensorData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_shoulder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_shoulder: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder, out);
    out << "\n";
  }

  // member: right_shoulder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_shoulder: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder, out);
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

  // member: right_elbow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.right_elbow, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorSensorData_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace wile_e_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use wile_e_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wile_e_interfaces::srv::MotorSensorData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  wile_e_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wile_e_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const wile_e_interfaces::srv::MotorSensorData_Response & msg)
{
  return wile_e_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wile_e_interfaces::srv::MotorSensorData_Response>()
{
  return "wile_e_interfaces::srv::MotorSensorData_Response";
}

template<>
inline const char * name<wile_e_interfaces::srv::MotorSensorData_Response>()
{
  return "wile_e_interfaces/srv/MotorSensorData_Response";
}

template<>
struct has_fixed_size<wile_e_interfaces::srv::MotorSensorData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wile_e_interfaces::srv::MotorSensorData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wile_e_interfaces::srv::MotorSensorData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wile_e_interfaces::srv::MotorSensorData>()
{
  return "wile_e_interfaces::srv::MotorSensorData";
}

template<>
inline const char * name<wile_e_interfaces::srv::MotorSensorData>()
{
  return "wile_e_interfaces/srv/MotorSensorData";
}

template<>
struct has_fixed_size<wile_e_interfaces::srv::MotorSensorData>
  : std::integral_constant<
    bool,
    has_fixed_size<wile_e_interfaces::srv::MotorSensorData_Request>::value &&
    has_fixed_size<wile_e_interfaces::srv::MotorSensorData_Response>::value
  >
{
};

template<>
struct has_bounded_size<wile_e_interfaces::srv::MotorSensorData>
  : std::integral_constant<
    bool,
    has_bounded_size<wile_e_interfaces::srv::MotorSensorData_Request>::value &&
    has_bounded_size<wile_e_interfaces::srv::MotorSensorData_Response>::value
  >
{
};

template<>
struct is_service<wile_e_interfaces::srv::MotorSensorData>
  : std::true_type
{
};

template<>
struct is_service_request<wile_e_interfaces::srv::MotorSensorData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wile_e_interfaces::srv::MotorSensorData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WILE_E_INTERFACES__SRV__DETAIL__MOTOR_SENSOR_DATA__TRAITS_HPP_
