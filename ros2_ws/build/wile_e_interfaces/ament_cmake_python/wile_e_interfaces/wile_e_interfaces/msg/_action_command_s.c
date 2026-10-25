// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wile_e_interfaces:msg/ActionCommand.idl
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
#include "wile_e_interfaces/msg/detail/action_command__struct.h"
#include "wile_e_interfaces/msg/detail/action_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wile_e_interfaces__msg__action_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("wile_e_interfaces.msg._action_command.ActionCommand", full_classname_dest, 51) == 0);
  }
  wile_e_interfaces__msg__ActionCommand * ros_message = _ros_message;
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
  {  // right_wheel
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_wheel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_wheel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_wheel
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_wheel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_wheel = (float)PyFloat_AS_DOUBLE(field);
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
  {  // head_raise
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_raise");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->head_raise = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // head_turn
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_turn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->head_turn = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // eyes
    PyObject * field = PyObject_GetAttrString(_pymsg, "eyes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eyes = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fan
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // headlight
    PyObject * field = PyObject_GetAttrString(_pymsg, "headlight");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->headlight = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wile_e_interfaces__msg__action_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ActionCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wile_e_interfaces.msg._action_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ActionCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wile_e_interfaces__msg__ActionCommand * ros_message = (wile_e_interfaces__msg__ActionCommand *)raw_ros_message;
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
  {  // right_wheel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_wheel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_wheel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_wheel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_wheel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_wheel", field);
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
  {  // head_raise
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->head_raise);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_raise", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_turn
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->head_turn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_turn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eyes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eyes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eyes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // headlight
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->headlight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "headlight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
