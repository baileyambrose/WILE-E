// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from wile_e_interfaces:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice

#include "wile_e_interfaces/msg/detail/roboclaw_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
const rosidl_type_hash_t *
wile_e_interfaces__msg__RoboclawCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xf6, 0x45, 0xc8, 0xe9, 0x03, 0x1f, 0x4e,
      0xfd, 0x2a, 0x46, 0x60, 0x06, 0x82, 0xec, 0xdd,
      0x2b, 0x05, 0xce, 0x03, 0x29, 0xad, 0x27, 0x50,
      0x61, 0xd7, 0x38, 0x44, 0x72, 0xb1, 0x36, 0x50,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char wile_e_interfaces__msg__RoboclawCommand__TYPE_NAME[] = "wile_e_interfaces/msg/RoboclawCommand";

// Define type names, field names, and default values
static char wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__right_bicep[] = "right_bicep";
static char wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__left_bicep[] = "left_bicep";
static char wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__right_forearm[] = "right_forearm";
static char wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__left_forearm[] = "left_forearm";
static char wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__right_wheel[] = "right_wheel";
static char wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__left_wheel[] = "left_wheel";

static rosidl_runtime_c__type_description__Field wile_e_interfaces__msg__RoboclawCommand__FIELDS[] = {
  {
    {wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__right_bicep, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__left_bicep, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__right_forearm, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__left_forearm, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__right_wheel, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wile_e_interfaces__msg__RoboclawCommand__FIELD_NAME__left_wheel, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
wile_e_interfaces__msg__RoboclawCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {wile_e_interfaces__msg__RoboclawCommand__TYPE_NAME, 37, 37},
      {wile_e_interfaces__msg__RoboclawCommand__FIELDS, 6, 6},
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
  "uint16 left_wheel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
wile_e_interfaces__msg__RoboclawCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {wile_e_interfaces__msg__RoboclawCommand__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 115, 115},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
wile_e_interfaces__msg__RoboclawCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *wile_e_interfaces__msg__RoboclawCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
