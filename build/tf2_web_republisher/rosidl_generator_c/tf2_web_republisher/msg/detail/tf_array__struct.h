// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tf2_web_republisher:msg/TFArray.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__STRUCT_H_
#define TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

// Struct defined in msg/TFArray in the package tf2_web_republisher.
typedef struct tf2_web_republisher__msg__TFArray
{
  geometry_msgs__msg__TransformStamped__Sequence transforms;
} tf2_web_republisher__msg__TFArray;

// Struct for a sequence of tf2_web_republisher__msg__TFArray.
typedef struct tf2_web_republisher__msg__TFArray__Sequence
{
  tf2_web_republisher__msg__TFArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__msg__TFArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__STRUCT_H_
