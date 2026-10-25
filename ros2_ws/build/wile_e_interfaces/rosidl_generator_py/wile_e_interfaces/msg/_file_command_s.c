// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wile_e_interfaces:msg/FileCommand.idl
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
#include "wile_e_interfaces/msg/detail/file_command__struct.h"
#include "wile_e_interfaces/msg/detail/file_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wile_e_interfaces__msg__file_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("wile_e_interfaces.msg._file_command.FileCommand", full_classname_dest, 47) == 0);
  }
  wile_e_interfaces__msg__FileCommand * ros_message = _ros_message;
  {  // right_bicep
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_bicep");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_bicep = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_bicep
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_bicep");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_bicep = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_forearm
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_forearm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_forearm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_forearm
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_forearm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_forearm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_wheel
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_wheel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_wheel = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_wheel
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_wheel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_wheel = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tail
    PyObject * field = PyObject_GetAttrString(_pymsg, "tail");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tail = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // head_raise
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_raise");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->head_raise = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // head_turn
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_turn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->head_turn = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // face_detection
    PyObject * field = PyObject_GetAttrString(_pymsg, "face_detection");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->face_detection = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wile_e_interfaces__msg__file_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FileCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wile_e_interfaces.msg._file_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FileCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wile_e_interfaces__msg__FileCommand * ros_message = (wile_e_interfaces__msg__FileCommand *)raw_ros_message;
  {  // right_bicep
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_bicep);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_bicep", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_bicep
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_bicep);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_bicep", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_forearm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_forearm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_forearm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_forearm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_forearm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_forearm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_wheel
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_wheel);
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
    field = PyLong_FromUnsignedLong(ros_message->left_wheel);
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
    field = PyLong_FromUnsignedLong(ros_message->tail);
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
    field = PyLong_FromUnsignedLong(ros_message->head_raise);
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
    field = PyLong_FromUnsignedLong(ros_message->head_turn);
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
  {  // face_detection
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->face_detection);
    {
      int rc = PyObject_SetAttrString(_pymessage, "face_detection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
