// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wile_e_interfaces:msg/FileCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__FILE_COMMAND__BUILDER_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__FILE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wile_e_interfaces/msg/detail/file_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wile_e_interfaces
{

namespace msg
{

namespace builder
{

class Init_FileCommand_face_detection
{
public:
  explicit Init_FileCommand_face_detection(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  ::wile_e_interfaces::msg::FileCommand face_detection(::wile_e_interfaces::msg::FileCommand::_face_detection_type arg)
  {
    msg_.face_detection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_headlight
{
public:
  explicit Init_FileCommand_headlight(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_face_detection headlight(::wile_e_interfaces::msg::FileCommand::_headlight_type arg)
  {
    msg_.headlight = std::move(arg);
    return Init_FileCommand_face_detection(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_fan
{
public:
  explicit Init_FileCommand_fan(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_headlight fan(::wile_e_interfaces::msg::FileCommand::_fan_type arg)
  {
    msg_.fan = std::move(arg);
    return Init_FileCommand_headlight(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_eyes
{
public:
  explicit Init_FileCommand_eyes(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_fan eyes(::wile_e_interfaces::msg::FileCommand::_eyes_type arg)
  {
    msg_.eyes = std::move(arg);
    return Init_FileCommand_fan(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_head_turn
{
public:
  explicit Init_FileCommand_head_turn(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_eyes head_turn(::wile_e_interfaces::msg::FileCommand::_head_turn_type arg)
  {
    msg_.head_turn = std::move(arg);
    return Init_FileCommand_eyes(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_head_raise
{
public:
  explicit Init_FileCommand_head_raise(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_head_turn head_raise(::wile_e_interfaces::msg::FileCommand::_head_raise_type arg)
  {
    msg_.head_raise = std::move(arg);
    return Init_FileCommand_head_turn(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_tail
{
public:
  explicit Init_FileCommand_tail(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_head_raise tail(::wile_e_interfaces::msg::FileCommand::_tail_type arg)
  {
    msg_.tail = std::move(arg);
    return Init_FileCommand_head_raise(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_left_wheel
{
public:
  explicit Init_FileCommand_left_wheel(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_tail left_wheel(::wile_e_interfaces::msg::FileCommand::_left_wheel_type arg)
  {
    msg_.left_wheel = std::move(arg);
    return Init_FileCommand_tail(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_right_wheel
{
public:
  explicit Init_FileCommand_right_wheel(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_left_wheel right_wheel(::wile_e_interfaces::msg::FileCommand::_right_wheel_type arg)
  {
    msg_.right_wheel = std::move(arg);
    return Init_FileCommand_left_wheel(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_left_forearm
{
public:
  explicit Init_FileCommand_left_forearm(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_right_wheel left_forearm(::wile_e_interfaces::msg::FileCommand::_left_forearm_type arg)
  {
    msg_.left_forearm = std::move(arg);
    return Init_FileCommand_right_wheel(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_right_forearm
{
public:
  explicit Init_FileCommand_right_forearm(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_left_forearm right_forearm(::wile_e_interfaces::msg::FileCommand::_right_forearm_type arg)
  {
    msg_.right_forearm = std::move(arg);
    return Init_FileCommand_left_forearm(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_left_bicep
{
public:
  explicit Init_FileCommand_left_bicep(::wile_e_interfaces::msg::FileCommand & msg)
  : msg_(msg)
  {}
  Init_FileCommand_right_forearm left_bicep(::wile_e_interfaces::msg::FileCommand::_left_bicep_type arg)
  {
    msg_.left_bicep = std::move(arg);
    return Init_FileCommand_right_forearm(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

class Init_FileCommand_right_bicep
{
public:
  Init_FileCommand_right_bicep()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileCommand_left_bicep right_bicep(::wile_e_interfaces::msg::FileCommand::_right_bicep_type arg)
  {
    msg_.right_bicep = std::move(arg);
    return Init_FileCommand_left_bicep(msg_);
  }

private:
  ::wile_e_interfaces::msg::FileCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::msg::FileCommand>()
{
  return wile_e_interfaces::msg::builder::Init_FileCommand_right_bicep();
}

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__FILE_COMMAND__BUILDER_HPP_
