// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wile_e_interfaces:msg/ArduinoCommand.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/arduino_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wile_e_interfaces/msg/detail/arduino_command__struct.hpp"

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
  const wile_e_interfaces::msg::ArduinoCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tail
  cdr << ros_message.tail;
  // Member: head_raise
  cdr << ros_message.head_raise;
  // Member: head_turn
  cdr << ros_message.head_turn;
  // Member: eyes
  cdr << ros_message.eyes;
  // Member: fan
  cdr << ros_message.fan;
  // Member: headlight
  cdr << ros_message.headlight;
  // Member: face_detection
  cdr << ros_message.face_detection;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wile_e_interfaces::msg::ArduinoCommand & ros_message)
{
  // Member: tail
  cdr >> ros_message.tail;

  // Member: head_raise
  cdr >> ros_message.head_raise;

  // Member: head_turn
  cdr >> ros_message.head_turn;

  // Member: eyes
  cdr >> ros_message.eyes;

  // Member: fan
  cdr >> ros_message.fan;

  // Member: headlight
  cdr >> ros_message.headlight;

  // Member: face_detection
  cdr >> ros_message.face_detection;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
get_serialized_size(
  const wile_e_interfaces::msg::ArduinoCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tail
  {
    size_t item_size = sizeof(ros_message.tail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: head_raise
  {
    size_t item_size = sizeof(ros_message.head_raise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: head_turn
  {
    size_t item_size = sizeof(ros_message.head_turn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eyes
  {
    size_t item_size = sizeof(ros_message.eyes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fan
  {
    size_t item_size = sizeof(ros_message.fan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: headlight
  {
    size_t item_size = sizeof(ros_message.headlight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: face_detection
  {
    size_t item_size = sizeof(ros_message.face_detection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wile_e_interfaces
max_serialized_size_ArduinoCommand(
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


  // Member: tail
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: head_raise
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: head_turn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: eyes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: headlight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: face_detection
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wile_e_interfaces::msg::ArduinoCommand;
    is_plain =
      (
      offsetof(DataType, face_detection) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArduinoCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wile_e_interfaces::msg::ArduinoCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArduinoCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wile_e_interfaces::msg::ArduinoCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArduinoCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wile_e_interfaces::msg::ArduinoCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArduinoCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArduinoCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArduinoCommand__callbacks = {
  "wile_e_interfaces::msg",
  "ArduinoCommand",
  _ArduinoCommand__cdr_serialize,
  _ArduinoCommand__cdr_deserialize,
  _ArduinoCommand__get_serialized_size,
  _ArduinoCommand__max_serialized_size
};

static rosidl_message_type_support_t _ArduinoCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArduinoCommand__callbacks,
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
get_message_type_support_handle<wile_e_interfaces::msg::ArduinoCommand>()
{
  return &wile_e_interfaces::msg::typesupport_fastrtps_cpp::_ArduinoCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wile_e_interfaces, msg, ArduinoCommand)() {
  return &wile_e_interfaces::msg::typesupport_fastrtps_cpp::_ArduinoCommand__handle;
}

#ifdef __cplusplus
}
#endif
