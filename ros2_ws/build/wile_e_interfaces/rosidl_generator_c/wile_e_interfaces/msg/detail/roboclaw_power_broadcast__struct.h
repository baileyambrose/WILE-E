// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wile_e_interfaces:msg/RoboclawPowerBroadcast.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__STRUCT_H_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoboclawPowerBroadcast in the package wile_e_interfaces.
typedef struct wile_e_interfaces__msg__RoboclawPowerBroadcast
{
  uint8_t battery_voltage;
  int16_t current_draw;
} wile_e_interfaces__msg__RoboclawPowerBroadcast;

// Struct for a sequence of wile_e_interfaces__msg__RoboclawPowerBroadcast.
typedef struct wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence
{
  wile_e_interfaces__msg__RoboclawPowerBroadcast * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__STRUCT_H_
