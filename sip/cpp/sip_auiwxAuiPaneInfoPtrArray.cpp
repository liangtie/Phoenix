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


PyDoc_STRVAR(doc_wxAuiPaneInfoPtrArray_append, "append(self, obj: AuiPaneInfo)");

extern "C" {static PyObject *meth_wxAuiPaneInfoPtrArray_append(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiPaneInfoPtrArray_append(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiPaneInfo* obj;
         ::wxAuiPaneInfoPtrArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxAuiPaneInfoPtrArray, &sipCpp, sipType_wxAuiPaneInfo, &obj))
        {
        sipCpp->Add(obj);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiPaneInfoPtrArray, sipName_append, doc_wxAuiPaneInfoPtrArray_append);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiPaneInfoPtrArray_index, "index(self, obj: AuiPaneInfo) -> int");

extern "C" {static PyObject *meth_wxAuiPaneInfoPtrArray_index(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiPaneInfoPtrArray_index(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiPaneInfo* obj;
         ::wxAuiPaneInfoPtrArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxAuiPaneInfoPtrArray, &sipCpp, sipType_wxAuiPaneInfo, &obj))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;
        int idx = sipCpp->Index(obj, false);
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

    sipNoMethod(sipParseErr, sipName_AuiPaneInfoPtrArray, sipName_index, doc_wxAuiPaneInfoPtrArray_index);

    return SIP_NULLPTR;
}


extern "C" {static int slot_wxAuiPaneInfoPtrArray___contains__(PyObject *,PyObject *);}
static int slot_wxAuiPaneInfoPtrArray___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAuiPaneInfoPtrArray *sipCpp = reinterpret_cast< ::wxAuiPaneInfoPtrArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiPaneInfoPtrArray));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiPaneInfo* obj;

        if (sipParseArgs(&sipParseErr, sipArg, "1J8", sipType_wxAuiPaneInfo, &obj))
        {
            int sipRes = 0;
        int idx = sipCpp->Index(obj, false);
        sipRes = idx != wxNOT_FOUND;

            return sipRes;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiPaneInfoPtrArray, sipName___contains__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_wxAuiPaneInfoPtrArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxAuiPaneInfoPtrArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAuiPaneInfoPtrArray *sipCpp = reinterpret_cast< ::wxAuiPaneInfoPtrArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiPaneInfoPtrArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long index;

        if (sipParseArgs(&sipParseErr, sipArg, "1l", &index))
        {
             ::wxAuiPaneInfo*sipRes = 0;
            sipErrorState sipError = sipErrorNone;
            if (0 > index)
                index += sipCpp->GetCount();

            if ((index < sipCpp->GetCount()) && (0 <= index)) {
                sipRes = sipCpp->Item(index);
            }
            else {
                wxPyErr_SetString(PyExc_IndexError, "sequence index out of range");
                sipError = sipErrorFail;
            }

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipConvertFromType(sipRes,sipType_wxAuiPaneInfo,SIP_NULLPTR);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiPaneInfoPtrArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static Py_ssize_t slot_wxAuiPaneInfoPtrArray___len__(PyObject *);}
static Py_ssize_t slot_wxAuiPaneInfoPtrArray___len__(PyObject *sipSelf)
{
     ::wxAuiPaneInfoPtrArray *sipCpp = reinterpret_cast< ::wxAuiPaneInfoPtrArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiPaneInfoPtrArray));

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
extern "C" {static void release_wxAuiPaneInfoPtrArray(void *, int);}
static void release_wxAuiPaneInfoPtrArray(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxAuiPaneInfoPtrArray *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxAuiPaneInfoPtrArray(Py_ssize_t);}
static void *array_wxAuiPaneInfoPtrArray(Py_ssize_t sipNrElem)
{
    return new  ::wxAuiPaneInfoPtrArray[sipNrElem];
}


extern "C" {static void assign_wxAuiPaneInfoPtrArray(void *, Py_ssize_t, void *);}
static void assign_wxAuiPaneInfoPtrArray(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxAuiPaneInfoPtrArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxAuiPaneInfoPtrArray *>(sipSrc);
}


extern "C" {static void *copy_wxAuiPaneInfoPtrArray(const void *, Py_ssize_t);}
static void *copy_wxAuiPaneInfoPtrArray(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxAuiPaneInfoPtrArray(reinterpret_cast<const  ::wxAuiPaneInfoPtrArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxAuiPaneInfoPtrArray(sipSimpleWrapper *);}
static void dealloc_wxAuiPaneInfoPtrArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAuiPaneInfoPtrArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxAuiPaneInfoPtrArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxAuiPaneInfoPtrArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxAuiPaneInfoPtrArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiPaneInfoPtrArray();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxAuiPaneInfoPtrArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxAuiPaneInfoPtrArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiPaneInfoPtrArray(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxAuiPaneInfoPtrArray[] = {
    {(void *)slot_wxAuiPaneInfoPtrArray___contains__, contains_slot},
    {(void *)slot_wxAuiPaneInfoPtrArray___getitem__, getitem_slot},
    {(void *)slot_wxAuiPaneInfoPtrArray___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxAuiPaneInfoPtrArray[] = {
    {sipName_append, SIP_MLMETH_CAST(meth_wxAuiPaneInfoPtrArray_append), METH_VARARGS|METH_KEYWORDS, doc_wxAuiPaneInfoPtrArray_append},
    {sipName_index, SIP_MLMETH_CAST(meth_wxAuiPaneInfoPtrArray_index), METH_VARARGS|METH_KEYWORDS, doc_wxAuiPaneInfoPtrArray_index}
};

PyDoc_STRVAR(doc_wxAuiPaneInfoPtrArray, "\1AuiPaneInfoPtrArray()\n"
"AuiPaneInfoPtrArray(a0: AuiPaneInfoPtrArray)");


sipClassTypeDef sipTypeDef__aui_wxAuiPaneInfoPtrArray = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxAuiPaneInfoPtrArray,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_AuiPaneInfoPtrArray,
        {0, 0, 1},
        2, methods_wxAuiPaneInfoPtrArray,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAuiPaneInfoPtrArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxAuiPaneInfoPtrArray,
    init_type_wxAuiPaneInfoPtrArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxAuiPaneInfoPtrArray,
    assign_wxAuiPaneInfoPtrArray,
    array_wxAuiPaneInfoPtrArray,
    copy_wxAuiPaneInfoPtrArray,
    release_wxAuiPaneInfoPtrArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
