// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tf2_web_republisher:msg/TFArray.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__STRUCT_HPP_
#define TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__msg__TFArray __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__msg__TFArray __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TFArray_
{
  using Type = TFArray_<ContainerAllocator>;

  explicit TFArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TFArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _transforms_type =
    std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other>;
  _transforms_type transforms;

  // setters for named parameter idiom
  Type & set__transforms(
    const std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::msg::TFArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::msg::TFArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::msg::TFArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::msg::TFArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::msg::TFArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::msg::TFArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::msg::TFArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::msg::TFArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::msg::TFArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::msg::TFArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__msg__TFArray
    std::shared_ptr<tf2_web_republisher::msg::TFArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__msg__TFArray
    std::shared_ptr<tf2_web_republisher::msg::TFArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFArray_ & other) const
  {
    if (this->transforms != other.transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFArray_

// alias to use template instance with default allocator
using TFArray =
  tf2_web_republisher::msg::TFArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tf2_web_republisher

#endif  // TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__STRUCT_HPP_
