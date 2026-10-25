// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wile_e_interfaces:msg/RoboclawBroadcast.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/roboclaw_broadcast__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wile_e_interfaces/msg/detail/roboclaw_broadcast__struct.hpp"

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
  const wile_e_interfaces::msg::RoboclawBroadcast & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right_shoulder
  cdr << ros_message.right_shoulder;
  // Member: left_shoulder
  cdr << ros_message.left_shoulder;
  // Member: right_elbow
  cdr << ros_message.right_elbow;
  // Member: left_elbow
  cdr << ros_message.left_elbow;
  // Member: right_wheel
  cdr << ros_message.right_wheel;
  // Member: left_wheel
  cdr << ros_message.left_wheel;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wile_e_interfaces::msg::RoboclawBroadcast & ros_message)
{
  // Member: right_shoulder
  cdr >> ros_message.right_shoulder;

  // Member: left_shoulder
  cdr >> ros_message.left_shoulder;

  // Member: right_elbow
  cdr >> ros_message.right_elbow;

  // Member: left_elbow
  cdr >> ros_message.left_elbow;

  // Member: right_wheel
  cdr >> ros_message.right_wheel;

  // Member: left_wheel
  cdr >> ros_message.left_wheel;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
get_serialized_size(
  const wile_e_interfaces::msg::RoboclawBroadcast & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right_shoulder
  {
    size_t item_size = sizeof(ros_message.right_shoulder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_shoulder
  {
    size_t item_size = sizeof(ros_message.left_shoulder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_elbow
  {
    size_t item_size = sizeof(ros_message.right_elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_elbow
  {
    size_t item_size = sizeof(ros_message.left_elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_wheel
  {
    size_t item_size = sizeof(ros_message.right_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_wheel
  {
    size_t item_size = sizeof(ros_message.left_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
max_serialized_size_RoboclawBroadcast(
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


  // Member: right_shoulder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_shoulder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_elbow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_elbow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_wheel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_wheel
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
    using DataType = wile_e_interfaces::msg::RoboclawBroadcast;
    is_plain =
      (
      offsetof(DataType, left_wheel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RoboclawBroadcast__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wile_e_interfaces::msg::RoboclawBroadcast *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RoboclawBroadcast__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wile_e_interfaces::msg::RoboclawBroadcast *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RoboclawBroadcast__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wile_e_interfaces::msg::RoboclawBroadcast *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RoboclawBroadcast__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RoboclawBroadcast(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RoboclawBroadcast__callbacks = {
  "wile_e_interfaces::msg",
  "RoboclawBroadcast",
  _RoboclawBroadcast__cdr_serialize,
  _RoboclawBroadcast__cdr_deserialize,
  _RoboclawBroadcast__get_serialized_size,
  _RoboclawBroadcast__max_serialized_size
};

static rosidl_message_type_support_t _RoboclawBroadcast__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RoboclawBroadcast__callbacks,
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
get_message_type_support_handle<wile_e_interfaces::msg::RoboclawBroadcast>()
{
  return &wile_e_interfaces::msg::typesupport_fastrtps_cpp::_RoboclawBroadcast__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wile_e_interfaces, msg, RoboclawBroadcast)() {
  return &wile_e_interfaces::msg::typesupport_fastrtps_cpp::_RoboclawBroadcast__handle;
}

#ifdef __cplusplus
}
#endif
