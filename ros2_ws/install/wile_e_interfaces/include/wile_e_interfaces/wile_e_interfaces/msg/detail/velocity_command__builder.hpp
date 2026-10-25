// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wile_e_interfaces:msg/VelocityCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__BUILDER_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wile_e_interfaces/msg/detail/velocity_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wile_e_interfaces
{

namespace msg
{

namespace builder
{

class Init_VelocityCommand_ang_velocity
{
public:
  explicit Init_VelocityCommand_ang_velocity(::wile_e_interfaces::msg::VelocityCommand & msg)
  : msg_(msg)
  {}
  ::wile_e_interfaces::msg::VelocityCommand ang_velocity(::wile_e_interfaces::msg::VelocityCommand::_ang_velocity_type arg)
  {
    msg_.ang_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::msg::VelocityCommand msg_;
};

class Init_VelocityCommand_velocity
{
public:
  explicit Init_VelocityCommand_velocity(::wile_e_interfaces::msg::VelocityCommand & msg)
  : msg_(msg)
  {}
  Init_VelocityCommand_ang_velocity velocity(::wile_e_interfaces::msg::VelocityCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_VelocityCommand_ang_velocity(msg_);
  }

private:
  ::wile_e_interfaces::msg::VelocityCommand msg_;
};

class Init_VelocityCommand_message
{
public:
  Init_VelocityCommand_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityCommand_velocity message(::wile_e_interfaces::msg::VelocityCommand::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_VelocityCommand_velocity(msg_);
  }

private:
  ::wile_e_interfaces::msg::VelocityCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::msg::VelocityCommand>()
{
  return wile_e_interfaces::msg::builder::Init_VelocityCommand_message();
}

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__BUILDER_HPP_
