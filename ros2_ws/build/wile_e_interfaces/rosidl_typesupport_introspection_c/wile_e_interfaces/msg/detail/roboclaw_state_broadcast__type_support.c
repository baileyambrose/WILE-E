// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wile_e_interfaces:msg/RoboclawStateBroadcast.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wile_e_interfaces/msg/detail/roboclaw_state_broadcast__rosidl_typesupport_introspection_c.h"
#include "wile_e_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wile_e_interfaces/msg/detail/roboclaw_state_broadcast__functions.h"
#include "wile_e_interfaces/msg/detail/roboclaw_state_broadcast__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wile_e_interfaces__msg__RoboclawStateBroadcast__init(message_memory);
}

void wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_fini_function(void * message_memory)
{
  wile_e_interfaces__msg__RoboclawStateBroadcast__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_message_member_array[10] = {
  {
    "right_shoulder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, right_shoulder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_shoulder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, left_shoulder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_elbow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, right_elbow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_elbow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, left_elbow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_shoulder_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, right_shoulder_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_shoulder_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, left_shoulder_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_elbow_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, right_elbow_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_elbow_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, left_elbow_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_wheel_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, right_wheel_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_wheel_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__msg__RoboclawStateBroadcast, left_wheel_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_message_members = {
  "wile_e_interfaces__msg",  // message namespace
  "RoboclawStateBroadcast",  // message name
  10,  // number of fields
  sizeof(wile_e_interfaces__msg__RoboclawStateBroadcast),
  wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_message_member_array,  // message members
  wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_init_function,  // function to initialize message memory (memory has to be allocated)
  wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_message_type_support_handle = {
  0,
  &wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wile_e_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wile_e_interfaces, msg, RoboclawStateBroadcast)() {
  if (!wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_message_type_support_handle.typesupport_identifier) {
    wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wile_e_interfaces__msg__RoboclawStateBroadcast__rosidl_typesupport_introspection_c__RoboclawStateBroadcast_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
