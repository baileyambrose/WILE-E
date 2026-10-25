// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wile_e_interfaces:msg/VelocityCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__STRUCT_H_
#define WILE_E_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VelocityCommand in the package wile_e_interfaces.
typedef struct wile_e_interfaces__msg__VelocityCommand
{
  rosidl_runtime_c__String message;
  float velocity;
  float ang_velocity;
} wile_e_interfaces__msg__VelocityCommand;

// Struct for a sequence of wile_e_interfaces__msg__VelocityCommand.
typedef struct wile_e_interfaces__msg__VelocityCommand__Sequence
{
  wile_e_interfaces__msg__VelocityCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wile_e_interfaces__msg__VelocityCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__STRUCT_H_
