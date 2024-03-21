// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
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
#include "mage_msgs/msg/detail/advanced_logical_camera_image__struct.h"
#include "mage_msgs/msg/detail/advanced_logical_camera_image__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mage_msgs/msg/detail/part_pose__functions.h"
// end nested array functions include
bool mage_msgs__msg__part_pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mage_msgs__msg__part_pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mage_msgs__msg__advanced_logical_camera_image__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("mage_msgs.msg._advanced_logical_camera_image.AdvancedLogicalCameraImage", full_classname_dest, 71) == 0);
  }
  mage_msgs__msg__AdvancedLogicalCameraImage * ros_message = _ros_message;
  {  // part_poses
    PyObject * field = PyObject_GetAttrString(_pymsg, "part_poses");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'part_poses'");
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
    if (!mage_msgs__msg__PartPose__Sequence__init(&(ros_message->part_poses), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mage_msgs__msg__PartPose__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mage_msgs__msg__PartPose * dest = ros_message->part_poses.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mage_msgs__msg__part_pose__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // sensor_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->sensor_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mage_msgs__msg__advanced_logical_camera_image__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AdvancedLogicalCameraImage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mage_msgs.msg._advanced_logical_camera_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AdvancedLogicalCameraImage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mage_msgs__msg__AdvancedLogicalCameraImage * ros_message = (mage_msgs__msg__AdvancedLogicalCameraImage *)raw_ros_message;
  {  // part_poses
    PyObject * field = NULL;
    size_t size = ros_message->part_poses.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mage_msgs__msg__PartPose * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->part_poses.data[i]);
      PyObject * pyitem = mage_msgs__msg__part_pose__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "part_poses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->sensor_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
