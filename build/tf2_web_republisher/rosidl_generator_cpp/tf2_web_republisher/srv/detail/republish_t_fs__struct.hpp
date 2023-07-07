// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__STRUCT_HPP_
#define TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__srv__RepublishTFs_Request __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__srv__RepublishTFs_Request __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RepublishTFs_Request_
{
  using Type = RepublishTFs_Request_<ContainerAllocator>;

  explicit RepublishTFs_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timeout(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_frame = "";
      this->angular_thres = 0.0f;
      this->trans_thres = 0.0f;
      this->rate = 0.0f;
    }
  }

  explicit RepublishTFs_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_frame(_alloc),
    timeout(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_frame = "";
      this->angular_thres = 0.0f;
      this->trans_thres = 0.0f;
      this->rate = 0.0f;
    }
  }

  // field types and members
  using _source_frames_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _source_frames_type source_frames;
  using _target_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _target_frame_type target_frame;
  using _angular_thres_type =
    float;
  _angular_thres_type angular_thres;
  using _trans_thres_type =
    float;
  _trans_thres_type trans_thres;
  using _rate_type =
    float;
  _rate_type rate;
  using _timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__source_frames(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->source_frames = _arg;
    return *this;
  }
  Type & set__target_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->target_frame = _arg;
    return *this;
  }
  Type & set__angular_thres(
    const float & _arg)
  {
    this->angular_thres = _arg;
    return *this;
  }
  Type & set__trans_thres(
    const float & _arg)
  {
    this->trans_thres = _arg;
    return *this;
  }
  Type & set__rate(
    const float & _arg)
  {
    this->rate = _arg;
    return *this;
  }
  Type & set__timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__srv__RepublishTFs_Request
    std::shared_ptr<tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__srv__RepublishTFs_Request
    std::shared_ptr<tf2_web_republisher::srv::RepublishTFs_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RepublishTFs_Request_ & other) const
  {
    if (this->source_frames != other.source_frames) {
      return false;
    }
    if (this->target_frame != other.target_frame) {
      return false;
    }
    if (this->angular_thres != other.angular_thres) {
      return false;
    }
    if (this->trans_thres != other.trans_thres) {
      return false;
    }
    if (this->rate != other.rate) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const RepublishTFs_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RepublishTFs_Request_

// alias to use template instance with default allocator
using RepublishTFs_Request =
  tf2_web_republisher::srv::RepublishTFs_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tf2_web_republisher


#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__srv__RepublishTFs_Response __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__srv__RepublishTFs_Response __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RepublishTFs_Response_
{
  using Type = RepublishTFs_Response_<ContainerAllocator>;

  explicit RepublishTFs_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
    }
  }

  explicit RepublishTFs_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
    }
  }

  // field types and members
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _topic_name_type topic_name;

  // setters for named parameter idiom
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__srv__RepublishTFs_Response
    std::shared_ptr<tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__srv__RepublishTFs_Response
    std::shared_ptr<tf2_web_republisher::srv::RepublishTFs_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RepublishTFs_Response_ & other) const
  {
    if (this->topic_name != other.topic_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const RepublishTFs_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RepublishTFs_Response_

// alias to use template instance with default allocator
using RepublishTFs_Response =
  tf2_web_republisher::srv::RepublishTFs_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tf2_web_republisher

namespace tf2_web_republisher
{

namespace srv
{

struct RepublishTFs
{
  using Request = tf2_web_republisher::srv::RepublishTFs_Request;
  using Response = tf2_web_republisher::srv::RepublishTFs_Response;
};

}  // namespace srv

}  // namespace tf2_web_republisher

#endif  // TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__STRUCT_HPP_
