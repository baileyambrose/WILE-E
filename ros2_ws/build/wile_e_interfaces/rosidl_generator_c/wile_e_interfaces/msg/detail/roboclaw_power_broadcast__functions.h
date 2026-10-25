// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wile_e_interfaces:msg/RoboclawPowerBroadcast.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__FUNCTIONS_H_
#define WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wile_e_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "wile_e_interfaces/msg/detail/roboclaw_power_broadcast__struct.h"

/// Initialize msg/RoboclawPowerBroadcast message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wile_e_interfaces__msg__RoboclawPowerBroadcast
 * )) before or use
 * wile_e_interfaces__msg__RoboclawPowerBroadcast__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__init(wile_e_interfaces__msg__RoboclawPowerBroadcast * msg);

/// Finalize msg/RoboclawPowerBroadcast message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__RoboclawPowerBroadcast__fini(wile_e_interfaces__msg__RoboclawPowerBroadcast * msg);

/// Create msg/RoboclawPowerBroadcast message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wile_e_interfaces__msg__RoboclawPowerBroadcast__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
wile_e_interfaces__msg__RoboclawPowerBroadcast *
wile_e_interfaces__msg__RoboclawPowerBroadcast__create();

/// Destroy msg/RoboclawPowerBroadcast message.
/**
 * It calls
 * wile_e_interfaces__msg__RoboclawPowerBroadcast__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__RoboclawPowerBroadcast__destroy(wile_e_interfaces__msg__RoboclawPowerBroadcast * msg);

/// Check for msg/RoboclawPowerBroadcast message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__are_equal(const wile_e_interfaces__msg__RoboclawPowerBroadcast * lhs, const wile_e_interfaces__msg__RoboclawPowerBroadcast * rhs);

/// Copy a msg/RoboclawPowerBroadcast message.
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
wile_e_interfaces__msg__RoboclawPowerBroadcast__copy(
  const wile_e_interfaces__msg__RoboclawPowerBroadcast * input,
  wile_e_interfaces__msg__RoboclawPowerBroadcast * output);

/// Initialize array of msg/RoboclawPowerBroadcast messages.
/**
 * It allocates the memory for the number of elements and calls
 * wile_e_interfaces__msg__RoboclawPowerBroadcast__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__init(wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * array, size_t size);

/// Finalize array of msg/RoboclawPowerBroadcast messages.
/**
 * It calls
 * wile_e_interfaces__msg__RoboclawPowerBroadcast__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__fini(wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * array);

/// Create array of msg/RoboclawPowerBroadcast messages.
/**
 * It allocates the memory for the array and calls
 * wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence *
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__create(size_t size);

/// Destroy array of msg/RoboclawPowerBroadcast messages.
/**
 * It calls
 * wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__destroy(wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * array);

/// Check for msg/RoboclawPowerBroadcast message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__are_equal(const wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * lhs, const wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * rhs);

/// Copy an array of msg/RoboclawPowerBroadcast messages.
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
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__copy(
  const wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * input,
  wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ROBOCLAW_POWER_BROADCAST__FUNCTIONS_H_
