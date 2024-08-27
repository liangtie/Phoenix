/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"




extern "C" {static void assign_wxArrayDouble(void *, Py_ssize_t, void *);}
static void assign_wxArrayDouble(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxArrayDouble *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxArrayDouble *>(sipSrc);
}


extern "C" {static void *array_wxArrayDouble(Py_ssize_t);}
static void *array_wxArrayDouble(Py_ssize_t sipNrElem)
{
    return new  ::wxArrayDouble[sipNrElem];
}


extern "C" {static void *copy_wxArrayDouble(const void *, Py_ssize_t);}
static void *copy_wxArrayDouble(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxArrayDouble(reinterpret_cast<const  ::wxArrayDouble *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxArrayDouble(void *, int);}
static void release_wxArrayDouble(void *sipCppV, int)
{
     ::wxArrayDouble *sipCpp = reinterpret_cast< ::wxArrayDouble *>(sipCppV);
    Py_BEGIN_ALLOW_THREADS
    delete sipCpp;
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxArrayDouble(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxArrayDouble(PyObject *sipPy, void **sipCppPtrV, int *sipIsErr, PyObject *sipTransferObj)
{
     ::wxArrayDouble **sipCppPtr = reinterpret_cast< ::wxArrayDouble **>(sipCppPtrV);
        // Code to test a PyObject for compatibility
        if (!sipIsErr) {
            return (PySequence_Check(sipPy) &&
                    !(PyBytes_Check(sipPy) || PyUnicode_Check(sipPy)));
        }

        // Code to create a new wxArrayDouble and convert a compatible PyObject
        wxArrayDouble *array = new wxArrayDouble;
        Py_ssize_t i, len = PySequence_Length(sipPy);
        for (i=0; i<len; i++) {
            PyObject* item = PySequence_GetItem(sipPy, i);

            // Ensure each item is a number object
            if ( !PyNumber_Check(item) ) {
                // raise a TypeError if not
                PyErr_Format(PyExc_TypeError,
                             "Item at index %zd has type '%s' but a sequence of numbers is expected",
                             i, sipPyTypeName(Py_TYPE(item)));
                delete array;
                Py_DECREF(item);
                *sipIsErr = 1;
                return 0;
            }

            // Convert to a Float
            PyObject* number = PyNumber_Float(item);
            if (PyErr_Occurred()) {
                *sipIsErr = 1;
                delete array;
                Py_DECREF(item);
                return 0;
            }
            // And add it to the array
            array->Add(PyFloat_AS_DOUBLE(number));
            Py_DECREF(item);
            Py_DECREF(number);
        }
        *sipCppPtr = array;
        return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_wxArrayDouble(void *, PyObject *);}
static PyObject *convertFrom_wxArrayDouble(void *sipCppV, PyObject *)
{
    ::wxArrayDouble *sipCpp = reinterpret_cast< ::wxArrayDouble *>(sipCppV);
        // Code to convert a wxArrayDouble to a Python list of floating point values.
        PyObject* list = PyList_New(0);
        for (size_t i=0; i < sipCpp->GetCount(); i++) {
            PyObject* number = PyFloat_FromDouble(sipCpp->Item(i));
            PyList_Append(list, number);
            Py_DECREF(number);
        }
        return list;
}


sipMappedTypeDef sipTypeDef__core_wxArrayDouble = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_MAPPED,
        sipNameNr_wxArrayDouble,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_wxArrayDouble,
    array_wxArrayDouble,
    copy_wxArrayDouble,
    release_wxArrayDouble,
    convertTo_wxArrayDouble,
    convertFrom_wxArrayDouble
};
