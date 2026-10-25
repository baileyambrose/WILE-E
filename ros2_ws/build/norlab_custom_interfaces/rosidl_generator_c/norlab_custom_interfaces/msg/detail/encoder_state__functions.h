// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from norlab_custom_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

#ifndef NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__FUNCTIONS_H_
#define NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "norlab_custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "norlab_custom_interfaces/msg/detail/encoder_state__struct.h"

/// Initialize msg/EncoderState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * norlab_custom_interfaces__msg__EncoderState
 * )) before or use
 * norlab_custom_interfaces__msg__EncoderState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
bool
norlab_custom_interfaces__msg__EncoderState__init(norlab_custom_interfaces__msg__EncoderState * msg);

/// Finalize msg/EncoderState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
void
norlab_custom_interfaces__msg__EncoderState__fini(norlab_custom_interfaces__msg__EncoderState * msg);

/// Create msg/EncoderState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * norlab_custom_interfaces__msg__EncoderState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
norlab_custom_interfaces__msg__EncoderState *
norlab_custom_interfaces__msg__EncoderState__create();

/// Destroy msg/EncoderState message.
/**
 * It calls
 * norlab_custom_interfaces__msg__EncoderState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
void
norlab_custom_interfaces__msg__EncoderState__destroy(norlab_custom_interfaces__msg__EncoderState * msg);

/// Check for msg/EncoderState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
bool
norlab_custom_interfaces__msg__EncoderState__are_equal(const norlab_custom_interfaces__msg__EncoderState * lhs, const norlab_custom_interfaces__msg__EncoderState * rhs);

/// Copy a msg/EncoderState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
bool
norlab_custom_interfaces__msg__EncoderState__copy(
  const norlab_custom_interfaces__msg__EncoderState * input,
  norlab_custom_interfaces__msg__EncoderState * output);

/// Initialize array of msg/EncoderState messages.
/**
 * It allocates the memory for the number of elements and calls
 * norlab_custom_interfaces__msg__EncoderState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
bool
norlab_custom_interfaces__msg__EncoderState__Sequence__init(norlab_custom_interfaces__msg__EncoderState__Sequence * array, size_t size);

/// Finalize array of msg/EncoderState messages.
/**
 * It calls
 * norlab_custom_interfaces__msg__EncoderState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
void
norlab_custom_interfaces__msg__EncoderState__Sequence__fini(norlab_custom_interfaces__msg__EncoderState__Sequence * array);

/// Create array of msg/EncoderState messages.
/**
 * It allocates the memory for the array and calls
 * norlab_custom_interfaces__msg__EncoderState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
norlab_custom_interfaces__msg__EncoderState__Sequence *
norlab_custom_interfaces__msg__EncoderState__Sequence__create(size_t size);

/// Destroy array of msg/EncoderState messages.
/**
 * It calls
 * norlab_custom_interfaces__msg__EncoderState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
void
norlab_custom_interfaces__msg__EncoderState__Sequence__destroy(norlab_custom_interfaces__msg__EncoderState__Sequence * array);

/// Check for msg/EncoderState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
bool
norlab_custom_interfaces__msg__EncoderState__Sequence__are_equal(const norlab_custom_interfaces__msg__EncoderState__Sequence * lhs, const norlab_custom_interfaces__msg__EncoderState__Sequence * rhs);

/// Copy an array of msg/EncoderState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_norlab_custom_interfaces
bool
norlab_custom_interfaces__msg__EncoderState__Sequence__copy(
  const norlab_custom_interfaces__msg__EncoderState__Sequence * input,
  norlab_custom_interfaces__msg__EncoderState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NORLAB_CUSTOM_INTERFACES__MSG__DETAIL__ENCODER_STATE__FUNCTIONS_H_
