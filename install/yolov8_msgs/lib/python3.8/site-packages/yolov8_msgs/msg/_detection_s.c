// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from yolov8_msgs:msg/Detection.idl
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
#include "yolov8_msgs/msg/detail/detection__struct.h"
#include "yolov8_msgs/msg/detail/detection__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool yolov8_msgs__msg__bounding_box2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yolov8_msgs__msg__bounding_box2_d__convert_to_py(void * raw_ros_message);
bool yolov8_msgs__msg__bounding_box3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yolov8_msgs__msg__bounding_box3_d__convert_to_py(void * raw_ros_message);
bool yolov8_msgs__msg__mask__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yolov8_msgs__msg__mask__convert_to_py(void * raw_ros_message);
bool yolov8_msgs__msg__key_point2_d_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yolov8_msgs__msg__key_point2_d_array__convert_to_py(void * raw_ros_message);
bool yolov8_msgs__msg__key_point3_d_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yolov8_msgs__msg__key_point3_d_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool yolov8_msgs__msg__detection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("yolov8_msgs.msg._detection.Detection", full_classname_dest, 36) == 0);
  }
  yolov8_msgs__msg__Detection * ros_message = _ros_message;
  {  // class_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->class_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // class_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->class_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // score
    PyObject * field = PyObject_GetAttrString(_pymsg, "score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->score = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox");
    if (!field) {
      return false;
    }
    if (!yolov8_msgs__msg__bounding_box2_d__convert_from_py(field, &ros_message->bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bbox3d
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox3d");
    if (!field) {
      return false;
    }
    if (!yolov8_msgs__msg__bounding_box3_d__convert_from_py(field, &ros_message->bbox3d)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "mask");
    if (!field) {
      return false;
    }
    if (!yolov8_msgs__msg__mask__convert_from_py(field, &ros_message->mask)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // keypoints
    PyObject * field = PyObject_GetAttrString(_pymsg, "keypoints");
    if (!field) {
      return false;
    }
    if (!yolov8_msgs__msg__key_point2_d_array__convert_from_py(field, &ros_message->keypoints)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // keypoints3d
    PyObject * field = PyObject_GetAttrString(_pymsg, "keypoints3d");
    if (!field) {
      return false;
    }
    if (!yolov8_msgs__msg__key_point3_d_array__convert_from_py(field, &ros_message->keypoints3d)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * yolov8_msgs__msg__detection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Detection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("yolov8_msgs.msg._detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Detection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  yolov8_msgs__msg__Detection * ros_message = (yolov8_msgs__msg__Detection *)raw_ros_message;
  {  // class_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->class_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // class_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->class_name.data,
      strlen(ros_message->class_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox
    PyObject * field = NULL;
    field = yolov8_msgs__msg__bounding_box2_d__convert_to_py(&ros_message->bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox3d
    PyObject * field = NULL;
    field = yolov8_msgs__msg__bounding_box3_d__convert_to_py(&ros_message->bbox3d);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox3d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mask
    PyObject * field = NULL;
    field = yolov8_msgs__msg__mask__convert_to_py(&ros_message->mask);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keypoints
    PyObject * field = NULL;
    field = yolov8_msgs__msg__key_point2_d_array__convert_to_py(&ros_message->keypoints);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "keypoints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keypoints3d
    PyObject * field = NULL;
    field = yolov8_msgs__msg__key_point3_d_array__convert_to_py(&ros_message->keypoints3d);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "keypoints3d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
