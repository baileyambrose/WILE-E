// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from norlab_custom_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "norlab_custom_interfaces/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace norlab_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorState_temperature
{
public:
  explicit Init_MotorState_temperature(::norlab_custom_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::norlab_custom_interfaces::msg::MotorState temperature(::norlab_custom_interfaces::msg::MotorState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::MotorState msg_;
};

class Init_MotorState_duty
{
public:
  explicit Init_MotorState_duty(::norlab_custom_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_temperature duty(::norlab_custom_interfaces::msg::MotorState::_duty_type arg)
  {
    msg_.duty = std::move(arg);
    return Init_MotorState_temperature(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::MotorState msg_;
};

class Init_MotorState_voltage
{
public:
  explicit Init_MotorState_voltage(::norlab_custom_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_duty voltage(::norlab_custom_interfaces::msg::MotorState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_MotorState_duty(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::MotorState msg_;
};

class Init_MotorState_current
{
public:
  explicit Init_MotorState_current(::norlab_custom_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_voltage current(::norlab_custom_interfaces::msg::MotorState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorState_voltage(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::MotorState msg_;
};

class Init_MotorState_header
{
public:
  Init_MotorState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_current header(::norlab_custom_interfaces::msg::MotorState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorState_current(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::norlab_custom_interfaces::msg::MotorState>()
{
  return norlab_custom_interfaces::msg::builder::Init_MotorState_header();
}

}  // namespace norlab_custom_interfaces

#endif  // NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
