// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yolov8_msgs:msg/Detection.idl
// generated code does not contain a copyright notice
#include "yolov8_msgs/msg/detail/detection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yolov8_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yolov8_msgs/msg/detail/detection__struct.h"
#include "yolov8_msgs/msg/detail/detection__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // class_name, id
#include "rosidl_runtime_c/string_functions.h"  // class_name, id
#include "yolov8_msgs/msg/detail/bounding_box2_d__functions.h"  // bbox
#include "yolov8_msgs/msg/detail/bounding_box3_d__functions.h"  // bbox3d
#include "yolov8_msgs/msg/detail/key_point2_d_array__functions.h"  // keypoints
#include "yolov8_msgs/msg/detail/key_point3_d_array__functions.h"  // keypoints3d
#include "yolov8_msgs/msg/detail/mask__functions.h"  // mask

// forward declare type support functions
size_t get_serialized_size_yolov8_msgs__msg__BoundingBox2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolov8_msgs__msg__BoundingBox2D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, BoundingBox2D)();
size_t get_serialized_size_yolov8_msgs__msg__BoundingBox3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolov8_msgs__msg__BoundingBox3D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, BoundingBox3D)();
size_t get_serialized_size_yolov8_msgs__msg__KeyPoint2DArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolov8_msgs__msg__KeyPoint2DArray(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, KeyPoint2DArray)();
size_t get_serialized_size_yolov8_msgs__msg__KeyPoint3DArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolov8_msgs__msg__KeyPoint3DArray(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, KeyPoint3DArray)();
size_t get_serialized_size_yolov8_msgs__msg__Mask(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolov8_msgs__msg__Mask(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, Mask)();


using _Detection__ros_msg_type = yolov8_msgs__msg__Detection;

static bool _Detection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Detection__ros_msg_type * ros_message = static_cast<const _Detection__ros_msg_type *>(untyped_ros_message);
  // Field name: class_id
  {
    cdr << ros_message->class_id;
  }

  // Field name: class_name
  {
    const rosidl_runtime_c__String * str = &ros_message->class_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, BoundingBox2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bbox, cdr))
    {
      return false;
    }
  }

  // Field name: bbox3d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, BoundingBox3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bbox3d, cdr))
    {
      return false;
    }
  }

  // Field name: mask
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, Mask
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mask, cdr))
    {
      return false;
    }
  }

  // Field name: keypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, KeyPoint2DArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->keypoints, cdr))
    {
      return false;
    }
  }

  // Field name: keypoints3d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, KeyPoint3DArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->keypoints3d, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Detection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Detection__ros_msg_type * ros_message = static_cast<_Detection__ros_msg_type *>(untyped_ros_message);
  // Field name: class_id
  {
    cdr >> ros_message->class_id;
  }

  // Field name: class_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->class_name.data) {
      rosidl_runtime_c__String__init(&ros_message->class_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->class_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'class_name'\n");
      return false;
    }
  }

  // Field name: score
  {
    cdr >> ros_message->score;
  }

  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, BoundingBox2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bbox))
    {
      return false;
    }
  }

  // Field name: bbox3d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, BoundingBox3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bbox3d))
    {
      return false;
    }
  }

  // Field name: mask
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, Mask
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mask))
    {
      return false;
    }
  }

  // Field name: keypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, KeyPoint2DArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->keypoints))
    {
      return false;
    }
  }

  // Field name: keypoints3d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, KeyPoint3DArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->keypoints3d))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolov8_msgs
size_t get_serialized_size_yolov8_msgs__msg__Detection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Detection__ros_msg_type * ros_message = static_cast<const _Detection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name class_id
  {
    size_t item_size = sizeof(ros_message->class_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name class_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->class_name.size + 1);
  // field.name score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name bbox

  current_alignment += get_serialized_size_yolov8_msgs__msg__BoundingBox2D(
    &(ros_message->bbox), current_alignment);
  // field.name bbox3d

  current_alignment += get_serialized_size_yolov8_msgs__msg__BoundingBox3D(
    &(ros_message->bbox3d), current_alignment);
  // field.name mask

  current_alignment += get_serialized_size_yolov8_msgs__msg__Mask(
    &(ros_message->mask), current_alignment);
  // field.name keypoints

  current_alignment += get_serialized_size_yolov8_msgs__msg__KeyPoint2DArray(
    &(ros_message->keypoints), current_alignment);
  // field.name keypoints3d

  current_alignment += get_serialized_size_yolov8_msgs__msg__KeyPoint3DArray(
    &(ros_message->keypoints3d), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Detection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yolov8_msgs__msg__Detection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolov8_msgs
size_t max_serialized_size_yolov8_msgs__msg__Detection(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: class_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: class_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: score
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bbox
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_yolov8_msgs__msg__BoundingBox2D(
        full_bounded, current_alignment);
    }
  }
  // member: bbox3d
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_yolov8_msgs__msg__BoundingBox3D(
        full_bounded, current_alignment);
    }
  }
  // member: mask
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_yolov8_msgs__msg__Mask(
        full_bounded, current_alignment);
    }
  }
  // member: keypoints
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_yolov8_msgs__msg__KeyPoint2DArray(
        full_bounded, current_alignment);
    }
  }
  // member: keypoints3d
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_yolov8_msgs__msg__KeyPoint3DArray(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Detection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_yolov8_msgs__msg__Detection(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Detection = {
  "yolov8_msgs::msg",
  "Detection",
  _Detection__cdr_serialize,
  _Detection__cdr_deserialize,
  _Detection__get_serialized_size,
  _Detection__max_serialized_size
};

static rosidl_message_type_support_t _Detection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Detection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolov8_msgs, msg, Detection)() {
  return &_Detection__type_support;
}

#if defined(__cplusplus)
}
#endif
