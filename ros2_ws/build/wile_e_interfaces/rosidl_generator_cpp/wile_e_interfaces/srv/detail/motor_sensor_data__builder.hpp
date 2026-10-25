// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wile_e_interfaces:srv/MotorSensorData.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__SRV__DETAIL__MOTOR_SENSOR_DATA__BUILDER_HPP_
#define WILE_E_INTERFACES__SRV__DETAIL__MOTOR_SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wile_e_interfaces/srv/detail/motor_sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wile_e_interfaces
{

namespace srv
{

namespace builder
{

class Init_MotorSensorData_Request_call
{
public:
  Init_MotorSensorData_Request_call()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wile_e_interfaces::srv::MotorSensorData_Request call(::wile_e_interfaces::srv::MotorSensorData_Request::_call_type arg)
  {
    msg_.call = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::srv::MotorSensorData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::srv::MotorSensorData_Request>()
{
  return wile_e_interfaces::srv::builder::Init_MotorSensorData_Request_call();
}

}  // namespace wile_e_interfaces


namespace wile_e_interfaces
{

namespace srv
{

namespace builder
{

class Init_MotorSensorData_Response_right_elbow
{
public:
  explicit Init_MotorSensorData_Response_right_elbow(::wile_e_interfaces::srv::MotorSensorData_Response & msg)
  : msg_(msg)
  {}
  ::wile_e_interfaces::srv::MotorSensorData_Response right_elbow(::wile_e_interfaces::srv::MotorSensorData_Response::_right_elbow_type arg)
  {
    msg_.right_elbow = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::srv::MotorSensorData_Response msg_;
};

class Init_MotorSensorData_Response_left_elbow
{
public:
  explicit Init_MotorSensorData_Response_left_elbow(::wile_e_interfaces::srv::MotorSensorData_Response & msg)
  : msg_(msg)
  {}
  Init_MotorSensorData_Response_right_elbow left_elbow(::wile_e_interfaces::srv::MotorSensorData_Response::_left_elbow_type arg)
  {
    msg_.left_elbow = std::move(arg);
    return Init_MotorSensorData_Response_right_elbow(msg_);
  }

private:
  ::wile_e_interfaces::srv::MotorSensorData_Response msg_;
};

class Init_MotorSensorData_Response_right_shoulder
{
public:
  explicit Init_MotorSensorData_Response_right_shoulder(::wile_e_interfaces::srv::MotorSensorData_Response & msg)
  : msg_(msg)
  {}
  Init_MotorSensorData_Response_left_elbow right_shoulder(::wile_e_interfaces::srv::MotorSensorData_Response::_right_shoulder_type arg)
  {
    msg_.right_shoulder = std::move(arg);
    return Init_MotorSensorData_Response_left_elbow(msg_);
  }

private:
  ::wile_e_interfaces::srv::MotorSensorData_Response msg_;
};

class Init_MotorSensorData_Response_left_shoulder
{
public:
  Init_MotorSensorData_Response_left_shoulder()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorSensorData_Response_right_shoulder left_shoulder(::wile_e_interfaces::srv::MotorSensorData_Response::_left_shoulder_type arg)
  {
    msg_.left_shoulder = std::move(arg);
    return Init_MotorSensorData_Response_right_shoulder(msg_);
  }

private:
  ::wile_e_interfaces::srv::MotorSensorData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::srv::MotorSensorData_Response>()
{
  return wile_e_interfaces::srv::builder::Init_MotorSensorData_Response_left_shoulder();
}

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__SRV__DETAIL__MOTOR_SENSOR_DATA__BUILDER_HPP_
