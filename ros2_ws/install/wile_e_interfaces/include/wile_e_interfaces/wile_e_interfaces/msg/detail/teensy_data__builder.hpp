// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wile_e_interfaces:msg/TeensyData.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__TEENSY_DATA__BUILDER_HPP_
#define WILE_E_INTERFACES__MSG__DETAIL__TEENSY_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wile_e_interfaces/msg/detail/teensy_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wile_e_interfaces
{

namespace msg
{

namespace builder
{

class Init_TeensyData_tail_vel
{
public:
  explicit Init_TeensyData_tail_vel(::wile_e_interfaces::msg::TeensyData & msg)
  : msg_(msg)
  {}
  ::wile_e_interfaces::msg::TeensyData tail_vel(::wile_e_interfaces::msg::TeensyData::_tail_vel_type arg)
  {
    msg_.tail_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wile_e_interfaces::msg::TeensyData msg_;
};

class Init_TeensyData_tail
{
public:
  explicit Init_TeensyData_tail(::wile_e_interfaces::msg::TeensyData & msg)
  : msg_(msg)
  {}
  Init_TeensyData_tail_vel tail(::wile_e_interfaces::msg::TeensyData::_tail_type arg)
  {
    msg_.tail = std::move(arg);
    return Init_TeensyData_tail_vel(msg_);
  }

private:
  ::wile_e_interfaces::msg::TeensyData msg_;
};

class Init_TeensyData_right_elbow
{
public:
  explicit Init_TeensyData_right_elbow(::wile_e_interfaces::msg::TeensyData & msg)
  : msg_(msg)
  {}
  Init_TeensyData_tail right_elbow(::wile_e_interfaces::msg::TeensyData::_right_elbow_type arg)
  {
    msg_.right_elbow = std::move(arg);
    return Init_TeensyData_tail(msg_);
  }

private:
  ::wile_e_interfaces::msg::TeensyData msg_;
};

class Init_TeensyData_left_elbow
{
public:
  explicit Init_TeensyData_left_elbow(::wile_e_interfaces::msg::TeensyData & msg)
  : msg_(msg)
  {}
  Init_TeensyData_right_elbow left_elbow(::wile_e_interfaces::msg::TeensyData::_left_elbow_type arg)
  {
    msg_.left_elbow = std::move(arg);
    return Init_TeensyData_right_elbow(msg_);
  }

private:
  ::wile_e_interfaces::msg::TeensyData msg_;
};

class Init_TeensyData_right_shoulder
{
public:
  explicit Init_TeensyData_right_shoulder(::wile_e_interfaces::msg::TeensyData & msg)
  : msg_(msg)
  {}
  Init_TeensyData_left_elbow right_shoulder(::wile_e_interfaces::msg::TeensyData::_right_shoulder_type arg)
  {
    msg_.right_shoulder = std::move(arg);
    return Init_TeensyData_left_elbow(msg_);
  }

private:
  ::wile_e_interfaces::msg::TeensyData msg_;
};

class Init_TeensyData_left_shoulder
{
public:
  Init_TeensyData_left_shoulder()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeensyData_right_shoulder left_shoulder(::wile_e_interfaces::msg::TeensyData::_left_shoulder_type arg)
  {
    msg_.left_shoulder = std::move(arg);
    return Init_TeensyData_right_shoulder(msg_);
  }

private:
  ::wile_e_interfaces::msg::TeensyData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wile_e_interfaces::msg::TeensyData>()
{
  return wile_e_interfaces::msg::builder::Init_TeensyData_left_shoulder();
}

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__MSG__DETAIL__TEENSY_DATA__BUILDER_HPP_
