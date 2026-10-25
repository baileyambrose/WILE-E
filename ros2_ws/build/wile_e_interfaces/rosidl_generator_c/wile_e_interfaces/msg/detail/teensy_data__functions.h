// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wile_e_interfaces:msg/TeensyData.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__TEENSY_DATA__FUNCTIONS_H_
#define WILE_E_INTERFACES__MSG__DETAIL__TEENSY_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wile_e_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "wile_e_interfaces/msg/detail/teensy_data__struct.h"

/// Initialize msg/TeensyData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wile_e_interfaces__msg__TeensyData
 * )) before or use
 * wile_e_interfaces__msg__TeensyData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__TeensyData__init(wile_e_interfaces__msg__TeensyData * msg);

/// Finalize msg/TeensyData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__TeensyData__fini(wile_e_interfaces__msg__TeensyData * msg);

/// Create msg/TeensyData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wile_e_interfaces__msg__TeensyData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
wile_e_interfaces__msg__TeensyData *
wile_e_interfaces__msg__TeensyData__create();

/// Destroy msg/TeensyData message.
/**
 * It calls
 * wile_e_interfaces__msg__TeensyData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__TeensyData__destroy(wile_e_interfaces__msg__TeensyData * msg);

/// Check for msg/TeensyData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__TeensyData__are_equal(const wile_e_interfaces__msg__TeensyData * lhs, const wile_e_interfaces__msg__TeensyData * rhs);

/// Copy a msg/TeensyData message.
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
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__TeensyData__copy(
  const wile_e_interfaces__msg__TeensyData * input,
  wile_e_interfaces__msg__TeensyData * output);

/// Initialize array of msg/TeensyData messages.
/**
 * It allocates the memory for the number of elements and calls
 * wile_e_interfaces__msg__TeensyData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__TeensyData__Sequence__init(wile_e_interfaces__msg__TeensyData__Sequence * array, size_t size);

/// Finalize array of msg/TeensyData messages.
/**
 * It calls
 * wile_e_interfaces__msg__TeensyData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__TeensyData__Sequence__fini(wile_e_interfaces__msg__TeensyData__Sequence * array);

/// Create array of msg/TeensyData messages.
/**
 * It allocates the memory for the array and calls
 * wile_e_interfaces__msg__TeensyData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
wile_e_interfaces__msg__TeensyData__Sequence *
wile_e_interfaces__msg__TeensyData__Sequence__create(size_t size);

/// Destroy array of msg/TeensyData messages.
/**
 * It calls
 * wile_e_interfaces__msg__TeensyData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__TeensyData__Sequence__destroy(wile_e_interfaces__msg__TeensyData__Sequence * array);

/// Check for msg/TeensyData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__TeensyData__Sequence__are_equal(const wile_e_interfaces__msg__TeensyData__Sequence * lhs, const wile_e_interfaces__msg__TeensyData__Sequence * rhs);

/// Copy an array of msg/TeensyData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__TeensyData__Sequence__copy(
  const wile_e_interfaces__msg__TeensyData__Sequence * input,
  wile_e_interfaces__msg__TeensyData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__TEENSY_DATA__FUNCTIONS_H_
