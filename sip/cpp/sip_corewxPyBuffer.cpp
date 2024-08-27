/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"




extern "C" {static void assign_wxPyBuffer(void *, Py_ssize_t, void *);}
static void assign_wxPyBuffer(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPyBuffer *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPyBuffer *>(sipSrc);
}


extern "C" {static void *array_wxPyBuffer(Py_ssize_t);}
static void *array_wxPyBuffer(Py_ssize_t sipNrElem)
{
    return new  ::wxPyBuffer[sipNrElem];
}


extern "C" {static void *copy_wxPyBuffer(const void *, Py_ssize_t);}
static void *copy_wxPyBuffer(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxPyBuffer(reinterpret_cast<const  ::wxPyBuffer *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxPyBuffer(void *, int);}
static void release_wxPyBuffer(void *sipCppV, int)
{
     ::wxPyBuffer *sipCpp = reinterpret_cast< ::wxPyBuffer *>(sipCppV);
    Py_BEGIN_ALLOW_THREADS
    delete sipCpp;
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxPyBuffer(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxPyBuffer(PyObject *sipPy, void **sipCppPtrV, int *sipIsErr, PyObject *sipTransferObj)
{
     ::wxPyBuffer **sipCppPtr = reinterpret_cast< ::wxPyBuffer **>(sipCppPtrV);
        // Code to test a PyObject for compatibility
        if (!sipIsErr) {
            if (PyObject_CheckBuffer(sipPy)              // New buffer interface
                #if PY_MAJOR_VERSION < 3
                    || PyObject_CheckReadBuffer(sipPy)   // or old buffer interface
                #endif
                )
                return TRUE;
            return FALSE;
        }

        // Code to create a new wxPyBuffer from the PyObject
        wxPyBuffer* buf =  new wxPyBuffer();
        buf->create(sipPy);
        *sipCppPtr = buf;
        return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_wxPyBuffer(void *, PyObject *);}
static PyObject *convertFrom_wxPyBuffer(void *sipCppV, PyObject *)
{
    ::wxPyBuffer *sipCpp = reinterpret_cast< ::wxPyBuffer *>(sipCppV);
        return wxPyMakeBuffer(sipCpp->m_ptr, sipCpp->m_len);
}


sipMappedTypeDef sipTypeDef__core_wxPyBuffer = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_MAPPED,
        sipNameNr_wxPyBuffer,
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
    assign_wxPyBuffer,
    array_wxPyBuffer,
    copy_wxPyBuffer,
    release_wxPyBuffer,
    convertTo_wxPyBuffer,
    convertFrom_wxPyBuffer
};
