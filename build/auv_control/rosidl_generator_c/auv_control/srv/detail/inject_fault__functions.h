// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from auv_control:srv/InjectFault.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__FUNCTIONS_H_
#define AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "auv_control/msg/rosidl_generator_c__visibility_control.h"

#include "auv_control/srv/detail/inject_fault__struct.h"

/// Initialize srv/InjectFault message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * auv_control__srv__InjectFault_Request
 * )) before or use
 * auv_control__srv__InjectFault_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Request__init(auv_control__srv__InjectFault_Request * msg);

/// Finalize srv/InjectFault message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
void
auv_control__srv__InjectFault_Request__fini(auv_control__srv__InjectFault_Request * msg);

/// Create srv/InjectFault message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * auv_control__srv__InjectFault_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
auv_control__srv__InjectFault_Request *
auv_control__srv__InjectFault_Request__create();

/// Destroy srv/InjectFault message.
/**
 * It calls
 * auv_control__srv__InjectFault_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
void
auv_control__srv__InjectFault_Request__destroy(auv_control__srv__InjectFault_Request * msg);

/// Check for srv/InjectFault message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Request__are_equal(const auv_control__srv__InjectFault_Request * lhs, const auv_control__srv__InjectFault_Request * rhs);

/// Copy a srv/InjectFault message.
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
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Request__copy(
  const auv_control__srv__InjectFault_Request * input,
  auv_control__srv__InjectFault_Request * output);

/// Initialize array of srv/InjectFault messages.
/**
 * It allocates the memory for the number of elements and calls
 * auv_control__srv__InjectFault_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Request__Sequence__init(auv_control__srv__InjectFault_Request__Sequence * array, size_t size);

/// Finalize array of srv/InjectFault messages.
/**
 * It calls
 * auv_control__srv__InjectFault_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
void
auv_control__srv__InjectFault_Request__Sequence__fini(auv_control__srv__InjectFault_Request__Sequence * array);

/// Create array of srv/InjectFault messages.
/**
 * It allocates the memory for the array and calls
 * auv_control__srv__InjectFault_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
auv_control__srv__InjectFault_Request__Sequence *
auv_control__srv__InjectFault_Request__Sequence__create(size_t size);

/// Destroy array of srv/InjectFault messages.
/**
 * It calls
 * auv_control__srv__InjectFault_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
void
auv_control__srv__InjectFault_Request__Sequence__destroy(auv_control__srv__InjectFault_Request__Sequence * array);

/// Check for srv/InjectFault message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Request__Sequence__are_equal(const auv_control__srv__InjectFault_Request__Sequence * lhs, const auv_control__srv__InjectFault_Request__Sequence * rhs);

/// Copy an array of srv/InjectFault messages.
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
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Request__Sequence__copy(
  const auv_control__srv__InjectFault_Request__Sequence * input,
  auv_control__srv__InjectFault_Request__Sequence * output);

/// Initialize srv/InjectFault message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * auv_control__srv__InjectFault_Response
 * )) before or use
 * auv_control__srv__InjectFault_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Response__init(auv_control__srv__InjectFault_Response * msg);

/// Finalize srv/InjectFault message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
void
auv_control__srv__InjectFault_Response__fini(auv_control__srv__InjectFault_Response * msg);

/// Create srv/InjectFault message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * auv_control__srv__InjectFault_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
auv_control__srv__InjectFault_Response *
auv_control__srv__InjectFault_Response__create();

/// Destroy srv/InjectFault message.
/**
 * It calls
 * auv_control__srv__InjectFault_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
void
auv_control__srv__InjectFault_Response__destroy(auv_control__srv__InjectFault_Response * msg);

/// Check for srv/InjectFault message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Response__are_equal(const auv_control__srv__InjectFault_Response * lhs, const auv_control__srv__InjectFault_Response * rhs);

/// Copy a srv/InjectFault message.
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
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Response__copy(
  const auv_control__srv__InjectFault_Response * input,
  auv_control__srv__InjectFault_Response * output);

/// Initialize array of srv/InjectFault messages.
/**
 * It allocates the memory for the number of elements and calls
 * auv_control__srv__InjectFault_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Response__Sequence__init(auv_control__srv__InjectFault_Response__Sequence * array, size_t size);

/// Finalize array of srv/InjectFault messages.
/**
 * It calls
 * auv_control__srv__InjectFault_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
void
auv_control__srv__InjectFault_Response__Sequence__fini(auv_control__srv__InjectFault_Response__Sequence * array);

/// Create array of srv/InjectFault messages.
/**
 * It allocates the memory for the array and calls
 * auv_control__srv__InjectFault_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
auv_control__srv__InjectFault_Response__Sequence *
auv_control__srv__InjectFault_Response__Sequence__create(size_t size);

/// Destroy array of srv/InjectFault messages.
/**
 * It calls
 * auv_control__srv__InjectFault_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
void
auv_control__srv__InjectFault_Response__Sequence__destroy(auv_control__srv__InjectFault_Response__Sequence * array);

/// Check for srv/InjectFault message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Response__Sequence__are_equal(const auv_control__srv__InjectFault_Response__Sequence * lhs, const auv_control__srv__InjectFault_Response__Sequence * rhs);

/// Copy an array of srv/InjectFault messages.
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
ROSIDL_GENERATOR_C_PUBLIC_auv_control
bool
auv_control__srv__InjectFault_Response__Sequence__copy(
  const auv_control__srv__InjectFault_Response__Sequence * input,
  auv_control__srv__InjectFault_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__FUNCTIONS_H_
