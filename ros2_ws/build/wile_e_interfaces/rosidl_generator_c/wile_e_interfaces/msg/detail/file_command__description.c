// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from wile_e_interfaces:msg/FileCommand.idl
// generated code does not contain a copyright notice

#include "wile_e_interfaces/msg/detail/file_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
const rosidl_type_hash_t *
wile_e_interfaces__msg__FileCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x39, 0x45, 0x0b, 0xc7, 0x87, 0x39, 0x45,
      0x15, 0x80, 0x43, 0x4a, 0xdc, 0xc8, 0x7e, 0x31,
      0x8e, 0x09, 0xdf, 0xf7, 0xf8, 0x17, 0x92, 0xff,
      0x31, 0xf1, 0x64, 0x0d, 0xb3, 0x16, 0x28, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char wile_e_interfaces__msg__FileCommand__TYPE_NAME[] = "wile_e_interfaces/msg/FileCommand";

// Define type names, field names, and default values
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__right_bicep[] = "right_bicep";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__left_bicep[] = "left_bicep";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__right_forearm[] = "right_forearm";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__left_forearm[] = "left_forearm";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__right_wheel[] = "right_wheel";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__left_wheel[] = "left_wheel";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__tail[] = "tail";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__head_raise[] = "head_raise";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__head_turn[] = "head_turn";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__eyes[] = "eyes";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__fan[] = "fan";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__headlight[] = "headlight";
static char wile_e_interfaces__msg__FileCommand__FIELD_NAME__face_detection[] = "face_detection";

static rosidl_runtime_c__type_description__Field wile_e_interfaces__msg__FileCommand__FIELDS[] = {
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__right_bicep, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__left_bicep, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__right_forearm, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__left_forearm, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__right_wheel, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__left_wheel, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__tail, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__head_raise, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__head_turn, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__eyes, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__fan, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__headlight, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__FileCommand__FIELD_NAME__face_detection, 14, 14},
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
wile_e_interfaces__msg__FileCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {wile_e_interfaces__msg__FileCommand__TYPE_NAME, 33, 33},
      {wile_e_interfaces__msg__FileCommand__FIELDS, 13, 13},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 right_bicep\n"
  "uint16 left_bicep\n"
  "uint16 right_forearm\n"
  "uint16 left_forearm\n"
  "uint16 right_wheel\n"
  "uint16 left_wheel\n"
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
wile_e_interfaces__msg__FileCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {wile_e_interfaces__msg__FileCommand__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 220, 220},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
wile_e_interfaces__msg__FileCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *wile_e_interfaces__msg__FileCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
