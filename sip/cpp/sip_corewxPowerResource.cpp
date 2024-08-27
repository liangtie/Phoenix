/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/power.h>



PyDoc_STRVAR(doc_wxPowerResource_Acquire, "Acquire(kind, reason=\"\") -> bool\n"
"\n"
"Acquire a power resource for the application.");

extern "C" {static PyObject *meth_wxPowerResource_Acquire(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPowerResource_Acquire(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPowerResourceKind kind;
        const  ::wxString& reasondef = wxString();
        const  ::wxString* reason = &reasondef;
        int reasonState = 0;

        static const char *sipKwdList[] = {
            sipName_kind,
            sipName_reason,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "E|J1", sipType_wxPowerResourceKind, &kind, sipType_wxString, &reason, &reasonState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxPowerResource::Acquire(kind,*reason);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(reason), sipType_wxString, reasonState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PowerResource, sipName_Acquire, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPowerResource_Release, "Release(kind)\n"
"\n"
"Release a previously acquired power resource.");

extern "C" {static PyObject *meth_wxPowerResource_Release(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPowerResource_Release(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPowerResourceKind kind;

        static const char *sipKwdList[] = {
            sipName_kind,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "E", sipType_wxPowerResourceKind, &kind))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
             ::wxPowerResource::Release(kind);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PowerResource, sipName_Release, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPowerResource(void *, int);}
static void release_wxPowerResource(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxPowerResource *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxPowerResource(Py_ssize_t);}
static void *array_wxPowerResource(Py_ssize_t sipNrElem)
{
    return new  ::wxPowerResource[sipNrElem];
}


extern "C" {static void assign_wxPowerResource(void *, Py_ssize_t, void *);}
static void assign_wxPowerResource(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPowerResource *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPowerResource *>(sipSrc);
}


extern "C" {static void *copy_wxPowerResource(const void *, Py_ssize_t);}
static void *copy_wxPowerResource(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxPowerResource(reinterpret_cast<const  ::wxPowerResource *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPowerResource(sipSimpleWrapper *);}
static void dealloc_wxPowerResource(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPowerResource(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxPowerResource(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPowerResource(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxPowerResource *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPowerResource();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxPowerResource* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxPowerResource, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPowerResource(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxPowerResource[] = {
    {sipName_Acquire, SIP_MLMETH_CAST(meth_wxPowerResource_Acquire), METH_VARARGS|METH_KEYWORDS, doc_wxPowerResource_Acquire},
    {sipName_Release, SIP_MLMETH_CAST(meth_wxPowerResource_Release), METH_VARARGS|METH_KEYWORDS, doc_wxPowerResource_Release}
};

PyDoc_STRVAR(doc_wxPowerResource, "Helper functions for acquiring and releasing the given power resource.");


sipClassTypeDef sipTypeDef__core_wxPowerResource = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxPowerResource,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_PowerResource,
        {0, 0, 1},
        2, methods_wxPowerResource,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPowerResource,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxPowerResource,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxPowerResource,
    assign_wxPowerResource,
    array_wxPowerResource,
    copy_wxPowerResource,
    release_wxPowerResource,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
