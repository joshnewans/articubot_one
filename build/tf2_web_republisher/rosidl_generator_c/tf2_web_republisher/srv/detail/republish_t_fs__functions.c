// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
// generated code does not contain a copyright notice
#include "tf2_web_republisher/srv/detail/republish_t_fs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `source_frames`
// Member `target_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
tf2_web_republisher__srv__RepublishTFs_Request__init(tf2_web_republisher__srv__RepublishTFs_Request * msg)
{
  if (!msg) {
    return false;
  }
  // source_frames
  if (!rosidl_runtime_c__String__Sequence__init(&msg->source_frames, 0)) {
    tf2_web_republisher__srv__RepublishTFs_Request__fini(msg);
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__init(&msg->target_frame)) {
    tf2_web_republisher__srv__RepublishTFs_Request__fini(msg);
    return false;
  }
  // angular_thres
  // trans_thres
  // rate
  // timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->timeout)) {
    tf2_web_republisher__srv__RepublishTFs_Request__fini(msg);
    return false;
  }
  return true;
}

void
tf2_web_republisher__srv__RepublishTFs_Request__fini(tf2_web_republisher__srv__RepublishTFs_Request * msg)
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
  // timeout
  builtin_interfaces__msg__Duration__fini(&msg->timeout);
}

bool
tf2_web_republisher__srv__RepublishTFs_Request__are_equal(const tf2_web_republisher__srv__RepublishTFs_Request * lhs, const tf2_web_republisher__srv__RepublishTFs_Request * rhs)
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
  // timeout
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->timeout), &(rhs->timeout)))
  {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__srv__RepublishTFs_Request__copy(
  const tf2_web_republisher__srv__RepublishTFs_Request * input,
  tf2_web_republisher__srv__RepublishTFs_Request * output)
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
  // timeout
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->timeout), &(output->timeout)))
  {
    return false;
  }
  return true;
}

tf2_web_republisher__srv__RepublishTFs_Request *
tf2_web_republisher__srv__RepublishTFs_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__srv__RepublishTFs_Request * msg = (tf2_web_republisher__srv__RepublishTFs_Request *)allocator.allocate(sizeof(tf2_web_republisher__srv__RepublishTFs_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__srv__RepublishTFs_Request));
  bool success = tf2_web_republisher__srv__RepublishTFs_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__srv__RepublishTFs_Request__destroy(tf2_web_republisher__srv__RepublishTFs_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__srv__RepublishTFs_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__srv__RepublishTFs_Request__Sequence__init(tf2_web_republisher__srv__RepublishTFs_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__srv__RepublishTFs_Request * data = NULL;

  if (size) {
    data = (tf2_web_republisher__srv__RepublishTFs_Request *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__srv__RepublishTFs_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__srv__RepublishTFs_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__srv__RepublishTFs_Request__fini(&data[i - 1]);
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
tf2_web_republisher__srv__RepublishTFs_Request__Sequence__fini(tf2_web_republisher__srv__RepublishTFs_Request__Sequence * array)
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
      tf2_web_republisher__srv__RepublishTFs_Request__fini(&array->data[i]);
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

tf2_web_republisher__srv__RepublishTFs_Request__Sequence *
tf2_web_republisher__srv__RepublishTFs_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__srv__RepublishTFs_Request__Sequence * array = (tf2_web_republisher__srv__RepublishTFs_Request__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__srv__RepublishTFs_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__srv__RepublishTFs_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__srv__RepublishTFs_Request__Sequence__destroy(tf2_web_republisher__srv__RepublishTFs_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__srv__RepublishTFs_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__srv__RepublishTFs_Request__Sequence__are_equal(const tf2_web_republisher__srv__RepublishTFs_Request__Sequence * lhs, const tf2_web_republisher__srv__RepublishTFs_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__srv__RepublishTFs_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__srv__RepublishTFs_Request__Sequence__copy(
  const tf2_web_republisher__srv__RepublishTFs_Request__Sequence * input,
  tf2_web_republisher__srv__RepublishTFs_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__srv__RepublishTFs_Request);
    tf2_web_republisher__srv__RepublishTFs_Request * data =
      (tf2_web_republisher__srv__RepublishTFs_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__srv__RepublishTFs_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__srv__RepublishTFs_Request__fini(&data[i]);
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
    if (!tf2_web_republisher__srv__RepublishTFs_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `topic_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
tf2_web_republisher__srv__RepublishTFs_Response__init(tf2_web_republisher__srv__RepublishTFs_Response * msg)
{
  if (!msg) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__init(&msg->topic_name)) {
    tf2_web_republisher__srv__RepublishTFs_Response__fini(msg);
    return false;
  }
  return true;
}

void
tf2_web_republisher__srv__RepublishTFs_Response__fini(tf2_web_republisher__srv__RepublishTFs_Response * msg)
{
  if (!msg) {
    return;
  }
  // topic_name
  rosidl_runtime_c__String__fini(&msg->topic_name);
}

bool
tf2_web_republisher__srv__RepublishTFs_Response__are_equal(const tf2_web_republisher__srv__RepublishTFs_Response * lhs, const tf2_web_republisher__srv__RepublishTFs_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_name), &(rhs->topic_name)))
  {
    return false;
  }
  return true;
}

bool
tf2_web_republisher__srv__RepublishTFs_Response__copy(
  const tf2_web_republisher__srv__RepublishTFs_Response * input,
  tf2_web_republisher__srv__RepublishTFs_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_name), &(output->topic_name)))
  {
    return false;
  }
  return true;
}

tf2_web_republisher__srv__RepublishTFs_Response *
tf2_web_republisher__srv__RepublishTFs_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__srv__RepublishTFs_Response * msg = (tf2_web_republisher__srv__RepublishTFs_Response *)allocator.allocate(sizeof(tf2_web_republisher__srv__RepublishTFs_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_web_republisher__srv__RepublishTFs_Response));
  bool success = tf2_web_republisher__srv__RepublishTFs_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_web_republisher__srv__RepublishTFs_Response__destroy(tf2_web_republisher__srv__RepublishTFs_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_web_republisher__srv__RepublishTFs_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_web_republisher__srv__RepublishTFs_Response__Sequence__init(tf2_web_republisher__srv__RepublishTFs_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__srv__RepublishTFs_Response * data = NULL;

  if (size) {
    data = (tf2_web_republisher__srv__RepublishTFs_Response *)allocator.zero_allocate(size, sizeof(tf2_web_republisher__srv__RepublishTFs_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_web_republisher__srv__RepublishTFs_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_web_republisher__srv__RepublishTFs_Response__fini(&data[i - 1]);
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
tf2_web_republisher__srv__RepublishTFs_Response__Sequence__fini(tf2_web_republisher__srv__RepublishTFs_Response__Sequence * array)
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
      tf2_web_republisher__srv__RepublishTFs_Response__fini(&array->data[i]);
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

tf2_web_republisher__srv__RepublishTFs_Response__Sequence *
tf2_web_republisher__srv__RepublishTFs_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_web_republisher__srv__RepublishTFs_Response__Sequence * array = (tf2_web_republisher__srv__RepublishTFs_Response__Sequence *)allocator.allocate(sizeof(tf2_web_republisher__srv__RepublishTFs_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_web_republisher__srv__RepublishTFs_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_web_republisher__srv__RepublishTFs_Response__Sequence__destroy(tf2_web_republisher__srv__RepublishTFs_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_web_republisher__srv__RepublishTFs_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_web_republisher__srv__RepublishTFs_Response__Sequence__are_equal(const tf2_web_republisher__srv__RepublishTFs_Response__Sequence * lhs, const tf2_web_republisher__srv__RepublishTFs_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_web_republisher__srv__RepublishTFs_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_web_republisher__srv__RepublishTFs_Response__Sequence__copy(
  const tf2_web_republisher__srv__RepublishTFs_Response__Sequence * input,
  tf2_web_republisher__srv__RepublishTFs_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_web_republisher__srv__RepublishTFs_Response);
    tf2_web_republisher__srv__RepublishTFs_Response * data =
      (tf2_web_republisher__srv__RepublishTFs_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_web_republisher__srv__RepublishTFs_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tf2_web_republisher__srv__RepublishTFs_Response__fini(&data[i]);
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
    if (!tf2_web_republisher__srv__RepublishTFs_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
