// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wile_e_interfaces:msg/ActionCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ACTION_COMMAND__STRUCT_H_
#define WILE_E_INTERFACES__MSG__DETAIL__ACTION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ActionCommand in the package wile_e_interfaces.
typedef struct wile_e_interfaces__msg__ActionCommand
{
  float right_shoulder;
  float left_shoulder;
  float right_elbow;
  float left_elbow;
  float right_wheel;
  float left_wheel;
  int16_t tail;
  int16_t head_raise;
  int16_t head_turn;
  uint8_t eyes;
  uint8_t fan;
  uint8_t headlight;
  uint8_t data;
} wile_e_interfaces__msg__ActionCommand;

// Struct for a sequence of wile_e_interfaces__msg__ActionCommand.
typedef struct wile_e_interfaces__msg__ActionCommand__Sequence
{
  wile_e_interfaces__msg__ActionCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wile_e_interfaces__msg__ActionCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ACTION_COMMAND__STRUCT_H_
