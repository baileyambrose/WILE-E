// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from norlab_custom_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

#ifndef NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__BUILDER_HPP_
#define NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "norlab_custom_interfaces/msg/detail/encoder_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace norlab_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_EncoderState_ticks_per_meter
{
public:
  explicit Init_EncoderState_ticks_per_meter(::norlab_custom_interfaces::msg::EncoderState & msg)
  : msg_(msg)
  {}
  ::norlab_custom_interfaces::msg::EncoderState ticks_per_meter(::norlab_custom_interfaces::msg::EncoderState::_ticks_per_meter_type arg)
  {
    msg_.ticks_per_meter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::EncoderState msg_;
};

class Init_EncoderState_ticks_per_rotation
{
public:
  explicit Init_EncoderState_ticks_per_rotation(::norlab_custom_interfaces::msg::EncoderState & msg)
  : msg_(msg)
  {}
  Init_EncoderState_ticks_per_meter ticks_per_rotation(::norlab_custom_interfaces::msg::EncoderState::_ticks_per_rotation_type arg)
  {
    msg_.ticks_per_rotation = std::move(arg);
    return Init_EncoderState_ticks_per_meter(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::EncoderState msg_;
};

class Init_EncoderState_velocity
{
public:
  explicit Init_EncoderState_velocity(::norlab_custom_interfaces::msg::EncoderState & msg)
  : msg_(msg)
  {}
  Init_EncoderState_ticks_per_rotation velocity(::norlab_custom_interfaces::msg::EncoderState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_EncoderState_ticks_per_rotation(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::EncoderState msg_;
};

class Init_EncoderState_position
{
public:
  explicit Init_EncoderState_position(::norlab_custom_interfaces::msg::EncoderState & msg)
  : msg_(msg)
  {}
  Init_EncoderState_velocity position(::norlab_custom_interfaces::msg::EncoderState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_EncoderState_velocity(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::EncoderState msg_;
};

class Init_EncoderState_header
{
public:
  Init_EncoderState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncoderState_position header(::norlab_custom_interfaces::msg::EncoderState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EncoderState_position(msg_);
  }

private:
  ::norlab_custom_interfaces::msg::EncoderState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::norlab_custom_interfaces::msg::EncoderState>()
{
  return norlab_custom_interfaces::msg::builder::Init_EncoderState_header();
}

}  // namespace norlab_custom_interfaces

#endif  // NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__BUILDER_HPP_
