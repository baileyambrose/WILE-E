// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from norlab_custom_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "norlab_custom_interfaces/msg/detail/encoder_state__rosidl_typesupport_introspection_c.h"
#include "norlab_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "norlab_custom_interfaces/msg/detail/encoder_state__functions.h"
#include "norlab_custom_interfaces/msg/detail/encoder_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  norlab_custom_interfaces__msg__EncoderState__init(message_memory);
}

void norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_fini_function(void * message_memory)
{
  norlab_custom_interfaces__msg__EncoderState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(norlab_custom_interfaces__msg__EncoderState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(norlab_custom_interfaces__msg__EncoderState, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(norlab_custom_interfaces__msg__EncoderState, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ticks_per_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(norlab_custom_interfaces__msg__EncoderState, ticks_per_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ticks_per_meter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(norlab_custom_interfaces__msg__EncoderState, ticks_per_meter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_message_members = {
  "norlab_custom_interfaces__msg",  // message namespace
  "EncoderState",  // message name
  5,  // number of fields
  sizeof(norlab_custom_interfaces__msg__EncoderState),
  norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_message_member_array,  // message members
  norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_init_function,  // function to initialize message memory (memory has to be allocated)
  norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_message_type_support_handle = {
  0,
  &norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_norlab_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, norlab_custom_interfaces, msg, EncoderState)() {
  norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_message_type_support_handle.typesupport_identifier) {
    norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &norlab_custom_interfaces__msg__EncoderState__rosidl_typesupport_introspection_c__EncoderState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
