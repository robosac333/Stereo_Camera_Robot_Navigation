// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mage_msgs:msg/Sensors.idl
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
#include "mage_msgs/msg/detail/sensors__struct.h"
#include "mage_msgs/msg/detail/sensors__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mage_msgs__msg__sensors__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("mage_msgs.msg._sensors.Sensors", full_classname_dest, 30) == 0);
  }
  mage_msgs__msg__Sensors * ros_message = _ros_message;
  {  // break_beam
    PyObject * field = PyObject_GetAttrString(_pymsg, "break_beam");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->break_beam = (Py_True == field);
    Py_DECREF(field);
  }
  {  // proximity
    PyObject * field = PyObject_GetAttrString(_pymsg, "proximity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->proximity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // laser_profiler
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_profiler");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->laser_profiler = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lidar
    PyObject * field = PyObject_GetAttrString(_pymsg, "lidar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lidar = (Py_True == field);
    Py_DECREF(field);
  }
  {  // camera
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->camera = (Py_True == field);
    Py_DECREF(field);
  }
  {  // logical_camera
    PyObject * field = PyObject_GetAttrString(_pymsg, "logical_camera");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->logical_camera = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mage_msgs__msg__sensors__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Sensors */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mage_msgs.msg._sensors");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Sensors");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mage_msgs__msg__Sensors * ros_message = (mage_msgs__msg__Sensors *)raw_ros_message;
  {  // break_beam
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->break_beam ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "break_beam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // proximity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->proximity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "proximity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laser_profiler
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->laser_profiler ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_profiler", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lidar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lidar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lidar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->camera ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // logical_camera
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->logical_camera ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "logical_camera", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
