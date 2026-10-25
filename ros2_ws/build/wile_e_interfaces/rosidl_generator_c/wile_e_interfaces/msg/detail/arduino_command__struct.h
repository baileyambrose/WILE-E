// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wile_e_interfaces:msg/ArduinoCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__STRUCT_H_
#define WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ArduinoCommand in the package wile_e_interfaces.
typedef struct wile_e_interfaces__msg__ArduinoCommand
{
  uint16_t tail;
  uint16_t head_raise;
  uint16_t head_turn;
  uint8_t eyes;
  uint8_t fan;
  uint8_t headlight;
  uint8_t face_detection;
} wile_e_interfaces__msg__ArduinoCommand;

// Struct for a sequence of wile_e_interfaces__msg__ArduinoCommand.
typedef struct wile_e_interfaces__msg__ArduinoCommand__Sequence
{
  wile_e_interfaces__msg__ArduinoCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wile_e_interfaces__msg__ArduinoCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__STRUCT_H_
