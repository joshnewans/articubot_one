// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
// generated code does not contain a copyright notice
#include "tf2_web_republisher/srv/detail/republish_t_fs__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tf2_web_republisher/srv/detail/republish_t_fs__struct.h"
#include "tf2_web_republisher/srv/detail/republish_t_fs__functions.h"
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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // timeout
#include "rosidl_runtime_c/string.h"  // source_frames, target_frame
#include "rosidl_runtime_c/string_functions.h"  // source_frames, target_frame

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tf2_web_republisher
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();


using _RepublishTFs_Request__ros_msg_type = tf2_web_republisher__srv__RepublishTFs_Request;

static bool _RepublishTFs_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RepublishTFs_Request__ros_msg_type * ros_message = static_cast<const _RepublishTFs_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timeout
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->timeout, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RepublishTFs_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RepublishTFs_Request__ros_msg_type * ros_message = static_cast<_RepublishTFs_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timeout
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->timeout))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__srv__RepublishTFs_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RepublishTFs_Request__ros_msg_type * ros_message = static_cast<const _RepublishTFs_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name timeout

  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->timeout), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RepublishTFs_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__srv__RepublishTFs_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__srv__RepublishTFs_Request(
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
  // member: timeout
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Duration(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RepublishTFs_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__srv__RepublishTFs_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RepublishTFs_Request = {
  "tf2_web_republisher::srv",
  "RepublishTFs_Request",
  _RepublishTFs_Request__cdr_serialize,
  _RepublishTFs_Request__cdr_deserialize,
  _RepublishTFs_Request__get_serialized_size,
  _RepublishTFs_Request__max_serialized_size
};

static rosidl_message_type_support_t _RepublishTFs_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RepublishTFs_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, srv, RepublishTFs_Request)() {
  return &_RepublishTFs_Request__type_support;
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
// #include "tf2_web_republisher/srv/detail/republish_t_fs__struct.h"
// already included above
// #include "tf2_web_republisher/srv/detail/republish_t_fs__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // topic_name
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // topic_name

// forward declare type support functions


using _RepublishTFs_Response__ros_msg_type = tf2_web_republisher__srv__RepublishTFs_Response;

static bool _RepublishTFs_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RepublishTFs_Response__ros_msg_type * ros_message = static_cast<const _RepublishTFs_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: topic_name
  {
    const rosidl_runtime_c__String * str = &ros_message->topic_name;
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

  return true;
}

static bool _RepublishTFs_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RepublishTFs_Response__ros_msg_type * ros_message = static_cast<_RepublishTFs_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: topic_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->topic_name.data) {
      rosidl_runtime_c__String__init(&ros_message->topic_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->topic_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'topic_name'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t get_serialized_size_tf2_web_republisher__srv__RepublishTFs_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RepublishTFs_Response__ros_msg_type * ros_message = static_cast<const _RepublishTFs_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name topic_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->topic_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RepublishTFs_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tf2_web_republisher__srv__RepublishTFs_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tf2_web_republisher
size_t max_serialized_size_tf2_web_republisher__srv__RepublishTFs_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: topic_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RepublishTFs_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tf2_web_republisher__srv__RepublishTFs_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RepublishTFs_Response = {
  "tf2_web_republisher::srv",
  "RepublishTFs_Response",
  _RepublishTFs_Response__cdr_serialize,
  _RepublishTFs_Response__cdr_deserialize,
  _RepublishTFs_Response__get_serialized_size,
  _RepublishTFs_Response__max_serialized_size
};

static rosidl_message_type_support_t _RepublishTFs_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RepublishTFs_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, srv, RepublishTFs_Response)() {
  return &_RepublishTFs_Response__type_support;
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
#include "tf2_web_republisher/srv/republish_t_fs.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RepublishTFs__callbacks = {
  "tf2_web_republisher::srv",
  "RepublishTFs",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, srv, RepublishTFs_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, srv, RepublishTFs_Response)(),
};

static rosidl_service_type_support_t RepublishTFs__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RepublishTFs__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tf2_web_republisher, srv, RepublishTFs)() {
  return &RepublishTFs__handle;
}

#if defined(__cplusplus)
}
#endif
