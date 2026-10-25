// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from norlab_custom_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

#ifndef NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_H_
#define NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/EncoderState in the package norlab_custom_interfaces.
typedef struct norlab_custom_interfaces__msg__EncoderState
{
  std_msgs__msg__Header header;
  /// (ticks)
  uint32_t position;
  /// (ticks/sec) originally: speed
  float velocity;
  /// originally: TICKS_PER_ROTATION
  float ticks_per_rotation;
  /// originally: TICKS_PER_METER
  float ticks_per_meter;
} norlab_custom_interfaces__msg__EncoderState;

// Struct for a sequence of norlab_custom_interfaces__msg__EncoderState.
typedef struct norlab_custom_interfaces__msg__EncoderState__Sequence
{
  norlab_custom_interfaces__msg__EncoderState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} norlab_custom_interfaces__msg__EncoderState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_H_
