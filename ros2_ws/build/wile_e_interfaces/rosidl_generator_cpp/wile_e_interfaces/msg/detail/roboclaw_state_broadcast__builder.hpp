// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wile_e_interfaces:msg/RoboclawStateBroadcast.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_STATE_BROADCAST__BUILDER_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_STATE_BROADCAST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wile_e_interfaces/msg/detail/roboclaw_state_broadcast__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wile_e_interfaces
{

namespace msg
{

namespace builder
{

class Init_RoboclawStateBroadcast_left_wheel_speed
{
public:
  explicit Init_RoboclawStateBroadcast_left_wheel_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
  : msg_(msg)
  {}
  ::wile_e_interfaces::msg::RoboclawStateBroadcast left_wheel_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast::_left_wheel_speed_type arg)
  {
    msg_.left_wheel_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

class Init_RoboclawStateBroadcast_right_wheel_speed
{
public:
  explicit Init_RoboclawStateBroadcast_right_wheel_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
  : msg_(msg)
  {}
  Init_RoboclawStateBroadcast_left_wheel_speed right_wheel_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast::_right_wheel_speed_type arg)
  {
    msg_.right_wheel_speed = std::move(arg);
    return Init_RoboclawStateBroadcast_left_wheel_speed(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

class Init_RoboclawStateBroadcast_left_elbow_speed
{
public:
  explicit Init_RoboclawStateBroadcast_left_elbow_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
  : msg_(msg)
  {}
  Init_RoboclawStateBroadcast_right_wheel_speed left_elbow_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast::_left_elbow_speed_type arg)
  {
    msg_.left_elbow_speed = std::move(arg);
    return Init_RoboclawStateBroadcast_right_wheel_speed(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

class Init_RoboclawStateBroadcast_right_elbow_speed
{
public:
  explicit Init_RoboclawStateBroadcast_right_elbow_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
  : msg_(msg)
  {}
  Init_RoboclawStateBroadcast_left_elbow_speed right_elbow_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast::_right_elbow_speed_type arg)
  {
    msg_.right_elbow_speed = std::move(arg);
    return Init_RoboclawStateBroadcast_left_elbow_speed(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

class Init_RoboclawStateBroadcast_left_shoulder_speed
{
public:
  explicit Init_RoboclawStateBroadcast_left_shoulder_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
  : msg_(msg)
  {}
  Init_RoboclawStateBroadcast_right_elbow_speed left_shoulder_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast::_left_shoulder_speed_type arg)
  {
    msg_.left_shoulder_speed = std::move(arg);
    return Init_RoboclawStateBroadcast_right_elbow_speed(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

class Init_RoboclawStateBroadcast_right_shoulder_speed
{
public:
  explicit Init_RoboclawStateBroadcast_right_shoulder_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
  : msg_(msg)
  {}
  Init_RoboclawStateBroadcast_left_shoulder_speed right_shoulder_speed(::wile_e_interfaces::msg::RoboclawStateBroadcast::_right_shoulder_speed_type arg)
  {
    msg_.right_shoulder_speed = std::move(arg);
    return Init_RoboclawStateBroadcast_left_shoulder_speed(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

class Init_RoboclawStateBroadcast_left_elbow
{
public:
  explicit Init_RoboclawStateBroadcast_left_elbow(::wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
  : msg_(msg)
  {}
  Init_RoboclawStateBroadcast_right_shoulder_speed left_elbow(::wile_e_interfaces::msg::RoboclawStateBroadcast::_left_elbow_type arg)
  {
    msg_.left_elbow = std::move(arg);
    return Init_RoboclawStateBroadcast_right_shoulder_speed(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

class Init_RoboclawStateBroadcast_right_elbow
{
public:
  explicit Init_RoboclawStateBroadcast_right_elbow(::wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
  : msg_(msg)
  {}
  Init_RoboclawStateBroadcast_left_elbow right_elbow(::wile_e_interfaces::msg::RoboclawStateBroadcast::_right_elbow_type arg)
  {
    msg_.right_elbow = std::move(arg);
    return Init_RoboclawStateBroadcast_left_elbow(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

class Init_RoboclawStateBroadcast_left_shoulder
{
public:
  explicit Init_RoboclawStateBroadcast_left_shoulder(::wile_e_interfaces::msg::RoboclawStateBroadcast & msg)
  : msg_(msg)
  {}
  Init_RoboclawStateBroadcast_right_elbow left_shoulder(::wile_e_interfaces::msg::RoboclawStateBroadcast::_left_shoulder_type arg)
  {
    msg_.left_shoulder = std::move(arg);
    return Init_RoboclawStateBroadcast_right_elbow(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

class Init_RoboclawStateBroadcast_right_shoulder
{
public:
  Init_RoboclawStateBroadcast_right_shoulder()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoboclawStateBroadcast_left_shoulder right_shoulder(::wile_e_interfaces::msg::RoboclawStateBroadcast::_right_shoulder_type arg)
  {
    msg_.right_shoulder = std::move(arg);
    return Init_RoboclawStateBroadcast_left_shoulder(msg_);
  }

private:
  ::wile_e_interfaces::msg::RoboclawStateBroadcast msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::msg::RoboclawStateBroadcast>()
{
  return wile_e_interfaces::msg::builder::Init_RoboclawStateBroadcast_right_shoulder();
}

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_STATE_BROADCAST__BUILDER_HPP_
