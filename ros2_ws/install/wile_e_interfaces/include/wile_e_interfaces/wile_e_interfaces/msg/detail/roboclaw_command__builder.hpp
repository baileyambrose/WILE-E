// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wile_e_interfaces:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_COMMAND__BUILDER_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wile_e_interfaces/msg/detail/roboclaw_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wile_e_interfaces
{

namespace msg
{

namespace builder
{

class Init_RoboclawCommand_left_wheel
{
public:
  explicit Init_RoboclawCommand_left_wheel(::wile_e_interfaces::msg::RoboclawCommand & msg)
  : msg_(msg)
  {}
  ::wile_e_interfaces::msg::RoboclawCommand left_wheel(::wile_e_interfaces::msg::RoboclawCommand::_left_wheel_type arg)
  {
    msg_.left_wheel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawCommand msg_;
};

class Init_RoboclawCommand_right_wheel
{
public:
  explicit Init_RoboclawCommand_right_wheel(::wile_e_interfaces::msg::RoboclawCommand & msg)
  : msg_(msg)
  {}
  Init_RoboclawCommand_left_wheel right_wheel(::wile_e_interfaces::msg::RoboclawCommand::_right_wheel_type arg)
  {
    msg_.right_wheel = std::move(arg);
    return Init_RoboclawCommand_left_wheel(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawCommand msg_;
};

class Init_RoboclawCommand_left_elbow
{
public:
  explicit Init_RoboclawCommand_left_elbow(::wile_e_interfaces::msg::RoboclawCommand & msg)
  : msg_(msg)
  {}
  Init_RoboclawCommand_right_wheel left_elbow(::wile_e_interfaces::msg::RoboclawCommand::_left_elbow_type arg)
  {
    msg_.left_elbow = std::move(arg);
    return Init_RoboclawCommand_right_wheel(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawCommand msg_;
};

class Init_RoboclawCommand_right_elbow
{
public:
  explicit Init_RoboclawCommand_right_elbow(::wile_e_interfaces::msg::RoboclawCommand & msg)
  : msg_(msg)
  {}
  Init_RoboclawCommand_left_elbow right_elbow(::wile_e_interfaces::msg::RoboclawCommand::_right_elbow_type arg)
  {
    msg_.right_elbow = std::move(arg);
    return Init_RoboclawCommand_left_elbow(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawCommand msg_;
};

class Init_RoboclawCommand_left_shoulder
{
public:
  explicit Init_RoboclawCommand_left_shoulder(::wile_e_interfaces::msg::RoboclawCommand & msg)
  : msg_(msg)
  {}
  Init_RoboclawCommand_right_elbow left_shoulder(::wile_e_interfaces::msg::RoboclawCommand::_left_shoulder_type arg)
  {
    msg_.left_shoulder = std::move(arg);
    return Init_RoboclawCommand_right_elbow(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawCommand msg_;
};

class Init_RoboclawCommand_right_shoulder
{
public:
  Init_RoboclawCommand_right_shoulder()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoboclawCommand_left_shoulder right_shoulder(::wile_e_interfaces::msg::RoboclawCommand::_right_shoulder_type arg)
  {
    msg_.right_shoulder = std::move(arg);
    return Init_RoboclawCommand_left_shoulder(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::msg::RoboclawCommand>()
{
  return wile_e_interfaces::msg::builder::Init_RoboclawCommand_right_shoulder();
}

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_COMMAND__BUILDER_HPP_
