// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolov8_msgs:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__DETECTION_ARRAY__STRUCT_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__DETECTION_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'detections'
#include "yolov8_msgs/msg/detail/detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yolov8_msgs__msg__DetectionArray __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_msgs__msg__DetectionArray __declspec(deprecated)
#endif

namespace yolov8_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectionArray_
{
  using Type = DetectionArray_<ContainerAllocator>;

  explicit DetectionArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DetectionArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detections_type =
    std::vector<yolov8_msgs::msg::Detection_<ContainerAllocator>, typename ContainerAllocator::template rebind<yolov8_msgs::msg::Detection_<ContainerAllocator>>::other>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<yolov8_msgs::msg::Detection_<ContainerAllocator>, typename ContainerAllocator::template rebind<yolov8_msgs::msg::Detection_<ContainerAllocator>>::other> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_msgs::msg::DetectionArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_msgs::msg::DetectionArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_msgs::msg::DetectionArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_msgs::msg::DetectionArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::DetectionArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::DetectionArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::DetectionArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::DetectionArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_msgs::msg::DetectionArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_msgs::msg::DetectionArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_msgs__msg__DetectionArray
    std::shared_ptr<yolov8_msgs::msg::DetectionArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_msgs__msg__DetectionArray
    std::shared_ptr<yolov8_msgs::msg::DetectionArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectionArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectionArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectionArray_

// alias to use template instance with default allocator
using DetectionArray =
  yolov8_msgs::msg::DetectionArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__DETECTION_ARRAY__STRUCT_HPP_
