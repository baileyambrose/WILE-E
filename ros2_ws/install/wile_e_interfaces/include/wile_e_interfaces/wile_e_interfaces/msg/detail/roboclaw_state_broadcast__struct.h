// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wile_e_interfaces:msg/RoboclawStateBroadcast.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_STATE_BROADCAST__STRUCT_H_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_STATE_BROADCAST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoboclawStateBroadcast in the package wile_e_interfaces.
typedef struct wile_e_interfaces__msg__RoboclawStateBroadcast
{
  float right_shoulder;
  float left_shoulder;
  float right_elbow;
  float left_elbow;
  float right_shoulder_speed;
  float left_shoulder_speed;
  float right_elbow_speed;
  float left_elbow_speed;
  float right_wheel_speed;
  float left_wheel_speed;
} wile_e_interfaces__msg__RoboclawStateBroadcast;

// Struct for a sequence of wile_e_interfaces__msg__RoboclawStateBroadcast.
typedef struct wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence
{
  wile_e_interfaces__msg__RoboclawStateBroadcast * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_STATE_BROADCAST__STRUCT_H_
