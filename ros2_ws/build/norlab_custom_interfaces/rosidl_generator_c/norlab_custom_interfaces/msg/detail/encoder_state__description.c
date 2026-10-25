// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from norlab_custom_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

#include "norlab_custom_interfaces/msg/detail/encoder_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
const rosidl_type_hash_t *
norlab_custom_interfaces__msg__EncoderState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x47, 0x03, 0x01, 0x00, 0xa4, 0x9e, 0x36,
      0x65, 0x2c, 0x97, 0x9c, 0x99, 0x61, 0xe7, 0xa6,
      0x36, 0x20, 0x58, 0xb1, 0x68, 0x7f, 0x45, 0x56,
      0xe7, 0x64, 0x62, 0x09, 0x8d, 0x39, 0x10, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char norlab_custom_interfaces__msg__EncoderState__TYPE_NAME[] = "norlab_custom_interfaces/msg/EncoderState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__header[] = "header";
static char norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__position[] = "position";
static char norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__velocity[] = "velocity";
static char norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__ticks_per_rotation[] = "ticks_per_rotation";
static char norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__ticks_per_meter[] = "ticks_per_meter";

static rosidl_runtime_c__type_description__Field norlab_custom_interfaces__msg__EncoderState__FIELDS[] = {
  {
    {norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__ticks_per_rotation, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {norlab_custom_interfaces__msg__EncoderState__FIELD_NAME__ticks_per_meter, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription norlab_custom_interfaces__msg__EncoderState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
norlab_custom_interfaces__msg__EncoderState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {norlab_custom_interfaces__msg__EncoderState__TYPE_NAME, 41, 41},
      {norlab_custom_interfaces__msg__EncoderState__FIELDS, 5, 5},
    },
    {norlab_custom_interfaces__msg__EncoderState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "uint32 position              # (ticks)\n"
  "float32 velocity             # (ticks/sec) originally: speed\n"
  "float32 ticks_per_rotation   # originally: TICKS_PER_ROTATION\n"
  "float32 ticks_per_meter      # originally: TICKS_PER_METER";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
norlab_custom_interfaces__msg__EncoderState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {norlab_custom_interfaces__msg__EncoderState__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 244, 244},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
norlab_custom_interfaces__msg__EncoderState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *norlab_custom_interfaces__msg__EncoderState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
