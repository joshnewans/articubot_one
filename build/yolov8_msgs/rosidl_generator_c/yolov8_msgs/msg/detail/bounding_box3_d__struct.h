// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:msg/BoundingBox3D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__STRUCT_H_
#define YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/BoundingBox3D in the package yolov8_msgs.
typedef struct yolov8_msgs__msg__BoundingBox3D
{
  geometry_msgs__msg__Pose center;
  geometry_msgs__msg__Vector3 size;
  rosidl_runtime_c__String frame_id;
} yolov8_msgs__msg__BoundingBox3D;

// Struct for a sequence of yolov8_msgs__msg__BoundingBox3D.
typedef struct yolov8_msgs__msg__BoundingBox3D__Sequence
{
  yolov8_msgs__msg__BoundingBox3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__msg__BoundingBox3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__STRUCT_H_
