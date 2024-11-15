// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mavros_msgs:msg/ManualControl.idl
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
#include "mavros_msgs/msg/detail/manual_control__struct.h"
#include "mavros_msgs/msg/detail/manual_control__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mavros_msgs__msg__manual_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("mavros_msgs.msg._manual_control.ManualControl", full_classname_dest, 45) == 0);
  }
  mavros_msgs__msg__ManualControl * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r
    PyObject * field = PyObject_GetAttrString(_pymsg, "r");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // buttons
    PyObject * field = PyObject_GetAttrString(_pymsg, "buttons");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buttons = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // buttons2
    PyObject * field = PyObject_GetAttrString(_pymsg, "buttons2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buttons2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enabled_extensions
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled_extensions");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enabled_extensions = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // s
    PyObject * field = PyObject_GetAttrString(_pymsg, "s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t
    PyObject * field = PyObject_GetAttrString(_pymsg, "t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux1
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux3
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux4
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux5
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux6
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mavros_msgs__msg__manual_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ManualControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mavros_msgs.msg._manual_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ManualControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mavros_msgs__msg__ManualControl * ros_message = (mavros_msgs__msg__ManualControl *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buttons
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buttons);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buttons", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buttons2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buttons2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buttons2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled_extensions
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enabled_extensions);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled_extensions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
