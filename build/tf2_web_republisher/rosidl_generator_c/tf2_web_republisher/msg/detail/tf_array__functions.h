// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tf2_web_republisher:msg/TFArray.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__FUNCTIONS_H_
#define TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tf2_web_republisher/msg/rosidl_generator_c__visibility_control.h"

#include "tf2_web_republisher/msg/detail/tf_array__struct.h"

/// Initialize msg/TFArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_web_republisher__msg__TFArray
 * )) before or use
 * tf2_web_republisher__msg__TFArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
bool
tf2_web_republisher__msg__TFArray__init(tf2_web_republisher__msg__TFArray * msg);

/// Finalize msg/TFArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
void
tf2_web_republisher__msg__TFArray__fini(tf2_web_republisher__msg__TFArray * msg);

/// Create msg/TFArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_web_republisher__msg__TFArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
tf2_web_republisher__msg__TFArray *
tf2_web_republisher__msg__TFArray__create();

/// Destroy msg/TFArray message.
/**
 * It calls
 * tf2_web_republisher__msg__TFArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
void
tf2_web_republisher__msg__TFArray__destroy(tf2_web_republisher__msg__TFArray * msg);

/// Check for msg/TFArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
bool
tf2_web_republisher__msg__TFArray__are_equal(const tf2_web_republisher__msg__TFArray * lhs, const tf2_web_republisher__msg__TFArray * rhs);

/// Copy a msg/TFArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
bool
tf2_web_republisher__msg__TFArray__copy(
  const tf2_web_republisher__msg__TFArray * input,
  tf2_web_republisher__msg__TFArray * output);

/// Initialize array of msg/TFArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_web_republisher__msg__TFArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
bool
tf2_web_republisher__msg__TFArray__Sequence__init(tf2_web_republisher__msg__TFArray__Sequence * array, size_t size);

/// Finalize array of msg/TFArray messages.
/**
 * It calls
 * tf2_web_republisher__msg__TFArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
void
tf2_web_republisher__msg__TFArray__Sequence__fini(tf2_web_republisher__msg__TFArray__Sequence * array);

/// Create array of msg/TFArray messages.
/**
 * It allocates the memory for the array and calls
 * tf2_web_republisher__msg__TFArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
tf2_web_republisher__msg__TFArray__Sequence *
tf2_web_republisher__msg__TFArray__Sequence__create(size_t size);

/// Destroy array of msg/TFArray messages.
/**
 * It calls
 * tf2_web_republisher__msg__TFArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
void
tf2_web_republisher__msg__TFArray__Sequence__destroy(tf2_web_republisher__msg__TFArray__Sequence * array);

/// Check for msg/TFArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
bool
tf2_web_republisher__msg__TFArray__Sequence__are_equal(const tf2_web_republisher__msg__TFArray__Sequence * lhs, const tf2_web_republisher__msg__TFArray__Sequence * rhs);

/// Copy an array of msg/TFArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tf2_web_republisher
bool
tf2_web_republisher__msg__TFArray__Sequence__copy(
  const tf2_web_republisher__msg__TFArray__Sequence * input,
  tf2_web_republisher__msg__TFArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__FUNCTIONS_H_
