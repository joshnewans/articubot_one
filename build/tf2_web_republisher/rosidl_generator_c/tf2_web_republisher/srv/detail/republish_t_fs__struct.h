// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__STRUCT_H_
#define TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source_frames'
// Member 'target_frame'
#include "rosidl_runtime_c/string.h"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in srv/RepublishTFs in the package tf2_web_republisher.
typedef struct tf2_web_republisher__srv__RepublishTFs_Request
{
  rosidl_runtime_c__String__Sequence source_frames;
  rosidl_runtime_c__String target_frame;
  float angular_thres;
  float trans_thres;
  float rate;
  builtin_interfaces__msg__Duration timeout;
} tf2_web_republisher__srv__RepublishTFs_Request;

// Struct for a sequence of tf2_web_republisher__srv__RepublishTFs_Request.
typedef struct tf2_web_republisher__srv__RepublishTFs_Request__Sequence
{
  tf2_web_republisher__srv__RepublishTFs_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__srv__RepublishTFs_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/RepublishTFs in the package tf2_web_republisher.
typedef struct tf2_web_republisher__srv__RepublishTFs_Response
{
  rosidl_runtime_c__String topic_name;
} tf2_web_republisher__srv__RepublishTFs_Response;

// Struct for a sequence of tf2_web_republisher__srv__RepublishTFs_Response.
typedef struct tf2_web_republisher__srv__RepublishTFs_Response__Sequence
{
  tf2_web_republisher__srv__RepublishTFs_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__srv__RepublishTFs_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__STRUCT_H_
