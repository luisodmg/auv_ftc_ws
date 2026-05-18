// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_control:srv/InjectFault.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__STRUCT_H_
#define AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fault_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/InjectFault in the package auv_control.
typedef struct auv_control__srv__InjectFault_Request
{
  int32_t thruster_id;
  double fault_factor;
  rosidl_runtime_c__String fault_type;
  double ramp_seconds;
} auv_control__srv__InjectFault_Request;

// Struct for a sequence of auv_control__srv__InjectFault_Request.
typedef struct auv_control__srv__InjectFault_Request__Sequence
{
  auv_control__srv__InjectFault_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_control__srv__InjectFault_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/InjectFault in the package auv_control.
typedef struct auv_control__srv__InjectFault_Response
{
  bool accepted;
  rosidl_runtime_c__String message;
} auv_control__srv__InjectFault_Response;

// Struct for a sequence of auv_control__srv__InjectFault_Response.
typedef struct auv_control__srv__InjectFault_Response__Sequence
{
  auv_control__srv__InjectFault_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_control__srv__InjectFault_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__STRUCT_H_
