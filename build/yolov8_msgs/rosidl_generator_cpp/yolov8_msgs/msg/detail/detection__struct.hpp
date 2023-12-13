// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolov8_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'bbox'
#include "yolov8_msgs/msg/detail/bounding_box2_d__struct.hpp"
// Member 'bbox3d'
#include "yolov8_msgs/msg/detail/bounding_box3_d__struct.hpp"
// Member 'mask'
#include "yolov8_msgs/msg/detail/mask__struct.hpp"
// Member 'keypoints'
#include "yolov8_msgs/msg/detail/key_point2_d_array__struct.hpp"
// Member 'keypoints3d'
#include "yolov8_msgs/msg/detail/key_point3_d_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yolov8_msgs__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_msgs__msg__Detection __declspec(deprecated)
#endif

namespace yolov8_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox(_init),
    bbox3d(_init),
    mask(_init),
    keypoints(_init),
    keypoints3d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = 0l;
      this->class_name = "";
      this->score = 0.0;
      this->id = "";
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc),
    id(_alloc),
    bbox(_alloc, _init),
    bbox3d(_alloc, _init),
    mask(_alloc, _init),
    keypoints(_alloc, _init),
    keypoints3d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = 0l;
      this->class_name = "";
      this->score = 0.0;
      this->id = "";
    }
  }

  // field types and members
  using _class_id_type =
    int32_t;
  _class_id_type class_id;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _class_name_type class_name;
  using _score_type =
    double;
  _score_type score;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _bbox_type =
    yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator>;
  _bbox_type bbox;
  using _bbox3d_type =
    yolov8_msgs::msg::BoundingBox3D_<ContainerAllocator>;
  _bbox3d_type bbox3d;
  using _mask_type =
    yolov8_msgs::msg::Mask_<ContainerAllocator>;
  _mask_type mask;
  using _keypoints_type =
    yolov8_msgs::msg::KeyPoint2DArray_<ContainerAllocator>;
  _keypoints_type keypoints;
  using _keypoints3d_type =
    yolov8_msgs::msg::KeyPoint3DArray_<ContainerAllocator>;
  _keypoints3d_type keypoints3d;

  // setters for named parameter idiom
  Type & set__class_id(
    const int32_t & _arg)
  {
    this->class_id = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__bbox(
    const yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }
  Type & set__bbox3d(
    const yolov8_msgs::msg::BoundingBox3D_<ContainerAllocator> & _arg)
  {
    this->bbox3d = _arg;
    return *this;
  }
  Type & set__mask(
    const yolov8_msgs::msg::Mask_<ContainerAllocator> & _arg)
  {
    this->mask = _arg;
    return *this;
  }
  Type & set__keypoints(
    const yolov8_msgs::msg::KeyPoint2DArray_<ContainerAllocator> & _arg)
  {
    this->keypoints = _arg;
    return *this;
  }
  Type & set__keypoints3d(
    const yolov8_msgs::msg::KeyPoint3DArray_<ContainerAllocator> & _arg)
  {
    this->keypoints3d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_msgs::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_msgs::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_msgs::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_msgs::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_msgs__msg__Detection
    std::shared_ptr<yolov8_msgs::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_msgs__msg__Detection
    std::shared_ptr<yolov8_msgs::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->class_id != other.class_id) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    if (this->bbox3d != other.bbox3d) {
      return false;
    }
    if (this->mask != other.mask) {
      return false;
    }
    if (this->keypoints != other.keypoints) {
      return false;
    }
    if (this->keypoints3d != other.keypoints3d) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  yolov8_msgs::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
