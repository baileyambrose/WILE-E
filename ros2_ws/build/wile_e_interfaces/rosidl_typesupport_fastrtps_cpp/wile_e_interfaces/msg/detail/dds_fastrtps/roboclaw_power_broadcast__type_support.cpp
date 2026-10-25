// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wile_e_interfaces:msg/RoboclawPowerBroadcast.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/roboclaw_power_broadcast__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wile_e_interfaces/msg/detail/roboclaw_power_broadcast__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace wile_e_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
cdr_serialize(
  const wile_e_interfaces::msg::RoboclawPowerBroadcast & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: battery_voltage
  cdr << ros_message.battery_voltage;
  // Member: current_draw
  cdr << ros_message.current_draw;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wile_e_interfaces::msg::RoboclawPowerBroadcast & ros_message)
{
  // Member: battery_voltage
  cdr >> ros_message.battery_voltage;

  // Member: current_draw
  cdr >> ros_message.current_draw;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
get_serialized_size(
  const wile_e_interfaces::msg::RoboclawPowerBroadcast & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: battery_voltage
  {
    size_t item_size = sizeof(ros_message.battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_draw
  {
    size_t item_size = sizeof(ros_message.current_draw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
max_serialized_size_RoboclawPowerBroadcast(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_draw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wile_e_interfaces::msg::RoboclawPowerBroadcast;
    is_plain =
      (
      offsetof(DataType, current_draw) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RoboclawPowerBroadcast__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wile_e_interfaces::msg::RoboclawPowerBroadcast *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RoboclawPowerBroadcast__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wile_e_interfaces::msg::RoboclawPowerBroadcast *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RoboclawPowerBroadcast__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wile_e_interfaces::msg::RoboclawPowerBroadcast *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RoboclawPowerBroadcast__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RoboclawPowerBroadcast(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RoboclawPowerBroadcast__callbacks = {
  "wile_e_interfaces::msg",
  "RoboclawPowerBroadcast",
  _RoboclawPowerBroadcast__cdr_serialize,
  _RoboclawPowerBroadcast__cdr_deserialize,
  _RoboclawPowerBroadcast__get_serialized_size,
  _RoboclawPowerBroadcast__max_serialized_size
};

static rosidl_message_type_support_t _RoboclawPowerBroadcast__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RoboclawPowerBroadcast__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wile_e_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wile_e_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<wile_e_interfaces::msg::RoboclawPowerBroadcast>()
{
  return &wile_e_interfaces::msg::typesupport_fastrtps_cpp::_RoboclawPowerBroadcast__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wile_e_interfaces, msg, RoboclawPowerBroadcast)() {
  return &wile_e_interfaces::msg::typesupport_fastrtps_cpp::_RoboclawPowerBroadcast__handle;
}

#ifdef __cplusplus
}
#endif
