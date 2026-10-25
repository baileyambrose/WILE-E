// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wile_e_interfaces:msg/ArduinoCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__BUILDER_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wile_e_interfaces/msg/detail/arduino_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wile_e_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArduinoCommand_face_detection
{
public:
  explicit Init_ArduinoCommand_face_detection(::wile_e_interfaces::msg::ArduinoCommand & msg)
  : msg_(msg)
  {}
  ::wile_e_interfaces::msg::ArduinoCommand face_detection(::wile_e_interfaces::msg::ArduinoCommand::_face_detection_type arg)
  {
    msg_.face_detection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::msg::ArduinoCommand msg_;
};

class Init_ArduinoCommand_headlight
{
public:
  explicit Init_ArduinoCommand_headlight(::wile_e_interfaces::msg::ArduinoCommand & msg)
  : msg_(msg)
  {}
  Init_ArduinoCommand_face_detection headlight(::wile_e_interfaces::msg::ArduinoCommand::_headlight_type arg)
  {
    msg_.headlight = std::move(arg);
    return Init_ArduinoCommand_face_detection(msg_);
  }

private:
  ::wile_e_interfaces::msg::ArduinoCommand msg_;
};

class Init_ArduinoCommand_fan
{
public:
  explicit Init_ArduinoCommand_fan(::wile_e_interfaces::msg::ArduinoCommand & msg)
  : msg_(msg)
  {}
  Init_ArduinoCommand_headlight fan(::wile_e_interfaces::msg::ArduinoCommand::_fan_type arg)
  {
    msg_.fan = std::move(arg);
    return Init_ArduinoCommand_headlight(msg_);
  }

private:
  ::wile_e_interfaces::msg::ArduinoCommand msg_;
};

class Init_ArduinoCommand_eyes
{
public:
  explicit Init_ArduinoCommand_eyes(::wile_e_interfaces::msg::ArduinoCommand & msg)
  : msg_(msg)
  {}
  Init_ArduinoCommand_fan eyes(::wile_e_interfaces::msg::ArduinoCommand::_eyes_type arg)
  {
    msg_.eyes = std::move(arg);
    return Init_ArduinoCommand_fan(msg_);
  }

private:
  ::wile_e_interfaces::msg::ArduinoCommand msg_;
};

class Init_ArduinoCommand_head_turn
{
public:
  explicit Init_ArduinoCommand_head_turn(::wile_e_interfaces::msg::ArduinoCommand & msg)
  : msg_(msg)
  {}
  Init_ArduinoCommand_eyes head_turn(::wile_e_interfaces::msg::ArduinoCommand::_head_turn_type arg)
  {
    msg_.head_turn = std::move(arg);
    return Init_ArduinoCommand_eyes(msg_);
  }

private:
  ::wile_e_interfaces::msg::ArduinoCommand msg_;
};

class Init_ArduinoCommand_head_raise
{
public:
  explicit Init_ArduinoCommand_head_raise(::wile_e_interfaces::msg::ArduinoCommand & msg)
  : msg_(msg)
  {}
  Init_ArduinoCommand_head_turn head_raise(::wile_e_interfaces::msg::ArduinoCommand::_head_raise_type arg)
  {
    msg_.head_raise = std::move(arg);
    return Init_ArduinoCommand_head_turn(msg_);
  }

private:
  ::wile_e_interfaces::msg::ArduinoCommand msg_;
};

class Init_ArduinoCommand_tail
{
public:
  Init_ArduinoCommand_tail()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduinoCommand_head_raise tail(::wile_e_interfaces::msg::ArduinoCommand::_tail_type arg)
  {
    msg_.tail = std::move(arg);
    return Init_ArduinoCommand_head_raise(msg_);
  }

private:
  ::wile_e_interfaces::msg::ArduinoCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::msg::ArduinoCommand>()
{
  return wile_e_interfaces::msg::builder::Init_ArduinoCommand_tail();
}

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__BUILDER_HPP_
