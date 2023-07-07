// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tf2_web_republisher:msg/TFArray.idl
// generated code does not contain a copyright notice
#include "tf2_web_republisher/msg/detail/tf_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `transforms`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"

bool
tf2_web_republisher__msg__TFArray__init(tf2_web_republisher__msg__TFArray * msg)
{
  if (!msg) {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__init(&msg->transforms, 0)) {
    tf2_web_republisher__msg__TFArray__fini(msg);
    return false;
  }
  return true;
}

void
tf2_web_republisher__msg__TFArray__fini(tf2_web_republisher__msg__TFArray * msg)
{
  if (!msg) {
    return;
  }
  // transforms
  geometry_msgs__msg__TransformStamped__Sequence__fini(&msg->transforms);
}

bool
tf2_web_republisher__msg__TFArray__are_equal(const tf2_web_republisher__msg__TFArray * lhs, const tf2_web_republisher__msg__TFArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__are_equal(
      &(lhs->transforms), &(rhs->transforms)))
  {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__msg__TFArray__copy(
  const tf2_web_republisher__msg__TFArray * input,
  tf2_web_republisher__msg__TFArray * output)
{
  if (!input || !output) {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__copy(
      &(input->transforms), &(output->transforms)))
  {
    return false;
  }
  return true;
}

tf2_web_republisher__msg__TFArray *
tf2_web_republisher__msg__TFArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__msg__TFArray * msg = (tf2_web_republisher__msg__TFArray *)allocator.allocate(sizeof(tf2_web_republisher__msg__TFArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__msg__TFArray));
  bool success = tf2_web_republisher__msg__TFArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__msg__TFArray__destroy(tf2_web_republisher__msg__TFArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__msg__TFArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__msg__TFArray__Sequence__init(tf2_web_republisher__msg__TFArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__msg__TFArray * data = NULL;

  if (size) {
    data = (tf2_web_republisher__msg__TFArray *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__msg__TFArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__msg__TFArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__msg__TFArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tf2_web_republisher__msg__TFArray__Sequence__fini(tf2_web_republisher__msg__TFArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_web_republisher__msg__TFArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tf2_web_republisher__msg__TFArray__Sequence *
tf2_web_republisher__msg__TFArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__msg__TFArray__Sequence * array = (tf2_web_republisher__msg__TFArray__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__msg__TFArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__msg__TFArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__msg__TFArray__Sequence__destroy(tf2_web_republisher__msg__TFArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__msg__TFArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__msg__TFArray__Sequence__are_equal(const tf2_web_republisher__msg__TFArray__Sequence * lhs, const tf2_web_republisher__msg__TFArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__msg__TFArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__msg__TFArray__Sequence__copy(
  const tf2_web_republisher__msg__TFArray__Sequence * input,
  tf2_web_republisher__msg__TFArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__msg__TFArray);
    tf2_web_republisher__msg__TFArray * data =
      (tf2_web_republisher__msg__TFArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__msg__TFArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__msg__TFArray__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_web_republisher__msg__TFArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
