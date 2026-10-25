// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wile_e_interfaces:msg/FileCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__FILE_COMMAND__STRUCT_H_
#define WILE_E_INTERFACES__MSG__DETAIL__FILE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FileCommand in the package wile_e_interfaces.
typedef struct wile_e_interfaces__msg__FileCommand
{
  uint16_t right_bicep;
  uint16_t left_bicep;
  uint16_t right_forearm;
  uint16_t left_forearm;
  uint16_t right_wheel;
  uint16_t left_wheel;
  uint16_t tail;
  uint16_t head_raise;
  uint16_t head_turn;
  uint8_t eyes;
  uint8_t fan;
  uint8_t headlight;
  uint8_t face_detection;
} wile_e_interfaces__msg__FileCommand;

// Struct for a sequence of wile_e_interfaces__msg__FileCommand.
typedef struct wile_e_interfaces__msg__FileCommand__Sequence
{
  wile_e_interfaces__msg__FileCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wile_e_interfaces__msg__FileCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__FILE_COMMAND__STRUCT_H_
