/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_aui.h"
        #include <wx/aui/framemanager.h>
        #include <wx/gdicmn.h>


PyDoc_STRVAR(doc_wxAuiDockInfo_IsOk, "IsOk() -> bool");

extern "C" {static PyObject *meth_wxAuiDockInfo_IsOk(PyObject *, PyObject *);}
static PyObject *meth_wxAuiDockInfo_IsOk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAuiDockInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAuiDockInfo, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsOk();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDockInfo, sipName_IsOk, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDockInfo_IsHorizontal, "IsHorizontal() -> bool");

extern "C" {static PyObject *meth_wxAuiDockInfo_IsHorizontal(PyObject *, PyObject *);}
static PyObject *meth_wxAuiDockInfo_IsHorizontal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAuiDockInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAuiDockInfo, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsHorizontal();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDockInfo, sipName_IsHorizontal, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDockInfo_IsVertical, "IsVertical() -> bool");

extern "C" {static PyObject *meth_wxAuiDockInfo_IsVertical(PyObject *, PyObject *);}
static PyObject *meth_wxAuiDockInfo_IsVertical(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAuiDockInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAuiDockInfo, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsVertical();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDockInfo, sipName_IsVertical, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxAuiDockInfo(void *, int);}
static void release_wxAuiDockInfo(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxAuiDockInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxAuiDockInfo(Py_ssize_t);}
static void *array_wxAuiDockInfo(Py_ssize_t sipNrElem)
{
    return new  ::wxAuiDockInfo[sipNrElem];
}


extern "C" {static void assign_wxAuiDockInfo(void *, Py_ssize_t, void *);}
static void assign_wxAuiDockInfo(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxAuiDockInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxAuiDockInfo *>(sipSrc);
}


extern "C" {static void *copy_wxAuiDockInfo(const void *, Py_ssize_t);}
static void *copy_wxAuiDockInfo(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxAuiDockInfo(reinterpret_cast<const  ::wxAuiDockInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxAuiDockInfo(sipSimpleWrapper *);}
static void dealloc_wxAuiDockInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAuiDockInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxAuiDockInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxAuiDockInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxAuiDockInfo *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiDockInfo();
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
        const  ::wxAuiDockInfo* c;

        static const char *sipKwdList[] = {
            sipName_c,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxAuiDockInfo, &c))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiDockInfo(*c);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxAuiDockInfo[] = {
    {sipName_IsHorizontal, meth_wxAuiDockInfo_IsHorizontal, METH_VARARGS, doc_wxAuiDockInfo_IsHorizontal},
    {sipName_IsOk, meth_wxAuiDockInfo_IsOk, METH_VARARGS, doc_wxAuiDockInfo_IsOk},
    {sipName_IsVertical, meth_wxAuiDockInfo_IsVertical, METH_VARARGS, doc_wxAuiDockInfo_IsVertical}
};


extern "C" {static PyObject *varget_wxAuiDockInfo_dock_direction(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_dock_direction(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipCpp->dock_direction;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_wxAuiDockInfo_dock_direction(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_dock_direction(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->dock_direction = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_dock_layer(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_dock_layer(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipCpp->dock_layer;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_wxAuiDockInfo_dock_layer(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_dock_layer(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->dock_layer = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_dock_row(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_dock_row(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipCpp->dock_row;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_wxAuiDockInfo_dock_row(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_dock_row(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->dock_row = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_fixed(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_fixed(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipCpp->fixed;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_wxAuiDockInfo_fixed(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_fixed(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->fixed = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_min_size(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_min_size(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipCpp->min_size;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_wxAuiDockInfo_min_size(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_min_size(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->min_size = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_panes(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_panes(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::wxAuiPaneInfoPtrArray*sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -8);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->panes;

    sipPy = sipConvertFromType(sipVal, sipType_wxAuiPaneInfoPtrArray, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -7, sipPySelf);
        sipKeepReference(sipPySelf, -8, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_wxAuiDockInfo_panes(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_panes(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxAuiPaneInfoPtrArray*sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::wxAuiPaneInfoPtrArray *>(sipForceConvertToType(sipPy, sipType_wxAuiPaneInfoPtrArray, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->panes = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_rect(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_rect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::wxRect*sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -9);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->rect;

    sipPy = sipConvertFromType(sipVal, sipType_wxRect, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -27, sipPySelf);
        sipKeepReference(sipPySelf, -9, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_wxAuiDockInfo_rect(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_rect(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxRect*sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    int sipIsErr = 0;
    int sipValState;
    sipVal = reinterpret_cast< ::wxRect *>(sipForceConvertToType(sipPy, sipType_wxRect, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->rect = *sipVal;

    sipReleaseType(sipVal, sipType_wxRect, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_reserved1(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_reserved1(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipCpp->reserved1;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_wxAuiDockInfo_reserved1(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_reserved1(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->reserved1 = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_resizable(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_resizable(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipCpp->resizable;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_wxAuiDockInfo_resizable(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_resizable(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->resizable = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_size(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_size(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipCpp->size;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_wxAuiDockInfo_size(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_size(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->size = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxAuiDockInfo_toolbar(void *, PyObject *, PyObject *);}
static PyObject *varget_wxAuiDockInfo_toolbar(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipCpp->toolbar;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_wxAuiDockInfo_toolbar(void *, PyObject *, PyObject *);}
static int varset_wxAuiDockInfo_toolbar(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxAuiDockInfo *sipCpp = reinterpret_cast< ::wxAuiDockInfo *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->toolbar = static_cast<bool>(sipVal);

    return 0;
}

sipVariableDef variables_wxAuiDockInfo[] = {
    {InstanceVariable, sipName_dock_direction, (PyMethodDef *)varget_wxAuiDockInfo_dock_direction, (PyMethodDef *)varset_wxAuiDockInfo_dock_direction, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_dock_layer, (PyMethodDef *)varget_wxAuiDockInfo_dock_layer, (PyMethodDef *)varset_wxAuiDockInfo_dock_layer, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_dock_row, (PyMethodDef *)varget_wxAuiDockInfo_dock_row, (PyMethodDef *)varset_wxAuiDockInfo_dock_row, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_fixed, (PyMethodDef *)varget_wxAuiDockInfo_fixed, (PyMethodDef *)varset_wxAuiDockInfo_fixed, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_min_size, (PyMethodDef *)varget_wxAuiDockInfo_min_size, (PyMethodDef *)varset_wxAuiDockInfo_min_size, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_panes, (PyMethodDef *)varget_wxAuiDockInfo_panes, (PyMethodDef *)varset_wxAuiDockInfo_panes, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_rect, (PyMethodDef *)varget_wxAuiDockInfo_rect, (PyMethodDef *)varset_wxAuiDockInfo_rect, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_reserved1, (PyMethodDef *)varget_wxAuiDockInfo_reserved1, (PyMethodDef *)varset_wxAuiDockInfo_reserved1, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_resizable, (PyMethodDef *)varget_wxAuiDockInfo_resizable, (PyMethodDef *)varset_wxAuiDockInfo_resizable, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_size, (PyMethodDef *)varget_wxAuiDockInfo_size, (PyMethodDef *)varset_wxAuiDockInfo_size, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_toolbar, (PyMethodDef *)varget_wxAuiDockInfo_toolbar, (PyMethodDef *)varset_wxAuiDockInfo_toolbar, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxAuiDockInfo, "AuiDockInfo()\n"
"AuiDockInfo(c)");


sipClassTypeDef sipTypeDef__aui_wxAuiDockInfo = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxAuiDockInfo,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_AuiDockInfo,
        {0, 0, 1},
        3, methods_wxAuiDockInfo,
        0, SIP_NULLPTR,
        11, variables_wxAuiDockInfo,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAuiDockInfo,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxAuiDockInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxAuiDockInfo,
    assign_wxAuiDockInfo,
    array_wxAuiDockInfo,
    copy_wxAuiDockInfo,
    release_wxAuiDockInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
