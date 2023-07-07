// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
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
#include "tf2_web_republisher/srv/detail/republish_t_fs__struct.h"
#include "tf2_web_republisher/srv/detail/republish_t_fs__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__duration__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__duration__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__srv__republish_t_fs__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("tf2_web_republisher.srv._republish_t_fs.RepublishTFs_Request", full_classname_dest, 60) == 0);
  }
  tf2_web_republisher__srv__RepublishTFs_Request * ros_message = _ros_message;
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
  {  // timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__duration__convert_from_py(field, &ros_message->timeout)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__srv__republish_t_fs__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RepublishTFs_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.srv._republish_t_fs");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RepublishTFs_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tf2_web_republisher__srv__RepublishTFs_Request * ros_message = (tf2_web_republisher__srv__RepublishTFs_Request *)raw_ros_message;
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
  {  // timeout
    PyObject * field = NULL;
    field = builtin_interfaces__msg__duration__convert_to_py(&ros_message->timeout);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeout", field);
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
// #include "tf2_web_republisher/srv/detail/republish_t_fs__struct.h"
// already included above
// #include "tf2_web_republisher/srv/detail/republish_t_fs__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tf2_web_republisher__srv__republish_t_fs__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("tf2_web_republisher.srv._republish_t_fs.RepublishTFs_Response", full_classname_dest, 61) == 0);
  }
  tf2_web_republisher__srv__RepublishTFs_Response * ros_message = _ros_message;
  {  // topic_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "topic_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->topic_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tf2_web_republisher__srv__republish_t_fs__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RepublishTFs_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tf2_web_republisher.srv._republish_t_fs");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RepublishTFs_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tf2_web_republisher__srv__RepublishTFs_Response * ros_message = (tf2_web_republisher__srv__RepublishTFs_Response *)raw_ros_message;
  {  // topic_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->topic_name.data,
      strlen(ros_message->topic_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "topic_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
