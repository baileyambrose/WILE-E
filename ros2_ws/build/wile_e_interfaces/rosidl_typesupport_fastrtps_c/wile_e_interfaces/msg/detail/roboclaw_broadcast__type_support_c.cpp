// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wile_e_interfaces:msg/RoboclawBroadcast.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/roboclaw_broadcast__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wile_e_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wile_e_interfaces/msg/detail/roboclaw_broadcast__struct.h"
#include "wile_e_interfaces/msg/detail/roboclaw_broadcast__functions.h"
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


using _RoboclawBroadcast__ros_msg_type = wile_e_interfaces__msg__RoboclawBroadcast;

static bool _RoboclawBroadcast__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoboclawBroadcast__ros_msg_type * ros_message = static_cast<const _RoboclawBroadcast__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

static bool _RoboclawBroadcast__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoboclawBroadcast__ros_msg_type * ros_message = static_cast<_RoboclawBroadcast__ros_msg_type *>(untyped_ros_message);
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

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wile_e_interfaces
size_t get_serialized_size_wile_e_interfaces__msg__RoboclawBroadcast(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoboclawBroadcast__ros_msg_type * ros_message = static_cast<const _RoboclawBroadcast__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _RoboclawBroadcast__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wile_e_interfaces__msg__RoboclawBroadcast(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wile_e_interfaces
size_t max_serialized_size_wile_e_interfaces__msg__RoboclawBroadcast(
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

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_shoulder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_elbow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_elbow
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wile_e_interfaces__msg__RoboclawBroadcast;
    is_plain =
      (
      offsetof(DataType, left_wheel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RoboclawBroadcast__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wile_e_interfaces__msg__RoboclawBroadcast(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RoboclawBroadcast = {
  "wile_e_interfaces::msg",
  "RoboclawBroadcast",
  _RoboclawBroadcast__cdr_serialize,
  _RoboclawBroadcast__cdr_deserialize,
  _RoboclawBroadcast__get_serialized_size,
  _RoboclawBroadcast__max_serialized_size
};

static rosidl_message_type_support_t _RoboclawBroadcast__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoboclawBroadcast,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wile_e_interfaces, msg, RoboclawBroadcast)() {
  return &_RoboclawBroadcast__type_support;
}

#if defined(__cplusplus)
}
#endif
