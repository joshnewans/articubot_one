// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
// generated code does not contain a copyright notice
#include "tf2_web_republisher/srv/detail/republish_t_fs__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tf2_web_republisher/srv/detail/republish_t_fs__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Duration &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Duration &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);
size_t
max_serialized_size_Duration(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace tf2_web_republisher
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::srv::RepublishTFs_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: source_frames
  {
    cdr << ros_message.source_frames;
  }
  // Member: target_frame
  cdr << ros_message.target_frame;
  // Member: angular_thres
  cdr << ros_message.angular_thres;
  // Member: trans_thres
  cdr << ros_message.trans_thres;
  // Member: rate
  cdr << ros_message.rate;
  // Member: timeout
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.timeout,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::srv::RepublishTFs_Request & ros_message)
{
  // Member: source_frames
  {
    cdr >> ros_message.source_frames;
  }

  // Member: target_frame
  cdr >> ros_message.target_frame;

  // Member: angular_thres
  cdr >> ros_message.angular_thres;

  // Member: trans_thres
  cdr >> ros_message.trans_thres;

  // Member: rate
  cdr >> ros_message.rate;

  // Member: timeout
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.timeout);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::srv::RepublishTFs_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: source_frames
  {
    size_t array_size = ros_message.source_frames.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.source_frames[index].size() + 1);
    }
  }
  // Member: target_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.target_frame.size() + 1);
  // Member: angular_thres
  {
    size_t item_size = sizeof(ros_message.angular_thres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trans_thres
  {
    size_t item_size = sizeof(ros_message.trans_thres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rate
  {
    size_t item_size = sizeof(ros_message.rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timeout

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.timeout, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_RepublishTFs_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: source_frames
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

  // Member: target_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: angular_thres
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trans_thres
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timeout
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Duration(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RepublishTFs_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::srv::RepublishTFs_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RepublishTFs_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::srv::RepublishTFs_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RepublishTFs_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::srv::RepublishTFs_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RepublishTFs_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RepublishTFs_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RepublishTFs_Request__callbacks = {
  "tf2_web_republisher::srv",
  "RepublishTFs_Request",
  _RepublishTFs_Request__cdr_serialize,
  _RepublishTFs_Request__cdr_deserialize,
  _RepublishTFs_Request__get_serialized_size,
  _RepublishTFs_Request__max_serialized_size
};

static rosidl_message_type_support_t _RepublishTFs_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RepublishTFs_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::srv::RepublishTFs_Request>()
{
  return &tf2_web_republisher::srv::typesupport_fastrtps_cpp::_RepublishTFs_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, srv, RepublishTFs_Request)() {
  return &tf2_web_republisher::srv::typesupport_fastrtps_cpp::_RepublishTFs_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tf2_web_republisher
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::srv::RepublishTFs_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: topic_name
  cdr << ros_message.topic_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::srv::RepublishTFs_Response & ros_message)
{
  // Member: topic_name
  cdr >> ros_message.topic_name;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::srv::RepublishTFs_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: topic_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.topic_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_RepublishTFs_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: topic_name
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

static bool _RepublishTFs_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::srv::RepublishTFs_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RepublishTFs_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::srv::RepublishTFs_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RepublishTFs_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::srv::RepublishTFs_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RepublishTFs_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RepublishTFs_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RepublishTFs_Response__callbacks = {
  "tf2_web_republisher::srv",
  "RepublishTFs_Response",
  _RepublishTFs_Response__cdr_serialize,
  _RepublishTFs_Response__cdr_deserialize,
  _RepublishTFs_Response__get_serialized_size,
  _RepublishTFs_Response__max_serialized_size
};

static rosidl_message_type_support_t _RepublishTFs_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RepublishTFs_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::srv::RepublishTFs_Response>()
{
  return &tf2_web_republisher::srv::typesupport_fastrtps_cpp::_RepublishTFs_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, srv, RepublishTFs_Response)() {
  return &tf2_web_republisher::srv::typesupport_fastrtps_cpp::_RepublishTFs_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tf2_web_republisher
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RepublishTFs__callbacks = {
  "tf2_web_republisher::srv",
  "RepublishTFs",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, srv, RepublishTFs_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, srv, RepublishTFs_Response)(),
};

static rosidl_service_type_support_t _RepublishTFs__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RepublishTFs__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_service_type_support_t *
get_service_type_support_handle<tf2_web_republisher::srv::RepublishTFs>()
{
  return &tf2_web_republisher::srv::typesupport_fastrtps_cpp::_RepublishTFs__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, srv, RepublishTFs)() {
  return &tf2_web_republisher::srv::typesupport_fastrtps_cpp::_RepublishTFs__handle;
}

#ifdef __cplusplus
}
#endif
