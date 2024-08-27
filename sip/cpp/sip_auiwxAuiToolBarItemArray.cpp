/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_aui.h"
        #include <wx/aui/auibar.h>


PyDoc_STRVAR(doc_wxAuiToolBarItemArray_append, "append(self, obj: AuiToolBarItem)");

extern "C" {static PyObject *meth_wxAuiToolBarItemArray_append(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarItemArray_append(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiToolBarItem* obj;
         ::wxAuiToolBarItemArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxAuiToolBarItemArray, &sipCpp, sipType_wxAuiToolBarItem, &obj))
        {
        sipCpp->Add(*obj);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiToolBarItemArray, sipName_append, doc_wxAuiToolBarItemArray_append);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiToolBarItemArray_index, "index(self, obj: AuiToolBarItem) -> int");

extern "C" {static PyObject *meth_wxAuiToolBarItemArray_index(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarItemArray_index(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiToolBarItem* obj;
         ::wxAuiToolBarItemArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxAuiToolBarItemArray, &sipCpp, sipType_wxAuiToolBarItem, &obj))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;
        int idx = sipCpp->Index(*obj, false);
        if (idx == wxNOT_FOUND) {
            sipError = sipErrorFail;
            wxPyErr_SetString(PyExc_ValueError,
                              "sequence.index(x): x not in sequence");
            }
        sipRes = idx;

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return PyLong_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiToolBarItemArray, sipName_index, doc_wxAuiToolBarItemArray_index);

    return SIP_NULLPTR;
}


extern "C" {static int slot_wxAuiToolBarItemArray___contains__(PyObject *,PyObject *);}
static int slot_wxAuiToolBarItemArray___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAuiToolBarItemArray *sipCpp = reinterpret_cast< ::wxAuiToolBarItemArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiToolBarItemArray));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiToolBarItem* obj;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxAuiToolBarItem, &obj))
        {
            int sipRes = 0;
        int idx = sipCpp->Index(*obj, false);
        sipRes = idx != wxNOT_FOUND;

            return sipRes;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiToolBarItemArray, sipName___contains__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_wxAuiToolBarItemArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxAuiToolBarItemArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAuiToolBarItemArray *sipCpp = reinterpret_cast< ::wxAuiToolBarItemArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiToolBarItemArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long index;

        if (sipParseArgs(&sipParseErr, sipArg, "1l", &index))
        {
             ::wxAuiToolBarItem*sipRes = 0;
            sipErrorState sipError = sipErrorNone;
            if (0 > index)
                index += sipCpp->GetCount();

            if ((index < sipCpp->GetCount()) && (0 <= index)) {
                sipRes = &sipCpp->Item(index);
            }
            else {
                wxPyErr_SetString(PyExc_IndexError, "sequence index out of range");
                sipError = sipErrorFail;
            }

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipConvertFromType(sipRes,sipType_wxAuiToolBarItem,SIP_NULLPTR);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiToolBarItemArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static Py_ssize_t slot_wxAuiToolBarItemArray___len__(PyObject *);}
static Py_ssize_t slot_wxAuiToolBarItemArray___len__(PyObject *sipSelf)
{
     ::wxAuiToolBarItemArray *sipCpp = reinterpret_cast< ::wxAuiToolBarItemArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiToolBarItemArray));

    if (!sipCpp)
        return 0;


    {
        {
            Py_ssize_t sipRes = 0;
        sipRes = sipCpp->GetCount();

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxAuiToolBarItemArray(void *, int);}
static void release_wxAuiToolBarItemArray(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxAuiToolBarItemArray *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxAuiToolBarItemArray(Py_ssize_t);}
static void *array_wxAuiToolBarItemArray(Py_ssize_t sipNrElem)
{
    return new  ::wxAuiToolBarItemArray[sipNrElem];
}


extern "C" {static void assign_wxAuiToolBarItemArray(void *, Py_ssize_t, void *);}
static void assign_wxAuiToolBarItemArray(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxAuiToolBarItemArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxAuiToolBarItemArray *>(sipSrc);
}


extern "C" {static void *copy_wxAuiToolBarItemArray(const void *, Py_ssize_t);}
static void *copy_wxAuiToolBarItemArray(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxAuiToolBarItemArray(reinterpret_cast<const  ::wxAuiToolBarItemArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxAuiToolBarItemArray(sipSimpleWrapper *);}
static void dealloc_wxAuiToolBarItemArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAuiToolBarItemArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxAuiToolBarItemArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxAuiToolBarItemArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxAuiToolBarItemArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiToolBarItemArray();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxAuiToolBarItemArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxAuiToolBarItemArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiToolBarItemArray(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxAuiToolBarItemArray[] = {
    {(void *)slot_wxAuiToolBarItemArray___contains__, contains_slot},
    {(void *)slot_wxAuiToolBarItemArray___getitem__, getitem_slot},
    {(void *)slot_wxAuiToolBarItemArray___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxAuiToolBarItemArray[] = {
    {sipName_append, SIP_MLMETH_CAST(meth_wxAuiToolBarItemArray_append), METH_VARARGS|METH_KEYWORDS, doc_wxAuiToolBarItemArray_append},
    {sipName_index, SIP_MLMETH_CAST(meth_wxAuiToolBarItemArray_index), METH_VARARGS|METH_KEYWORDS, doc_wxAuiToolBarItemArray_index}
};

PyDoc_STRVAR(doc_wxAuiToolBarItemArray, "\1AuiToolBarItemArray()\n"
"AuiToolBarItemArray(a0: AuiToolBarItemArray)");


sipClassTypeDef sipTypeDef__aui_wxAuiToolBarItemArray = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxAuiToolBarItemArray,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_AuiToolBarItemArray,
        {0, 0, 1},
        2, methods_wxAuiToolBarItemArray,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAuiToolBarItemArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxAuiToolBarItemArray,
    init_type_wxAuiToolBarItemArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxAuiToolBarItemArray,
    assign_wxAuiToolBarItemArray,
    array_wxAuiToolBarItemArray,
    copy_wxAuiToolBarItemArray,
    release_wxAuiToolBarItemArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
