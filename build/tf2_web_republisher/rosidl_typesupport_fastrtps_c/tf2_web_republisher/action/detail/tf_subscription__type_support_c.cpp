// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tf2_web_republisher:action/TFSubscription.idl
// generated code does not contain a copyright notice
#include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
#include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
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

#include "rosidl_runtime_c/string.h"  // source_frames, target_frame
#include "rosidl_runtime_c/string_functions.h"  // source_frames, target_frame

// forward declare type support functions


using _TFSubscription_Goal__ros_msg_type = tf2_web_republisher__action__TFSubscription_Goal;

static bool _TFSubscription_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TFSubscription_Goal__ros_msg_type * ros_message = static_cast<const _TFSubscription_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: source_frames
  {
    size_t size = ros_message->source_frames.size;
    auto array_ptr = ros_message->source_frames.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: target_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->target_frame;
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

  // Field name: angular_thres
  {
    cdr << ros_message->angular_thres;
  }

  // Field name: trans_thres
  {
    cdr << ros_message->trans_thres;
  }

  // Field name: rate
  {
    cdr << ros_message->rate;
  }

  return true;
}

static bool _TFSubscription_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TFSubscription_Goal__ros_msg_type * ros_message = static_cast<_TFSubscription_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: source_frames
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->source_frames.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->source_frames);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->source_frames, size)) {
      return "failed to create array for field 'source_frames'";
    }
    auto array_ptr = ros_message->source_frames.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'source_frames'\n");
        return false;
      }
    }
  }

  // Field name: target_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->target_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->target_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->target_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'target_frame'\n");
      return false;
    }
  }

  // Field name: angular_thres
  {
    cdr >> ros_message->angular_thres;
  }

  // Field name: trans_thres
  {
    cdr >> ros_message->trans_thres;
  }

  // Field name: rate
  {
    cdr >> ros_message->rate;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TFSubscription_Goal__ros_msg_type * ros_message = static_cast<const _TFSubscription_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name source_frames
  {
    size_t array_size = ros_message->source_frames.size;
    auto array_ptr = ros_message->source_frames.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name target_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target_frame.size + 1);
  // field.name angular_thres
  {
    size_t item_size = sizeof(ros_message->angular_thres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trans_thres
  {
    size_t item_size = sizeof(ros_message->trans_thres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rate
  {
    size_t item_size = sizeof(ros_message->rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TFSubscription_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__action__TFSubscription_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: source_frames
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: target_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: angular_thres
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trans_thres
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TFSubscription_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__action__TFSubscription_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TFSubscription_Goal = {
  "tf2_web_republisher::action",
  "TFSubscription_Goal",
  _TFSubscription_Goal__cdr_serialize,
  _TFSubscription_Goal__cdr_deserialize,
  _TFSubscription_Goal__get_serialized_size,
  _TFSubscription_Goal__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TFSubscription_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Goal)() {
  return &_TFSubscription_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _TFSubscription_Result__ros_msg_type = tf2_web_republisher__action__TFSubscription_Result;

static bool _TFSubscription_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TFSubscription_Result__ros_msg_type * ros_message = static_cast<const _TFSubscription_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _TFSubscription_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TFSubscription_Result__ros_msg_type * ros_message = static_cast<_TFSubscription_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TFSubscription_Result__ros_msg_type * ros_message = static_cast<const _TFSubscription_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TFSubscription_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__action__TFSubscription_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TFSubscription_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__action__TFSubscription_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TFSubscription_Result = {
  "tf2_web_republisher::action",
  "TFSubscription_Result",
  _TFSubscription_Result__cdr_serialize,
  _TFSubscription_Result__cdr_deserialize,
  _TFSubscription_Result__get_serialized_size,
  _TFSubscription_Result__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TFSubscription_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Result)() {
  return &_TFSubscription_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "geometry_msgs/msg/detail/transform_stamped__functions.h"  // transforms

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t get_serialized_size_geometry_msgs__msg__TransformStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t max_serialized_size_geometry_msgs__msg__TransformStamped(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TransformStamped)();


using _TFSubscription_Feedback__ros_msg_type = tf2_web_republisher__action__TFSubscription_Feedback;

static bool _TFSubscription_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TFSubscription_Feedback__ros_msg_type * ros_message = static_cast<const _TFSubscription_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: transforms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TransformStamped
      )()->data);
    size_t size = ros_message->transforms.size;
    auto array_ptr = ros_message->transforms.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _TFSubscription_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TFSubscription_Feedback__ros_msg_type * ros_message = static_cast<_TFSubscription_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: transforms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TransformStamped
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->transforms.data) {
      geometry_msgs__msg__TransformStamped__Sequence__fini(&ros_message->transforms);
    }
    if (!geometry_msgs__msg__TransformStamped__Sequence__init(&ros_message->transforms, size)) {
      return "failed to create array for field 'transforms'";
    }
    auto array_ptr = ros_message->transforms.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TFSubscription_Feedback__ros_msg_type * ros_message = static_cast<const _TFSubscription_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name transforms
  {
    size_t array_size = ros_message->transforms.size;
    auto array_ptr = ros_message->transforms.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__TransformStamped(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TFSubscription_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__action__TFSubscription_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: transforms
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__TransformStamped(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TFSubscription_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__action__TFSubscription_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TFSubscription_Feedback = {
  "tf2_web_republisher::action",
  "TFSubscription_Feedback",
  _TFSubscription_Feedback__cdr_serialize,
  _TFSubscription_Feedback__cdr_deserialize,
  _TFSubscription_Feedback__get_serialized_size,
  _TFSubscription_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TFSubscription_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Feedback)() {
  return &_TFSubscription_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _TFSubscription_SendGoal_Request__ros_msg_type = tf2_web_republisher__action__TFSubscription_SendGoal_Request;

static bool _TFSubscription_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TFSubscription_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _TFSubscription_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TFSubscription_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TFSubscription_SendGoal_Request__ros_msg_type * ros_message = static_cast<_TFSubscription_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TFSubscription_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _TFSubscription_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_tf2_web_republisher__action__TFSubscription_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TFSubscription_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__action__TFSubscription_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tf2_web_republisher__action__TFSubscription_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TFSubscription_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__action__TFSubscription_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TFSubscription_SendGoal_Request = {
  "tf2_web_republisher::action",
  "TFSubscription_SendGoal_Request",
  _TFSubscription_SendGoal_Request__cdr_serialize,
  _TFSubscription_SendGoal_Request__cdr_deserialize,
  _TFSubscription_SendGoal_Request__get_serialized_size,
  _TFSubscription_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TFSubscription_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_SendGoal_Request)() {
  return &_TFSubscription_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _TFSubscription_SendGoal_Response__ros_msg_type = tf2_web_republisher__action__TFSubscription_SendGoal_Response;

static bool _TFSubscription_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TFSubscription_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _TFSubscription_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TFSubscription_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TFSubscription_SendGoal_Response__ros_msg_type * ros_message = static_cast<_TFSubscription_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TFSubscription_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _TFSubscription_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TFSubscription_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__action__TFSubscription_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TFSubscription_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__action__TFSubscription_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TFSubscription_SendGoal_Response = {
  "tf2_web_republisher::action",
  "TFSubscription_SendGoal_Response",
  _TFSubscription_SendGoal_Response__cdr_serialize,
  _TFSubscription_SendGoal_Response__cdr_deserialize,
  _TFSubscription_SendGoal_Response__get_serialized_size,
  _TFSubscription_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TFSubscription_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_SendGoal_Response)() {
  return &_TFSubscription_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tf2_web_republisher/action/tf_subscription.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TFSubscription_SendGoal__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_SendGoal_Response)(),
};

static rosidl_service_type_support_t TFSubscription_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TFSubscription_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_SendGoal)() {
  return &TFSubscription_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _TFSubscription_GetResult_Request__ros_msg_type = tf2_web_republisher__action__TFSubscription_GetResult_Request;

static bool _TFSubscription_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TFSubscription_GetResult_Request__ros_msg_type * ros_message = static_cast<const _TFSubscription_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TFSubscription_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TFSubscription_GetResult_Request__ros_msg_type * ros_message = static_cast<_TFSubscription_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TFSubscription_GetResult_Request__ros_msg_type * ros_message = static_cast<const _TFSubscription_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TFSubscription_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__action__TFSubscription_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TFSubscription_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__action__TFSubscription_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TFSubscription_GetResult_Request = {
  "tf2_web_republisher::action",
  "TFSubscription_GetResult_Request",
  _TFSubscription_GetResult_Request__cdr_serialize,
  _TFSubscription_GetResult_Request__cdr_deserialize,
  _TFSubscription_GetResult_Request__get_serialized_size,
  _TFSubscription_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TFSubscription_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_GetResult_Request)() {
  return &_TFSubscription_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Result)();


using _TFSubscription_GetResult_Response__ros_msg_type = tf2_web_republisher__action__TFSubscription_GetResult_Response;

static bool _TFSubscription_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TFSubscription_GetResult_Response__ros_msg_type * ros_message = static_cast<const _TFSubscription_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TFSubscription_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TFSubscription_GetResult_Response__ros_msg_type * ros_message = static_cast<_TFSubscription_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TFSubscription_GetResult_Response__ros_msg_type * ros_message = static_cast<const _TFSubscription_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_tf2_web_republisher__action__TFSubscription_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TFSubscription_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__action__TFSubscription_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tf2_web_republisher__action__TFSubscription_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TFSubscription_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__action__TFSubscription_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TFSubscription_GetResult_Response = {
  "tf2_web_republisher::action",
  "TFSubscription_GetResult_Response",
  _TFSubscription_GetResult_Response__cdr_serialize,
  _TFSubscription_GetResult_Response__cdr_deserialize,
  _TFSubscription_GetResult_Response__get_serialized_size,
  _TFSubscription_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TFSubscription_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_GetResult_Response)() {
  return &_TFSubscription_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/tf_subscription.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TFSubscription_GetResult__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_GetResult_Response)(),
};

static rosidl_service_type_support_t TFSubscription_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TFSubscription_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_GetResult)() {
  return &TFSubscription_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _TFSubscription_FeedbackMessage__ros_msg_type = tf2_web_republisher__action__TFSubscription_FeedbackMessage;

static bool _TFSubscription_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TFSubscription_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _TFSubscription_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TFSubscription_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TFSubscription_FeedbackMessage__ros_msg_type * ros_message = static_cast<_TFSubscription_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__action__TFSubscription_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TFSubscription_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _TFSubscription_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_tf2_web_republisher__action__TFSubscription_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TFSubscription_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__action__TFSubscription_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__action__TFSubscription_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tf2_web_republisher__action__TFSubscription_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TFSubscription_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__action__TFSubscription_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TFSubscription_FeedbackMessage = {
  "tf2_web_republisher::action",
  "TFSubscription_FeedbackMessage",
  _TFSubscription_FeedbackMessage__cdr_serialize,
  _TFSubscription_FeedbackMessage__cdr_deserialize,
  _TFSubscription_FeedbackMessage__get_serialized_size,
  _TFSubscription_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TFSubscription_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, action, TFSubscription_FeedbackMessage)() {
  return &_TFSubscription_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
