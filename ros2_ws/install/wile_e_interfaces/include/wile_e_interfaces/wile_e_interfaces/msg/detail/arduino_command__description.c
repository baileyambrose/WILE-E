// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from wile_e_interfaces:msg/ArduinoCommand.idl
// generated code does not contain a copyright notice

#include "wile_e_interfaces/msg/detail/arduino_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
const rosidl_type_hash_t *
wile_e_interfaces__msg__ArduinoCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x51, 0xc5, 0x54, 0x11, 0x30, 0x69, 0xc3,
      0x8c, 0xbe, 0x40, 0xb7, 0xb6, 0xb2, 0x30, 0xb1,
      0xb9, 0x80, 0x3d, 0x38, 0xda, 0x67, 0x75, 0x04,
      0x9a, 0x34, 0xf7, 0xfb, 0x69, 0xb6, 0x23, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char wile_e_interfaces__msg__ArduinoCommand__TYPE_NAME[] = "wile_e_interfaces/msg/ArduinoCommand";

// Define type names, field names, and default values
static char wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__tail[] = "tail";
static char wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__head_raise[] = "head_raise";
static char wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__head_turn[] = "head_turn";
static char wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__eyes[] = "eyes";
static char wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__fan[] = "fan";
static char wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__headlight[] = "headlight";
static char wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__face_detection[] = "face_detection";

static rosidl_runtime_c__type_description__Field wile_e_interfaces__msg__ArduinoCommand__FIELDS[] = {
  {
    {wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__tail, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__head_raise, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__head_turn, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__eyes, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__fan, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__headlight, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__ArduinoCommand__FIELD_NAME__face_detection, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
wile_e_interfaces__msg__ArduinoCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {wile_e_interfaces__msg__ArduinoCommand__TYPE_NAME, 36, 36},
      {wile_e_interfaces__msg__ArduinoCommand__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 tail\n"
  "uint16 head_raise\n"
  "uint16 head_turn\n"
  "uint8 eyes\n"
  "uint8 fan\n"
  "uint8 headlight\n"
  "uint8 face_detection";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
wile_e_interfaces__msg__ArduinoCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {wile_e_interfaces__msg__ArduinoCommand__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 105, 105},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
wile_e_interfaces__msg__ArduinoCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *wile_e_interfaces__msg__ArduinoCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
