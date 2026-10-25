// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wile_e_interfaces:msg/RoboclawStateBroadcast.idl
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
#include "wile_e_interfaces/msg/detail/roboclaw_state_broadcast__struct.h"
#include "wile_e_interfaces/msg/detail/roboclaw_state_broadcast__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wile_e_interfaces__msg__roboclaw_state_broadcast__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("wile_e_interfaces.msg._roboclaw_state_broadcast.RoboclawStateBroadcast", full_classname_dest, 70) == 0);
  }
  wile_e_interfaces__msg__RoboclawStateBroadcast * ros_message = _ros_message;
  {  // right_shoulder
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_shoulder");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_shoulder = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_shoulder
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_shoulder");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_shoulder = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_elbow
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_elbow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_elbow = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_elbow
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_elbow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_elbow = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_shoulder_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_shoulder_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_shoulder_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_shoulder_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_shoulder_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_shoulder_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_elbow_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_elbow_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_elbow_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_elbow_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_elbow_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_elbow_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_wheel_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_wheel_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_wheel_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_wheel_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_wheel_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_wheel_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wile_e_interfaces__msg__roboclaw_state_broadcast__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RoboclawStateBroadcast */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wile_e_interfaces.msg._roboclaw_state_broadcast");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RoboclawStateBroadcast");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wile_e_interfaces__msg__RoboclawStateBroadcast * ros_message = (wile_e_interfaces__msg__RoboclawStateBroadcast *)raw_ros_message;
  {  // right_shoulder
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_shoulder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_shoulder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_shoulder
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_shoulder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_shoulder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_elbow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_elbow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_elbow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_elbow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_elbow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_elbow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_shoulder_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_shoulder_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_shoulder_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_shoulder_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_shoulder_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_shoulder_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_elbow_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_elbow_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_elbow_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_elbow_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_elbow_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_elbow_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_wheel_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_wheel_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_wheel_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_wheel_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_wheel_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_wheel_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
