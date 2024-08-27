/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/treebase.h>
    int _wxTreeItemId___nonzero__(wxTreeItemId* self)
    {
        return self->IsOk();
    }
    int _wxTreeItemId___bool__(wxTreeItemId* self)
    {
        return self->IsOk();
    }
    bool _wxTreeItemId___eq__(wxTreeItemId* self, const wxTreeItemId* other)
    {
        return *self == *other;
    }
    bool _wxTreeItemId___ne__(wxTreeItemId* self, const wxTreeItemId* other)
    {
        return *self != *other;
    }


PyDoc_STRVAR(doc_wxTreeItemId_IsOk, "IsOk() -> bool\n"
"\n"
"Returns true if this instance is referencing a valid tree item.");

extern "C" {static PyObject *meth_wxTreeItemId_IsOk(PyObject *, PyObject *);}
static PyObject *meth_wxTreeItemId_IsOk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTreeItemId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTreeItemId, &sipCpp))
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

    sipNoMethod(sipParseErr, sipName_TreeItemId, sipName_IsOk, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTreeItemId_GetID, "GetID() -> void");

extern "C" {static PyObject *meth_wxTreeItemId_GetID(PyObject *, PyObject *);}
static PyObject *meth_wxTreeItemId_GetID(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTreeItemId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTreeItemId, &sipCpp))
        {
            void*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetID();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TreeItemId, sipName_GetID, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTreeItemId_Unset, "Unset()");

extern "C" {static PyObject *meth_wxTreeItemId_Unset(PyObject *, PyObject *);}
static PyObject *meth_wxTreeItemId_Unset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTreeItemId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTreeItemId, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Unset();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_TreeItemId, sipName_Unset, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTreeItemId___nonzero__, "__nonzero__() -> int");

extern "C" {static PyObject *meth_wxTreeItemId___nonzero__(PyObject *, PyObject *);}
static PyObject *meth_wxTreeItemId___nonzero__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTreeItemId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTreeItemId, &sipCpp))
        {
            int sipRes = 0;
            int sipIsErr = 0;
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTreeItemId___nonzero__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TreeItemId, sipName___nonzero__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxTreeItemId___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxTreeItemId___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxTreeItemId *sipCpp = reinterpret_cast< ::wxTreeItemId *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTreeItemId));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTreeItemId* other;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxTreeItemId, &other))
        {
            bool sipRes = 0;
            int sipIsErr = 0;
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTreeItemId___ne__(sipCpp, other);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    return sipPySlotExtend(&sipModuleAPI__core, ne_slot, sipType_wxTreeItemId, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_wxTreeItemId___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxTreeItemId___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxTreeItemId *sipCpp = reinterpret_cast< ::wxTreeItemId *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTreeItemId));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTreeItemId* other;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxTreeItemId, &other))
        {
            bool sipRes = 0;
            int sipIsErr = 0;
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTreeItemId___eq__(sipCpp, other);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    return sipPySlotExtend(&sipModuleAPI__core, eq_slot, sipType_wxTreeItemId, sipSelf, sipArg);
}


extern "C" {static int slot_wxTreeItemId___bool__(PyObject *);}
static int slot_wxTreeItemId___bool__(PyObject *sipSelf)
{
     ::wxTreeItemId *sipCpp = reinterpret_cast< ::wxTreeItemId *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTreeItemId));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTreeItemId___bool__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTreeItemId(void *, int);}
static void release_wxTreeItemId(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxTreeItemId *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxTreeItemId(Py_ssize_t);}
static void *array_wxTreeItemId(Py_ssize_t sipNrElem)
{
    return new  ::wxTreeItemId[sipNrElem];
}


extern "C" {static void assign_wxTreeItemId(void *, Py_ssize_t, void *);}
static void assign_wxTreeItemId(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxTreeItemId *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxTreeItemId *>(sipSrc);
}


extern "C" {static void *copy_wxTreeItemId(const void *, Py_ssize_t);}
static void *copy_wxTreeItemId(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxTreeItemId(reinterpret_cast<const  ::wxTreeItemId *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxTreeItemId(sipSimpleWrapper *);}
static void dealloc_wxTreeItemId(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTreeItemId(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxTreeItemId(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTreeItemId(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxTreeItemId *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxTreeItemId();
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
        void* pItem;

        static const char *sipKwdList[] = {
            sipName_pItem,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "v", &pItem))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxTreeItemId(pItem);
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
        const  ::wxTreeItemId* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxTreeItemId, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxTreeItemId(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxTreeItemId[] = {
    {(void *)slot_wxTreeItemId___ne__, ne_slot},
    {(void *)slot_wxTreeItemId___eq__, eq_slot},
    {(void *)slot_wxTreeItemId___bool__, bool_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxTreeItemId[] = {
    {sipName_GetID, meth_wxTreeItemId_GetID, METH_VARARGS, doc_wxTreeItemId_GetID},
    {sipName_IsOk, meth_wxTreeItemId_IsOk, METH_VARARGS, doc_wxTreeItemId_IsOk},
    {sipName_Unset, meth_wxTreeItemId_Unset, METH_VARARGS, doc_wxTreeItemId_Unset},
    {sipName___nonzero__, meth_wxTreeItemId___nonzero__, METH_VARARGS, doc_wxTreeItemId___nonzero__}
};

sipVariableDef variables_wxTreeItemId[] = {
    {PropertyVariable, sipName_ID, &methods_wxTreeItemId[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxTreeItemId, "TreeItemId()\n"
"TreeItemId(pItem)\n"
"\n"
"An opaque reference to a tree item.");


sipClassTypeDef sipTypeDef__core_wxTreeItemId = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxTreeItemId,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_TreeItemId,
        {0, 0, 1},
        4, methods_wxTreeItemId,
        0, SIP_NULLPTR,
        1, variables_wxTreeItemId,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTreeItemId,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxTreeItemId,
    init_type_wxTreeItemId,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxTreeItemId,
    assign_wxTreeItemId,
    array_wxTreeItemId,
    copy_wxTreeItemId,
    release_wxTreeItemId,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
