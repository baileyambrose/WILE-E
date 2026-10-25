// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wile_e_interfaces:msg/TeensyData.idl
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
#include "wile_e_interfaces/msg/detail/teensy_data__struct.h"
#include "wile_e_interfaces/msg/detail/teensy_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wile_e_interfaces__msg__teensy_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("wile_e_interfaces.msg._teensy_data.TeensyData", full_classname_dest, 45) == 0);
  }
  wile_e_interfaces__msg__TeensyData * ros_message = _ros_message;
  {  // left_shoulder
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_shoulder");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_shoulder = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_shoulder
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_shoulder");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_shoulder = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_elbow
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_elbow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_elbow = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_elbow
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_elbow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_elbow = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tail
    PyObject * field = PyObject_GetAttrString(_pymsg, "tail");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tail = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tail_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "tail_vel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tail_vel = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wile_e_interfaces__msg__teensy_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TeensyData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wile_e_interfaces.msg._teensy_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TeensyData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wile_e_interfaces__msg__TeensyData * ros_message = (wile_e_interfaces__msg__TeensyData *)raw_ros_message;
  {  // left_shoulder
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_shoulder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_shoulder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_shoulder
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_shoulder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_shoulder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_elbow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_elbow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_elbow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_elbow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_elbow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_elbow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tail
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tail);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tail", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tail_vel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tail_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tail_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
