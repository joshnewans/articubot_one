// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tf2_web_republisher:action/TFSubscription.idl
// generated code does not contain a copyright notice
#include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `source_frames`
// Member `target_frame`
#include "rosidl_runtime_c/string_functions.h"

bool
tf2_web_republisher__action__TFSubscription_Goal__init(tf2_web_republisher__action__TFSubscription_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // source_frames
  if (!rosidl_runtime_c__String__Sequence__init(&msg->source_frames, 0)) {
    tf2_web_republisher__action__TFSubscription_Goal__fini(msg);
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__init(&msg->target_frame)) {
    tf2_web_republisher__action__TFSubscription_Goal__fini(msg);
    return false;
  }
  // angular_thres
  // trans_thres
  // rate
  return true;
}

void
tf2_web_republisher__action__TFSubscription_Goal__fini(tf2_web_republisher__action__TFSubscription_Goal * msg)
{
  if (!msg) {
    return;
  }
  // source_frames
  rosidl_runtime_c__String__Sequence__fini(&msg->source_frames);
  // target_frame
  rosidl_runtime_c__String__fini(&msg->target_frame);
  // angular_thres
  // trans_thres
  // rate
}

bool
tf2_web_republisher__action__TFSubscription_Goal__are_equal(const tf2_web_republisher__action__TFSubscription_Goal * lhs, const tf2_web_republisher__action__TFSubscription_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // source_frames
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->source_frames), &(rhs->source_frames)))
  {
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_frame), &(rhs->target_frame)))
  {
    return false;
  }
  // angular_thres
  if (lhs->angular_thres != rhs->angular_thres) {
    return false;
  }
  // trans_thres
  if (lhs->trans_thres != rhs->trans_thres) {
    return false;
  }
  // rate
  if (lhs->rate != rhs->rate) {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_Goal__copy(
  const tf2_web_republisher__action__TFSubscription_Goal * input,
  tf2_web_republisher__action__TFSubscription_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // source_frames
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->source_frames), &(output->source_frames)))
  {
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->target_frame), &(output->target_frame)))
  {
    return false;
  }
  // angular_thres
  output->angular_thres = input->angular_thres;
  // trans_thres
  output->trans_thres = input->trans_thres;
  // rate
  output->rate = input->rate;
  return true;
}

tf2_web_republisher__action__TFSubscription_Goal *
tf2_web_republisher__action__TFSubscription_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_Goal * msg = (tf2_web_republisher__action__TFSubscription_Goal *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__action__TFSubscription_Goal));
  bool success = tf2_web_republisher__action__TFSubscription_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__action__TFSubscription_Goal__destroy(tf2_web_republisher__action__TFSubscription_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__action__TFSubscription_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__action__TFSubscription_Goal__Sequence__init(tf2_web_republisher__action__TFSubscription_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_Goal * data = NULL;

  if (size) {
    data = (tf2_web_republisher__action__TFSubscription_Goal *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__action__TFSubscription_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__action__TFSubscription_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__action__TFSubscription_Goal__fini(&data[i - 1]);
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
tf2_web_republisher__action__TFSubscription_Goal__Sequence__fini(tf2_web_republisher__action__TFSubscription_Goal__Sequence * array)
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
      tf2_web_republisher__action__TFSubscription_Goal__fini(&array->data[i]);
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

tf2_web_republisher__action__TFSubscription_Goal__Sequence *
tf2_web_republisher__action__TFSubscription_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_Goal__Sequence * array = (tf2_web_republisher__action__TFSubscription_Goal__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__action__TFSubscription_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__action__TFSubscription_Goal__Sequence__destroy(tf2_web_republisher__action__TFSubscription_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__action__TFSubscription_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__action__TFSubscription_Goal__Sequence__are_equal(const tf2_web_republisher__action__TFSubscription_Goal__Sequence * lhs, const tf2_web_republisher__action__TFSubscription_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__action__TFSubscription_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_Goal__Sequence__copy(
  const tf2_web_republisher__action__TFSubscription_Goal__Sequence * input,
  tf2_web_republisher__action__TFSubscription_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__action__TFSubscription_Goal);
    tf2_web_republisher__action__TFSubscription_Goal * data =
      (tf2_web_republisher__action__TFSubscription_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__action__TFSubscription_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__action__TFSubscription_Goal__fini(&data[i]);
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
    if (!tf2_web_republisher__action__TFSubscription_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tf2_web_republisher__action__TFSubscription_Result__init(tf2_web_republisher__action__TFSubscription_Result * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tf2_web_republisher__action__TFSubscription_Result__fini(tf2_web_republisher__action__TFSubscription_Result * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
tf2_web_republisher__action__TFSubscription_Result__are_equal(const tf2_web_republisher__action__TFSubscription_Result * lhs, const tf2_web_republisher__action__TFSubscription_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_Result__copy(
  const tf2_web_republisher__action__TFSubscription_Result * input,
  tf2_web_republisher__action__TFSubscription_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

tf2_web_republisher__action__TFSubscription_Result *
tf2_web_republisher__action__TFSubscription_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_Result * msg = (tf2_web_republisher__action__TFSubscription_Result *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__action__TFSubscription_Result));
  bool success = tf2_web_republisher__action__TFSubscription_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__action__TFSubscription_Result__destroy(tf2_web_republisher__action__TFSubscription_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__action__TFSubscription_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__action__TFSubscription_Result__Sequence__init(tf2_web_republisher__action__TFSubscription_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_Result * data = NULL;

  if (size) {
    data = (tf2_web_republisher__action__TFSubscription_Result *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__action__TFSubscription_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__action__TFSubscription_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__action__TFSubscription_Result__fini(&data[i - 1]);
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
tf2_web_republisher__action__TFSubscription_Result__Sequence__fini(tf2_web_republisher__action__TFSubscription_Result__Sequence * array)
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
      tf2_web_republisher__action__TFSubscription_Result__fini(&array->data[i]);
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

tf2_web_republisher__action__TFSubscription_Result__Sequence *
tf2_web_republisher__action__TFSubscription_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_Result__Sequence * array = (tf2_web_republisher__action__TFSubscription_Result__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__action__TFSubscription_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__action__TFSubscription_Result__Sequence__destroy(tf2_web_republisher__action__TFSubscription_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__action__TFSubscription_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__action__TFSubscription_Result__Sequence__are_equal(const tf2_web_republisher__action__TFSubscription_Result__Sequence * lhs, const tf2_web_republisher__action__TFSubscription_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__action__TFSubscription_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_Result__Sequence__copy(
  const tf2_web_republisher__action__TFSubscription_Result__Sequence * input,
  tf2_web_republisher__action__TFSubscription_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__action__TFSubscription_Result);
    tf2_web_republisher__action__TFSubscription_Result * data =
      (tf2_web_republisher__action__TFSubscription_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__action__TFSubscription_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__action__TFSubscription_Result__fini(&data[i]);
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
    if (!tf2_web_republisher__action__TFSubscription_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `transforms`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"

bool
tf2_web_republisher__action__TFSubscription_Feedback__init(tf2_web_republisher__action__TFSubscription_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__init(&msg->transforms, 0)) {
    tf2_web_republisher__action__TFSubscription_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
tf2_web_republisher__action__TFSubscription_Feedback__fini(tf2_web_republisher__action__TFSubscription_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // transforms
  geometry_msgs__msg__TransformStamped__Sequence__fini(&msg->transforms);
}

bool
tf2_web_republisher__action__TFSubscription_Feedback__are_equal(const tf2_web_republisher__action__TFSubscription_Feedback * lhs, const tf2_web_republisher__action__TFSubscription_Feedback * rhs)
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
tf2_web_republisher__action__TFSubscription_Feedback__copy(
  const tf2_web_republisher__action__TFSubscription_Feedback * input,
  tf2_web_republisher__action__TFSubscription_Feedback * output)
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

tf2_web_republisher__action__TFSubscription_Feedback *
tf2_web_republisher__action__TFSubscription_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_Feedback * msg = (tf2_web_republisher__action__TFSubscription_Feedback *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__action__TFSubscription_Feedback));
  bool success = tf2_web_republisher__action__TFSubscription_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__action__TFSubscription_Feedback__destroy(tf2_web_republisher__action__TFSubscription_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__action__TFSubscription_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__action__TFSubscription_Feedback__Sequence__init(tf2_web_republisher__action__TFSubscription_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_Feedback * data = NULL;

  if (size) {
    data = (tf2_web_republisher__action__TFSubscription_Feedback *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__action__TFSubscription_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__action__TFSubscription_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__action__TFSubscription_Feedback__fini(&data[i - 1]);
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
tf2_web_republisher__action__TFSubscription_Feedback__Sequence__fini(tf2_web_republisher__action__TFSubscription_Feedback__Sequence * array)
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
      tf2_web_republisher__action__TFSubscription_Feedback__fini(&array->data[i]);
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

tf2_web_republisher__action__TFSubscription_Feedback__Sequence *
tf2_web_republisher__action__TFSubscription_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_Feedback__Sequence * array = (tf2_web_republisher__action__TFSubscription_Feedback__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__action__TFSubscription_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__action__TFSubscription_Feedback__Sequence__destroy(tf2_web_republisher__action__TFSubscription_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__action__TFSubscription_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__action__TFSubscription_Feedback__Sequence__are_equal(const tf2_web_republisher__action__TFSubscription_Feedback__Sequence * lhs, const tf2_web_republisher__action__TFSubscription_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__action__TFSubscription_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_Feedback__Sequence__copy(
  const tf2_web_republisher__action__TFSubscription_Feedback__Sequence * input,
  tf2_web_republisher__action__TFSubscription_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__action__TFSubscription_Feedback);
    tf2_web_republisher__action__TFSubscription_Feedback * data =
      (tf2_web_republisher__action__TFSubscription_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__action__TFSubscription_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__action__TFSubscription_Feedback__fini(&data[i]);
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
    if (!tf2_web_republisher__action__TFSubscription_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Request__init(tf2_web_republisher__action__TFSubscription_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tf2_web_republisher__action__TFSubscription_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tf2_web_republisher__action__TFSubscription_Goal__init(&msg->goal)) {
    tf2_web_republisher__action__TFSubscription_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tf2_web_republisher__action__TFSubscription_SendGoal_Request__fini(tf2_web_republisher__action__TFSubscription_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tf2_web_republisher__action__TFSubscription_Goal__fini(&msg->goal);
}

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Request__are_equal(const tf2_web_republisher__action__TFSubscription_SendGoal_Request * lhs, const tf2_web_republisher__action__TFSubscription_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!tf2_web_republisher__action__TFSubscription_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Request__copy(
  const tf2_web_republisher__action__TFSubscription_SendGoal_Request * input,
  tf2_web_republisher__action__TFSubscription_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!tf2_web_republisher__action__TFSubscription_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

tf2_web_republisher__action__TFSubscription_SendGoal_Request *
tf2_web_republisher__action__TFSubscription_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_SendGoal_Request * msg = (tf2_web_republisher__action__TFSubscription_SendGoal_Request *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Request));
  bool success = tf2_web_republisher__action__TFSubscription_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__action__TFSubscription_SendGoal_Request__destroy(tf2_web_republisher__action__TFSubscription_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__action__TFSubscription_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence__init(tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_SendGoal_Request * data = NULL;

  if (size) {
    data = (tf2_web_republisher__action__TFSubscription_SendGoal_Request *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__action__TFSubscription_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__action__TFSubscription_SendGoal_Request__fini(&data[i - 1]);
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
tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence__fini(tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence * array)
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
      tf2_web_republisher__action__TFSubscription_SendGoal_Request__fini(&array->data[i]);
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

tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence *
tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence * array = (tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence__destroy(tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence__are_equal(const tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence * lhs, const tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__action__TFSubscription_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence__copy(
  const tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence * input,
  tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Request);
    tf2_web_republisher__action__TFSubscription_SendGoal_Request * data =
      (tf2_web_republisher__action__TFSubscription_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__action__TFSubscription_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__action__TFSubscription_SendGoal_Request__fini(&data[i]);
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
    if (!tf2_web_republisher__action__TFSubscription_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Response__init(tf2_web_republisher__action__TFSubscription_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tf2_web_republisher__action__TFSubscription_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tf2_web_republisher__action__TFSubscription_SendGoal_Response__fini(tf2_web_republisher__action__TFSubscription_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Response__are_equal(const tf2_web_republisher__action__TFSubscription_SendGoal_Response * lhs, const tf2_web_republisher__action__TFSubscription_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Response__copy(
  const tf2_web_republisher__action__TFSubscription_SendGoal_Response * input,
  tf2_web_republisher__action__TFSubscription_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

tf2_web_republisher__action__TFSubscription_SendGoal_Response *
tf2_web_republisher__action__TFSubscription_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_SendGoal_Response * msg = (tf2_web_republisher__action__TFSubscription_SendGoal_Response *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Response));
  bool success = tf2_web_republisher__action__TFSubscription_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__action__TFSubscription_SendGoal_Response__destroy(tf2_web_republisher__action__TFSubscription_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__action__TFSubscription_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence__init(tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_SendGoal_Response * data = NULL;

  if (size) {
    data = (tf2_web_republisher__action__TFSubscription_SendGoal_Response *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__action__TFSubscription_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__action__TFSubscription_SendGoal_Response__fini(&data[i - 1]);
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
tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence__fini(tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence * array)
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
      tf2_web_republisher__action__TFSubscription_SendGoal_Response__fini(&array->data[i]);
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

tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence *
tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence * array = (tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence__destroy(tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence__are_equal(const tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence * lhs, const tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__action__TFSubscription_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence__copy(
  const tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence * input,
  tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Response);
    tf2_web_republisher__action__TFSubscription_SendGoal_Response * data =
      (tf2_web_republisher__action__TFSubscription_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__action__TFSubscription_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__action__TFSubscription_SendGoal_Response__fini(&data[i]);
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
    if (!tf2_web_republisher__action__TFSubscription_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tf2_web_republisher__action__TFSubscription_GetResult_Request__init(tf2_web_republisher__action__TFSubscription_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tf2_web_republisher__action__TFSubscription_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tf2_web_republisher__action__TFSubscription_GetResult_Request__fini(tf2_web_republisher__action__TFSubscription_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
tf2_web_republisher__action__TFSubscription_GetResult_Request__are_equal(const tf2_web_republisher__action__TFSubscription_GetResult_Request * lhs, const tf2_web_republisher__action__TFSubscription_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_GetResult_Request__copy(
  const tf2_web_republisher__action__TFSubscription_GetResult_Request * input,
  tf2_web_republisher__action__TFSubscription_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

tf2_web_republisher__action__TFSubscription_GetResult_Request *
tf2_web_republisher__action__TFSubscription_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_GetResult_Request * msg = (tf2_web_republisher__action__TFSubscription_GetResult_Request *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Request));
  bool success = tf2_web_republisher__action__TFSubscription_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__action__TFSubscription_GetResult_Request__destroy(tf2_web_republisher__action__TFSubscription_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__action__TFSubscription_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence__init(tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_GetResult_Request * data = NULL;

  if (size) {
    data = (tf2_web_republisher__action__TFSubscription_GetResult_Request *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__action__TFSubscription_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__action__TFSubscription_GetResult_Request__fini(&data[i - 1]);
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
tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence__fini(tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence * array)
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
      tf2_web_republisher__action__TFSubscription_GetResult_Request__fini(&array->data[i]);
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

tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence *
tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence * array = (tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence__destroy(tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence__are_equal(const tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence * lhs, const tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__action__TFSubscription_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence__copy(
  const tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence * input,
  tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Request);
    tf2_web_republisher__action__TFSubscription_GetResult_Request * data =
      (tf2_web_republisher__action__TFSubscription_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__action__TFSubscription_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__action__TFSubscription_GetResult_Request__fini(&data[i]);
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
    if (!tf2_web_republisher__action__TFSubscription_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

bool
tf2_web_republisher__action__TFSubscription_GetResult_Response__init(tf2_web_republisher__action__TFSubscription_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tf2_web_republisher__action__TFSubscription_Result__init(&msg->result)) {
    tf2_web_republisher__action__TFSubscription_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tf2_web_republisher__action__TFSubscription_GetResult_Response__fini(tf2_web_republisher__action__TFSubscription_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tf2_web_republisher__action__TFSubscription_Result__fini(&msg->result);
}

bool
tf2_web_republisher__action__TFSubscription_GetResult_Response__are_equal(const tf2_web_republisher__action__TFSubscription_GetResult_Response * lhs, const tf2_web_republisher__action__TFSubscription_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!tf2_web_republisher__action__TFSubscription_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_GetResult_Response__copy(
  const tf2_web_republisher__action__TFSubscription_GetResult_Response * input,
  tf2_web_republisher__action__TFSubscription_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!tf2_web_republisher__action__TFSubscription_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

tf2_web_republisher__action__TFSubscription_GetResult_Response *
tf2_web_republisher__action__TFSubscription_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_GetResult_Response * msg = (tf2_web_republisher__action__TFSubscription_GetResult_Response *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Response));
  bool success = tf2_web_republisher__action__TFSubscription_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__action__TFSubscription_GetResult_Response__destroy(tf2_web_republisher__action__TFSubscription_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__action__TFSubscription_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence__init(tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_GetResult_Response * data = NULL;

  if (size) {
    data = (tf2_web_republisher__action__TFSubscription_GetResult_Response *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__action__TFSubscription_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__action__TFSubscription_GetResult_Response__fini(&data[i - 1]);
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
tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence__fini(tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence * array)
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
      tf2_web_republisher__action__TFSubscription_GetResult_Response__fini(&array->data[i]);
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

tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence *
tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence * array = (tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence__destroy(tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence__are_equal(const tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence * lhs, const tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__action__TFSubscription_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence__copy(
  const tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence * input,
  tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Response);
    tf2_web_republisher__action__TFSubscription_GetResult_Response * data =
      (tf2_web_republisher__action__TFSubscription_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__action__TFSubscription_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__action__TFSubscription_GetResult_Response__fini(&data[i]);
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
    if (!tf2_web_republisher__action__TFSubscription_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

bool
tf2_web_republisher__action__TFSubscription_FeedbackMessage__init(tf2_web_republisher__action__TFSubscription_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tf2_web_republisher__action__TFSubscription_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tf2_web_republisher__action__TFSubscription_Feedback__init(&msg->feedback)) {
    tf2_web_republisher__action__TFSubscription_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tf2_web_republisher__action__TFSubscription_FeedbackMessage__fini(tf2_web_republisher__action__TFSubscription_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tf2_web_republisher__action__TFSubscription_Feedback__fini(&msg->feedback);
}

bool
tf2_web_republisher__action__TFSubscription_FeedbackMessage__are_equal(const tf2_web_republisher__action__TFSubscription_FeedbackMessage * lhs, const tf2_web_republisher__action__TFSubscription_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tf2_web_republisher__action__TFSubscription_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_FeedbackMessage__copy(
  const tf2_web_republisher__action__TFSubscription_FeedbackMessage * input,
  tf2_web_republisher__action__TFSubscription_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tf2_web_republisher__action__TFSubscription_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tf2_web_republisher__action__TFSubscription_FeedbackMessage *
tf2_web_republisher__action__TFSubscription_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_FeedbackMessage * msg = (tf2_web_republisher__action__TFSubscription_FeedbackMessage *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__action__TFSubscription_FeedbackMessage));
  bool success = tf2_web_republisher__action__TFSubscription_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__action__TFSubscription_FeedbackMessage__destroy(tf2_web_republisher__action__TFSubscription_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__action__TFSubscription_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence__init(tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_FeedbackMessage * data = NULL;

  if (size) {
    data = (tf2_web_republisher__action__TFSubscription_FeedbackMessage *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__action__TFSubscription_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__action__TFSubscription_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__action__TFSubscription_FeedbackMessage__fini(&data[i - 1]);
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
tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence__fini(tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence * array)
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
      tf2_web_republisher__action__TFSubscription_FeedbackMessage__fini(&array->data[i]);
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

tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence *
tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence * array = (tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence__destroy(tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence__are_equal(const tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence * lhs, const tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__action__TFSubscription_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence__copy(
  const tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence * input,
  tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__action__TFSubscription_FeedbackMessage);
    tf2_web_republisher__action__TFSubscription_FeedbackMessage * data =
      (tf2_web_republisher__action__TFSubscription_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__action__TFSubscription_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__action__TFSubscription_FeedbackMessage__fini(&data[i]);
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
    if (!tf2_web_republisher__action__TFSubscription_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
