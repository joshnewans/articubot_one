// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tf2_web_republisher:action/TFSubscription.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
#include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__action__tf_subscription__goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tf2_web_republisher.action._tf_subscription.TFSubscription_Goal", full_classname_dest, 63) == 0);
  }
  tf2_web_republisher__action__TFSubscription_Goal * ros_message = _ros_message;
  {  // source_frames
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_frames");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'source_frames'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->source_frames), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->source_frames.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // target_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_frame");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->target_frame, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // angular_thres
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_thres");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_thres = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trans_thres
    PyObject * field = PyObject_GetAttrString(_pymsg, "trans_thres");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trans_thres = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__action__tf_subscription__goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TFSubscription_Goal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.action._tf_subscription");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TFSubscription_Goal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tf2_web_republisher__action__TFSubscription_Goal * ros_message = (tf2_web_republisher__action__TFSubscription_Goal *)raw_ros_message;
  {  // source_frames
    PyObject * field = NULL;
    size_t size = ros_message->source_frames.size;
    rosidl_runtime_c__String * src = ros_message->source_frames.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_frames", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_frame
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->target_frame.data,
      strlen(ros_message->target_frame.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_thres
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_thres);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_thres", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trans_thres
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trans_thres);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trans_thres", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__action__tf_subscription__result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tf2_web_republisher.action._tf_subscription.TFSubscription_Result", full_classname_dest, 65) == 0);
  }
  tf2_web_republisher__action__TFSubscription_Result * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__action__tf_subscription__result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TFSubscription_Result */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.action._tf_subscription");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TFSubscription_Result");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__transform_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__transform_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__action__tf_subscription__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tf2_web_republisher.action._tf_subscription.TFSubscription_Feedback", full_classname_dest, 67) == 0);
  }
  tf2_web_republisher__action__TFSubscription_Feedback * ros_message = _ros_message;
  {  // transforms
    PyObject * field = PyObject_GetAttrString(_pymsg, "transforms");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'transforms'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__TransformStamped__Sequence__init(&(ros_message->transforms), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__TransformStamped__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__TransformStamped * dest = ros_message->transforms.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__transform_stamped__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__action__tf_subscription__feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TFSubscription_Feedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.action._tf_subscription");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TFSubscription_Feedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tf2_web_republisher__action__TFSubscription_Feedback * ros_message = (tf2_web_republisher__action__TFSubscription_Feedback *)raw_ros_message;
  {  // transforms
    PyObject * field = NULL;
    size_t size = ros_message->transforms.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__TransformStamped * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->transforms.data[i]);
      PyObject * pyitem = geometry_msgs__msg__transform_stamped__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "transforms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool tf2_web_republisher__action__tf_subscription__goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tf2_web_republisher__action__tf_subscription__goal__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__action__tf_subscription__send_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tf2_web_republisher.action._tf_subscription.TFSubscription_SendGoal_Request", full_classname_dest, 75) == 0);
  }
  tf2_web_republisher__action__TFSubscription_SendGoal_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal");
    if (!field) {
      return false;
    }
    if (!tf2_web_republisher__action__tf_subscription__goal__convert_from_py(field, &ros_message->goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__action__tf_subscription__send_goal__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TFSubscription_SendGoal_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.action._tf_subscription");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TFSubscription_SendGoal_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tf2_web_republisher__action__TFSubscription_SendGoal_Request * ros_message = (tf2_web_republisher__action__TFSubscription_SendGoal_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal
    PyObject * field = NULL;
    field = tf2_web_republisher__action__tf_subscription__goal__convert_to_py(&ros_message->goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__action__tf_subscription__send_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tf2_web_republisher.action._tf_subscription.TFSubscription_SendGoal_Response", full_classname_dest, 76) == 0);
  }
  tf2_web_republisher__action__TFSubscription_SendGoal_Response * ros_message = _ros_message;
  {  // accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__action__tf_subscription__send_goal__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TFSubscription_SendGoal_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.action._tf_subscription");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TFSubscription_SendGoal_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tf2_web_republisher__action__TFSubscription_SendGoal_Response * ros_message = (tf2_web_republisher__action__TFSubscription_SendGoal_Response *)raw_ros_message;
  {  // accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__action__tf_subscription__get_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tf2_web_republisher.action._tf_subscription.TFSubscription_GetResult_Request", full_classname_dest, 76) == 0);
  }
  tf2_web_republisher__action__TFSubscription_GetResult_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__action__tf_subscription__get_result__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TFSubscription_GetResult_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.action._tf_subscription");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TFSubscription_GetResult_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tf2_web_republisher__action__TFSubscription_GetResult_Request * ros_message = (tf2_web_republisher__action__TFSubscription_GetResult_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

bool tf2_web_republisher__action__tf_subscription__result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tf2_web_republisher__action__tf_subscription__result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__action__tf_subscription__get_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[78];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tf2_web_republisher.action._tf_subscription.TFSubscription_GetResult_Response", full_classname_dest, 77) == 0);
  }
  tf2_web_republisher__action__TFSubscription_GetResult_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!tf2_web_republisher__action__tf_subscription__result__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__action__tf_subscription__get_result__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TFSubscription_GetResult_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.action._tf_subscription");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TFSubscription_GetResult_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tf2_web_republisher__action__TFSubscription_GetResult_Response * ros_message = (tf2_web_republisher__action__TFSubscription_GetResult_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = tf2_web_republisher__action__tf_subscription__result__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool tf2_web_republisher__action__tf_subscription__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tf2_web_republisher__action__tf_subscription__feedback__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__action__tf_subscription__feedback_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tf2_web_republisher.action._tf_subscription.TFSubscription_FeedbackMessage", full_classname_dest, 74) == 0);
  }
  tf2_web_republisher__action__TFSubscription_FeedbackMessage * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    if (!tf2_web_republisher__action__tf_subscription__feedback__convert_from_py(field, &ros_message->feedback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__action__tf_subscription__feedback_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TFSubscription_FeedbackMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.action._tf_subscription");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TFSubscription_FeedbackMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tf2_web_republisher__action__TFSubscription_FeedbackMessage * ros_message = (tf2_web_republisher__action__TFSubscription_FeedbackMessage *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback
    PyObject * field = NULL;
    field = tf2_web_republisher__action__tf_subscription__feedback__convert_to_py(&ros_message->feedback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
