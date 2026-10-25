// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wile_e_interfaces:msg/ActionCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ACTION_COMMAND__BUILDER_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ACTION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wile_e_interfaces/msg/detail/action_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wile_e_interfaces
{

namespace msg
{

namespace builder
{

class Init_ActionCommand_data
{
public:
  explicit Init_ActionCommand_data(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  ::wile_e_interfaces::msg::ActionCommand data(::wile_e_interfaces::msg::ActionCommand::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_headlight
{
public:
  explicit Init_ActionCommand_headlight(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_data headlight(::wile_e_interfaces::msg::ActionCommand::_headlight_type arg)
  {
    msg_.headlight = std::move(arg);
    return Init_ActionCommand_data(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_fan
{
public:
  explicit Init_ActionCommand_fan(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_headlight fan(::wile_e_interfaces::msg::ActionCommand::_fan_type arg)
  {
    msg_.fan = std::move(arg);
    return Init_ActionCommand_headlight(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_eyes
{
public:
  explicit Init_ActionCommand_eyes(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_fan eyes(::wile_e_interfaces::msg::ActionCommand::_eyes_type arg)
  {
    msg_.eyes = std::move(arg);
    return Init_ActionCommand_fan(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_head_turn
{
public:
  explicit Init_ActionCommand_head_turn(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_eyes head_turn(::wile_e_interfaces::msg::ActionCommand::_head_turn_type arg)
  {
    msg_.head_turn = std::move(arg);
    return Init_ActionCommand_eyes(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_head_raise
{
public:
  explicit Init_ActionCommand_head_raise(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_head_turn head_raise(::wile_e_interfaces::msg::ActionCommand::_head_raise_type arg)
  {
    msg_.head_raise = std::move(arg);
    return Init_ActionCommand_head_turn(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_tail
{
public:
  explicit Init_ActionCommand_tail(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_head_raise tail(::wile_e_interfaces::msg::ActionCommand::_tail_type arg)
  {
    msg_.tail = std::move(arg);
    return Init_ActionCommand_head_raise(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_left_wheel
{
public:
  explicit Init_ActionCommand_left_wheel(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_tail left_wheel(::wile_e_interfaces::msg::ActionCommand::_left_wheel_type arg)
  {
    msg_.left_wheel = std::move(arg);
    return Init_ActionCommand_tail(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_right_wheel
{
public:
  explicit Init_ActionCommand_right_wheel(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_left_wheel right_wheel(::wile_e_interfaces::msg::ActionCommand::_right_wheel_type arg)
  {
    msg_.right_wheel = std::move(arg);
    return Init_ActionCommand_left_wheel(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_left_elbow
{
public:
  explicit Init_ActionCommand_left_elbow(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_right_wheel left_elbow(::wile_e_interfaces::msg::ActionCommand::_left_elbow_type arg)
  {
    msg_.left_elbow = std::move(arg);
    return Init_ActionCommand_right_wheel(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_right_elbow
{
public:
  explicit Init_ActionCommand_right_elbow(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_left_elbow right_elbow(::wile_e_interfaces::msg::ActionCommand::_right_elbow_type arg)
  {
    msg_.right_elbow = std::move(arg);
    return Init_ActionCommand_left_elbow(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_left_shoulder
{
public:
  explicit Init_ActionCommand_left_shoulder(::wile_e_interfaces::msg::ActionCommand & msg)
  : msg_(msg)
  {}
  Init_ActionCommand_right_elbow left_shoulder(::wile_e_interfaces::msg::ActionCommand::_left_shoulder_type arg)
  {
    msg_.left_shoulder = std::move(arg);
    return Init_ActionCommand_right_elbow(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

class Init_ActionCommand_right_shoulder
{
public:
  Init_ActionCommand_right_shoulder()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionCommand_left_shoulder right_shoulder(::wile_e_interfaces::msg::ActionCommand::_right_shoulder_type arg)
  {
    msg_.right_shoulder = std::move(arg);
    return Init_ActionCommand_left_shoulder(msg_);
  }

private:
  ::wile_e_interfaces::msg::ActionCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::msg::ActionCommand>()
{
  return wile_e_interfaces::msg::builder::Init_ActionCommand_right_shoulder();
}

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ACTION_COMMAND__BUILDER_HPP_
