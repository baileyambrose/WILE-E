// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wile_e_interfaces:msg/ActionCommand.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/action_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wile_e_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wile_e_interfaces/msg/detail/action_command__struct.h"
#include "wile_e_interfaces/msg/detail/action_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ActionCommand__ros_msg_type = wile_e_interfaces__msg__ActionCommand;

static bool _ActionCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionCommand__ros_msg_type * ros_message = static_cast<const _ActionCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: right_shoulder
  {
    cdr << ros_message->right_shoulder;
  }

  // Field name: left_shoulder
  {
    cdr << ros_message->left_shoulder;
  }

  // Field name: right_elbow
  {
    cdr << ros_message->right_elbow;
  }

  // Field name: left_elbow
  {
    cdr << ros_message->left_elbow;
  }

  // Field name: right_wheel
  {
    cdr << ros_message->right_wheel;
  }

  // Field name: left_wheel
  {
    cdr << ros_message->left_wheel;
  }

  // Field name: tail
  {
    cdr << ros_message->tail;
  }

  // Field name: head_raise
  {
    cdr << ros_message->head_raise;
  }

  // Field name: head_turn
  {
    cdr << ros_message->head_turn;
  }

  // Field name: eyes
  {
    cdr << ros_message->eyes;
  }

  // Field name: fan
  {
    cdr << ros_message->fan;
  }

  // Field name: headlight
  {
    cdr << ros_message->headlight;
  }

  // Field name: data
  {
    cdr << ros_message->data;
  }

  return true;
}

static bool _ActionCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionCommand__ros_msg_type * ros_message = static_cast<_ActionCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: right_shoulder
  {
    cdr >> ros_message->right_shoulder;
  }

  // Field name: left_shoulder
  {
    cdr >> ros_message->left_shoulder;
  }

  // Field name: right_elbow
  {
    cdr >> ros_message->right_elbow;
  }

  // Field name: left_elbow
  {
    cdr >> ros_message->left_elbow;
  }

  // Field name: right_wheel
  {
    cdr >> ros_message->right_wheel;
  }

  // Field name: left_wheel
  {
    cdr >> ros_message->left_wheel;
  }

  // Field name: tail
  {
    cdr >> ros_message->tail;
  }

  // Field name: head_raise
  {
    cdr >> ros_message->head_raise;
  }

  // Field name: head_turn
  {
    cdr >> ros_message->head_turn;
  }

  // Field name: eyes
  {
    cdr >> ros_message->eyes;
  }

  // Field name: fan
  {
    cdr >> ros_message->fan;
  }

  // Field name: headlight
  {
    cdr >> ros_message->headlight;
  }

  // Field name: data
  {
    cdr >> ros_message->data;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wile_e_interfaces
size_t get_serialized_size_wile_e_interfaces__msg__ActionCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionCommand__ros_msg_type * ros_message = static_cast<const _ActionCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name right_shoulder
  {
    size_t item_size = sizeof(ros_message->right_shoulder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_shoulder
  {
    size_t item_size = sizeof(ros_message->left_shoulder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_elbow
  {
    size_t item_size = sizeof(ros_message->right_elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_elbow
  {
    size_t item_size = sizeof(ros_message->left_elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_wheel
  {
    size_t item_size = sizeof(ros_message->right_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_wheel
  {
    size_t item_size = sizeof(ros_message->left_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tail
  {
    size_t item_size = sizeof(ros_message->tail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name head_raise
  {
    size_t item_size = sizeof(ros_message->head_raise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name head_turn
  {
    size_t item_size = sizeof(ros_message->head_turn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eyes
  {
    size_t item_size = sizeof(ros_message->eyes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fan
  {
    size_t item_size = sizeof(ros_message->fan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name headlight
  {
    size_t item_size = sizeof(ros_message->headlight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data
  {
    size_t item_size = sizeof(ros_message->data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ActionCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wile_e_interfaces__msg__ActionCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wile_e_interfaces
size_t max_serialized_size_wile_e_interfaces__msg__ActionCommand(
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

  // member: right_shoulder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_shoulder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_elbow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_elbow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_wheel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_wheel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tail
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: head_raise
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: head_turn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: eyes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: headlight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data
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
    using DataType = wile_e_interfaces__msg__ActionCommand;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ActionCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wile_e_interfaces__msg__ActionCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ActionCommand = {
  "wile_e_interfaces::msg",
  "ActionCommand",
  _ActionCommand__cdr_serialize,
  _ActionCommand__cdr_deserialize,
  _ActionCommand__get_serialized_size,
  _ActionCommand__max_serialized_size
};

static rosidl_message_type_support_t _ActionCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wile_e_interfaces, msg, ActionCommand)() {
  return &_ActionCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
