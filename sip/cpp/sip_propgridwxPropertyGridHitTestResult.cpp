/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"
        #include <wx/propgrid/propgridpagestate.h>
        #include <wx/propgrid/property.h>


PyDoc_STRVAR(doc_wxPropertyGridHitTestResult_GetColumn, "GetColumn() -> int\n"
"\n"
"Returns column hit.");

extern "C" {static PyObject *meth_wxPropertyGridHitTestResult_GetColumn(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridHitTestResult_GetColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridHitTestResult, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetColumn();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridHitTestResult, sipName_GetColumn, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridHitTestResult_GetProperty, "GetProperty() -> PGProperty\n"
"\n"
"Returns property hit.");

extern "C" {static PyObject *meth_wxPropertyGridHitTestResult_GetProperty(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridHitTestResult_GetProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridHitTestResult, &sipCpp))
        {
             ::wxPGProperty*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetProperty();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPGProperty,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridHitTestResult, sipName_GetProperty, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridHitTestResult_GetSplitter, "GetSplitter() -> int\n"
"\n"
"Returns index of splitter hit, -1 for none.");

extern "C" {static PyObject *meth_wxPropertyGridHitTestResult_GetSplitter(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridHitTestResult_GetSplitter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridHitTestResult, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetSplitter();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridHitTestResult, sipName_GetSplitter, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridHitTestResult_GetSplitterHitOffset, "GetSplitterHitOffset() -> int\n"
"\n"
"If splitter hit, then this member function returns offset to the exact\n"
"splitter position.");

extern "C" {static PyObject *meth_wxPropertyGridHitTestResult_GetSplitterHitOffset(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridHitTestResult_GetSplitterHitOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridHitTestResult, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetSplitterHitOffset();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridHitTestResult, sipName_GetSplitterHitOffset, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPropertyGridHitTestResult(void *, int);}
static void release_wxPropertyGridHitTestResult(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxPropertyGridHitTestResult *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxPropertyGridHitTestResult(Py_ssize_t);}
static void *array_wxPropertyGridHitTestResult(Py_ssize_t sipNrElem)
{
    return new  ::wxPropertyGridHitTestResult[sipNrElem];
}


extern "C" {static void assign_wxPropertyGridHitTestResult(void *, Py_ssize_t, void *);}
static void assign_wxPropertyGridHitTestResult(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPropertyGridHitTestResult *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPropertyGridHitTestResult *>(sipSrc);
}


extern "C" {static void *copy_wxPropertyGridHitTestResult(const void *, Py_ssize_t);}
static void *copy_wxPropertyGridHitTestResult(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxPropertyGridHitTestResult(reinterpret_cast<const  ::wxPropertyGridHitTestResult *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPropertyGridHitTestResult(sipSimpleWrapper *);}
static void dealloc_wxPropertyGridHitTestResult(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPropertyGridHitTestResult(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxPropertyGridHitTestResult(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPropertyGridHitTestResult(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxPropertyGridHitTestResult *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPropertyGridHitTestResult();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxPropertyGridHitTestResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxPropertyGridHitTestResult, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPropertyGridHitTestResult(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxPropertyGridHitTestResult[] = {
    {sipName_GetColumn, meth_wxPropertyGridHitTestResult_GetColumn, METH_VARARGS, doc_wxPropertyGridHitTestResult_GetColumn},
    {sipName_GetProperty, meth_wxPropertyGridHitTestResult_GetProperty, METH_VARARGS, doc_wxPropertyGridHitTestResult_GetProperty},
    {sipName_GetSplitter, meth_wxPropertyGridHitTestResult_GetSplitter, METH_VARARGS, doc_wxPropertyGridHitTestResult_GetSplitter},
    {sipName_GetSplitterHitOffset, meth_wxPropertyGridHitTestResult_GetSplitterHitOffset, METH_VARARGS, doc_wxPropertyGridHitTestResult_GetSplitterHitOffset}
};

sipVariableDef variables_wxPropertyGridHitTestResult[] = {
    {PropertyVariable, sipName_SplitterHitOffset, &methods_wxPropertyGridHitTestResult[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Splitter, &methods_wxPropertyGridHitTestResult[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Property, &methods_wxPropertyGridHitTestResult[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Column, &methods_wxPropertyGridHitTestResult[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPropertyGridHitTestResult, "PropertyGridHitTestResult()");


sipClassTypeDef sipTypeDef__propgrid_wxPropertyGridHitTestResult = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxPropertyGridHitTestResult,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_PropertyGridHitTestResult,
        {0, 0, 1},
        4, methods_wxPropertyGridHitTestResult,
        0, SIP_NULLPTR,
        4, variables_wxPropertyGridHitTestResult,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPropertyGridHitTestResult,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxPropertyGridHitTestResult,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxPropertyGridHitTestResult,
    assign_wxPropertyGridHitTestResult,
    array_wxPropertyGridHitTestResult,
    copy_wxPropertyGridHitTestResult,
    release_wxPropertyGridHitTestResult,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
