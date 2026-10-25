// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wile_e_interfaces:msg/FileCommand.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/file_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wile_e_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wile_e_interfaces/msg/detail/file_command__struct.h"
#include "wile_e_interfaces/msg/detail/file_command__functions.h"
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


using _FileCommand__ros_msg_type = wile_e_interfaces__msg__FileCommand;

static bool _FileCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FileCommand__ros_msg_type * ros_message = static_cast<const _FileCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: right_bicep
  {
    cdr << ros_message->right_bicep;
  }

  // Field name: left_bicep
  {
    cdr << ros_message->left_bicep;
  }

  // Field name: right_forearm
  {
    cdr << ros_message->right_forearm;
  }

  // Field name: left_forearm
  {
    cdr << ros_message->left_forearm;
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

  // Field name: face_detection
  {
    cdr << ros_message->face_detection;
  }

  return true;
}

static bool _FileCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FileCommand__ros_msg_type * ros_message = static_cast<_FileCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: right_bicep
  {
    cdr >> ros_message->right_bicep;
  }

  // Field name: left_bicep
  {
    cdr >> ros_message->left_bicep;
  }

  // Field name: right_forearm
  {
    cdr >> ros_message->right_forearm;
  }

  // Field name: left_forearm
  {
    cdr >> ros_message->left_forearm;
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

  // Field name: face_detection
  {
    cdr >> ros_message->face_detection;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wile_e_interfaces
size_t get_serialized_size_wile_e_interfaces__msg__FileCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FileCommand__ros_msg_type * ros_message = static_cast<const _FileCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name right_bicep
  {
    size_t item_size = sizeof(ros_message->right_bicep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_bicep
  {
    size_t item_size = sizeof(ros_message->left_bicep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_forearm
  {
    size_t item_size = sizeof(ros_message->right_forearm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_forearm
  {
    size_t item_size = sizeof(ros_message->left_forearm);
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
  // field.name face_detection
  {
    size_t item_size = sizeof(ros_message->face_detection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FileCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wile_e_interfaces__msg__FileCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wile_e_interfaces
size_t max_serialized_size_wile_e_interfaces__msg__FileCommand(
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

  // member: right_bicep
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_bicep
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_forearm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_forearm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_wheel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_wheel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
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
  // member: face_detection
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
    using DataType = wile_e_interfaces__msg__FileCommand;
    is_plain =
      (
      offsetof(DataType, face_detection) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FileCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wile_e_interfaces__msg__FileCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FileCommand = {
  "wile_e_interfaces::msg",
  "FileCommand",
  _FileCommand__cdr_serialize,
  _FileCommand__cdr_deserialize,
  _FileCommand__get_serialized_size,
  _FileCommand__max_serialized_size
};

static rosidl_message_type_support_t _FileCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FileCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wile_e_interfaces, msg, FileCommand)() {
  return &_FileCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
