/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_dataview.h"




extern "C" {static void assign_wxVariantVector(void *, Py_ssize_t, void *);}
static void assign_wxVariantVector(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxVariantVector *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxVariantVector *>(sipSrc);
}


extern "C" {static void *array_wxVariantVector(Py_ssize_t);}
static void *array_wxVariantVector(Py_ssize_t sipNrElem)
{
    return new  ::wxVariantVector[sipNrElem];
}


extern "C" {static void *copy_wxVariantVector(const void *, Py_ssize_t);}
static void *copy_wxVariantVector(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxVariantVector(reinterpret_cast<const  ::wxVariantVector *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxVariantVector(void *, int);}
static void release_wxVariantVector(void *sipCppV, int)
{
     ::wxVariantVector *sipCpp = reinterpret_cast< ::wxVariantVector *>(sipCppV);
    Py_BEGIN_ALLOW_THREADS
    delete sipCpp;
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxVariantVector(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxVariantVector(PyObject *sipPy, void **sipCppPtrV, int *sipIsErr, PyObject *sipTransferObj)
{
     ::wxVariantVector **sipCppPtr = reinterpret_cast< ::wxVariantVector **>(sipCppPtrV);
        if (!sipIsErr) {
            // We expect a sequence
            return PySequence_Check(sipPy);
        }

        wxVariantVector* vector = new wxVariantVector;
        Py_ssize_t size = PySequence_Length(sipPy);
        Py_ssize_t idx;
        for (idx=0; idx<size; idx+=1) {
            PyObject* item = PySequence_GetItem(sipPy, idx);
            vector->push_back( wxDVCVariant_in_helper(item) );
            Py_DECREF(item);
        }

        *sipCppPtr = vector;
        return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_wxVariantVector(void *, PyObject *);}
static PyObject *convertFrom_wxVariantVector(void *sipCppV, PyObject *)
{
    ::wxVariantVector *sipCpp = reinterpret_cast< ::wxVariantVector *>(sipCppV);
         // no C++ --> Python convert needed yet...
         return NULL;
}


sipMappedTypeDef sipTypeDef__dataview_wxVariantVector = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_MAPPED,
        sipNameNr_wxVariantVector,
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
    assign_wxVariantVector,
    array_wxVariantVector,
    copy_wxVariantVector,
    release_wxVariantVector,
    convertTo_wxVariantVector,
    convertFrom_wxVariantVector
};
