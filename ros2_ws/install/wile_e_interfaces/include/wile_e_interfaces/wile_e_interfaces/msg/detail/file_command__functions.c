// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wile_e_interfaces:msg/FileCommand.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/file_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wile_e_interfaces__msg__FileCommand__init(wile_e_interfaces__msg__FileCommand * msg)
{
  if (!msg) {
    return false;
  }
  // right_bicep
  // left_bicep
  // right_forearm
  // left_forearm
  // right_wheel
  // left_wheel
  // tail
  // head_raise
  // head_turn
  // eyes
  // fan
  // headlight
  // face_detection
  return true;
}

void
wile_e_interfaces__msg__FileCommand__fini(wile_e_interfaces__msg__FileCommand * msg)
{
  if (!msg) {
    return;
  }
  // right_bicep
  // left_bicep
  // right_forearm
  // left_forearm
  // right_wheel
  // left_wheel
  // tail
  // head_raise
  // head_turn
  // eyes
  // fan
  // headlight
  // face_detection
}

bool
wile_e_interfaces__msg__FileCommand__are_equal(const wile_e_interfaces__msg__FileCommand * lhs, const wile_e_interfaces__msg__FileCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // right_bicep
  if (lhs->right_bicep != rhs->right_bicep) {
    return false;
  }
  // left_bicep
  if (lhs->left_bicep != rhs->left_bicep) {
    return false;
  }
  // right_forearm
  if (lhs->right_forearm != rhs->right_forearm) {
    return false;
  }
  // left_forearm
  if (lhs->left_forearm != rhs->left_forearm) {
    return false;
  }
  // right_wheel
  if (lhs->right_wheel != rhs->right_wheel) {
    return false;
  }
  // left_wheel
  if (lhs->left_wheel != rhs->left_wheel) {
    return false;
  }
  // tail
  if (lhs->tail != rhs->tail) {
    return false;
  }
  // head_raise
  if (lhs->head_raise != rhs->head_raise) {
    return false;
  }
  // head_turn
  if (lhs->head_turn != rhs->head_turn) {
    return false;
  }
  // eyes
  if (lhs->eyes != rhs->eyes) {
    return false;
  }
  // fan
  if (lhs->fan != rhs->fan) {
    return false;
  }
  // headlight
  if (lhs->headlight != rhs->headlight) {
    return false;
  }
  // face_detection
  if (lhs->face_detection != rhs->face_detection) {
    return false;
  }
  return true;
}

bool
wile_e_interfaces__msg__FileCommand__copy(
  const wile_e_interfaces__msg__FileCommand * input,
  wile_e_interfaces__msg__FileCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // right_bicep
  output->right_bicep = input->right_bicep;
  // left_bicep
  output->left_bicep = input->left_bicep;
  // right_forearm
  output->right_forearm = input->right_forearm;
  // left_forearm
  output->left_forearm = input->left_forearm;
  // right_wheel
  output->right_wheel = input->right_wheel;
  // left_wheel
  output->left_wheel = input->left_wheel;
  // tail
  output->tail = input->tail;
  // head_raise
  output->head_raise = input->head_raise;
  // head_turn
  output->head_turn = input->head_turn;
  // eyes
  output->eyes = input->eyes;
  // fan
  output->fan = input->fan;
  // headlight
  output->headlight = input->headlight;
  // face_detection
  output->face_detection = input->face_detection;
  return true;
}

wile_e_interfaces__msg__FileCommand *
wile_e_interfaces__msg__FileCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__FileCommand * msg = (wile_e_interfaces__msg__FileCommand *)allocator.allocate(sizeof(wile_e_interfaces__msg__FileCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wile_e_interfaces__msg__FileCommand));
  bool success = wile_e_interfaces__msg__FileCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wile_e_interfaces__msg__FileCommand__destroy(wile_e_interfaces__msg__FileCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wile_e_interfaces__msg__FileCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wile_e_interfaces__msg__FileCommand__Sequence__init(wile_e_interfaces__msg__FileCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__FileCommand * data = NULL;

  if (size) {
    data = (wile_e_interfaces__msg__FileCommand *)allocator.zero_allocate(size, sizeof(wile_e_interfaces__msg__FileCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wile_e_interfaces__msg__FileCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wile_e_interfaces__msg__FileCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wile_e_interfaces__msg__FileCommand__Sequence__fini(wile_e_interfaces__msg__FileCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wile_e_interfaces__msg__FileCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wile_e_interfaces__msg__FileCommand__Sequence *
wile_e_interfaces__msg__FileCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__FileCommand__Sequence * array = (wile_e_interfaces__msg__FileCommand__Sequence *)allocator.allocate(sizeof(wile_e_interfaces__msg__FileCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wile_e_interfaces__msg__FileCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wile_e_interfaces__msg__FileCommand__Sequence__destroy(wile_e_interfaces__msg__FileCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wile_e_interfaces__msg__FileCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wile_e_interfaces__msg__FileCommand__Sequence__are_equal(const wile_e_interfaces__msg__FileCommand__Sequence * lhs, const wile_e_interfaces__msg__FileCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wile_e_interfaces__msg__FileCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wile_e_interfaces__msg__FileCommand__Sequence__copy(
  const wile_e_interfaces__msg__FileCommand__Sequence * input,
  wile_e_interfaces__msg__FileCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wile_e_interfaces__msg__FileCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wile_e_interfaces__msg__FileCommand * data =
      (wile_e_interfaces__msg__FileCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wile_e_interfaces__msg__FileCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wile_e_interfaces__msg__FileCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wile_e_interfaces__msg__FileCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
