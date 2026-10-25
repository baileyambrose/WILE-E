// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wile_e_interfaces:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_COMMAND__STRUCT_H_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoboclawCommand in the package wile_e_interfaces.
typedef struct wile_e_interfaces__msg__RoboclawCommand
{
  uint16_t right_shoulder;
  uint16_t left_shoulder;
  uint16_t right_elbow;
  uint16_t left_elbow;
  uint16_t right_wheel;
  uint16_t left_wheel;
} wile_e_interfaces__msg__RoboclawCommand;

// Struct for a sequence of wile_e_interfaces__msg__RoboclawCommand.
typedef struct wile_e_interfaces__msg__RoboclawCommand__Sequence
{
  wile_e_interfaces__msg__RoboclawCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wile_e_interfaces__msg__RoboclawCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_COMMAND__STRUCT_H_
