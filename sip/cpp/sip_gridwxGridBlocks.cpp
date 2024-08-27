/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_grid.h"
        #include <wx/grid.h>
        #include <wx/grid.h>
            #include <wx/grid.h>


PyDoc_STRVAR(doc_wxGridBlocks_begin, "begin() -> iterator\n"
"\n"
"Return iterator corresponding to the beginning of the range.");

extern "C" {static PyObject *meth_wxGridBlocks_begin(PyObject *, PyObject *);}
static PyObject *meth_wxGridBlocks_begin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridBlocks *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridBlocks, &sipCpp))
        {
             ::wxGridBlocks::iterator*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxGridBlocks::iterator(sipCpp->begin());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGridBlocks_iterator,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_GridBlocks, sipName_begin, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridBlocks_end, "end() -> iterator\n"
"\n"
"Return iterator corresponding to the end of the range.");

extern "C" {static PyObject *meth_wxGridBlocks_end(PyObject *, PyObject *);}
static PyObject *meth_wxGridBlocks_end(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridBlocks *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridBlocks, &sipCpp))
        {
             ::wxGridBlocks::iterator*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxGridBlocks::iterator(sipCpp->end());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGridBlocks_iterator,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_GridBlocks, sipName_end, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridBlocks(void *, int);}
static void release_wxGridBlocks(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGridBlocks *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxGridBlocks(sipSimpleWrapper *);}
static void dealloc_wxGridBlocks(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridBlocks(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGridBlocks(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridBlocks(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGridBlocks *sipCpp = SIP_NULLPTR;

    {
        const  ::wxGridBlocks* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxGridBlocks, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGridBlocks(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxGridBlocks[] = {
    {sipName_begin, meth_wxGridBlocks_begin, METH_VARARGS, doc_wxGridBlocks_begin},
    {sipName_end, meth_wxGridBlocks_end, METH_VARARGS, doc_wxGridBlocks_end}
};

PyDoc_STRVAR(doc_wxGridBlocks, "Represents a collection of grid blocks that can be iterated over.");


sipClassTypeDef sipTypeDef__grid_wxGridBlocks = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridBlocks,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_GridBlocks,
        {0, 0, 1},
        2, methods_wxGridBlocks,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridBlocks,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxGridBlocks,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxGridBlocks,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxGridBlocks,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
