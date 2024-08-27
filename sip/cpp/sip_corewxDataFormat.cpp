/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/dataobj.h>
    wxDataFormatId _wxDataFormat_GetType(const wxDataFormat* self)
    {
        return static_cast<wxDataFormatId>(self->GetType());
    }


PyDoc_STRVAR(doc_wxDataFormat_GetId, "GetId() -> String\n"
"\n"
"Returns the name of a custom format (this function will fail for a\n"
"standard format).");

extern "C" {static PyObject *meth_wxDataFormat_GetId(PyObject *, PyObject *);}
static PyObject *meth_wxDataFormat_GetId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDataFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDataFormat, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetId());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_DataFormat, sipName_GetId, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataFormat_GetType, "GetType() -> DataFormatId\n"
"\n"
"Returns the platform-specific number identifying the format.");

extern "C" {static PyObject *meth_wxDataFormat_GetType(PyObject *, PyObject *);}
static PyObject *meth_wxDataFormat_GetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDataFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDataFormat, &sipCpp))
        {
             ::wxDataFormatId sipRes = ::wxDF_INVALID;
            int sipIsErr = 0;
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxDataFormat_GetType(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxDataFormatId);
        }
    }

    sipNoMethod(sipParseErr, sipName_DataFormat, sipName_GetType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataFormat_SetId, "SetId(format)\n"
"\n"
"Sets the format to be the custom format identified by the given name.");

extern "C" {static PyObject *meth_wxDataFormat_SetId(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataFormat_SetId(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* format;
        int formatState = 0;
         ::wxDataFormat *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxDataFormat, &sipCpp, sipType_wxString, &format, &formatState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetId(*format);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(format), sipType_wxString, formatState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_DataFormat, sipName_SetId, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataFormat_SetType, "SetType(type)\n"
"\n"
"Sets the format to the given value, which should be one of wxDF_XXX\n"
"constants.");

extern "C" {static PyObject *meth_wxDataFormat_SetType(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataFormat_SetType(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDataFormatId type;
         ::wxDataFormat *sipCpp;

        static const char *sipKwdList[] = {
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxDataFormat, &sipCpp, sipType_wxDataFormatId, &type))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetType(type);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_DataFormat, sipName_SetType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxDataFormat___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxDataFormat___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxDataFormat *sipCpp = reinterpret_cast< ::wxDataFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxDataFormat));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDataFormat* format;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxDataFormat, &format))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxDataFormat::operator==(*format);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::wxDataFormatId format;

        if (sipParseArgs(&sipParseErr, sipArg, "1E", sipType_wxDataFormatId, &format))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxDataFormat::operator==(format);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    return sipPySlotExtend(&sipModuleAPI__core, eq_slot, sipType_wxDataFormat, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_wxDataFormat___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxDataFormat___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxDataFormat *sipCpp = reinterpret_cast< ::wxDataFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxDataFormat));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDataFormat* format;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxDataFormat, &format))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxDataFormat::operator!=(*format);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::wxDataFormatId format;

        if (sipParseArgs(&sipParseErr, sipArg, "1E", sipType_wxDataFormatId, &format))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxDataFormat::operator!=(format);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    return sipPySlotExtend(&sipModuleAPI__core, ne_slot, sipType_wxDataFormat, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDataFormat(void *, int);}
static void release_wxDataFormat(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxDataFormat *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxDataFormat(Py_ssize_t);}
static void *array_wxDataFormat(Py_ssize_t sipNrElem)
{
    return new  ::wxDataFormat[sipNrElem];
}


extern "C" {static void assign_wxDataFormat(void *, Py_ssize_t, void *);}
static void assign_wxDataFormat(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxDataFormat *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxDataFormat *>(sipSrc);
}


extern "C" {static void *copy_wxDataFormat(const void *, Py_ssize_t);}
static void *copy_wxDataFormat(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxDataFormat(reinterpret_cast<const  ::wxDataFormat *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxDataFormat(sipSimpleWrapper *);}
static void dealloc_wxDataFormat(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDataFormat(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxDataFormat(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDataFormat(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxDataFormat *sipCpp = SIP_NULLPTR;

    {
         ::wxDataFormatId format = wxDF_INVALID;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|E", sipType_wxDataFormatId, &format))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDataFormat(format);
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
        const  ::wxString* format;
        int formatState = 0;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_wxString, &format, &formatState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDataFormat(*format);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(format), sipType_wxString, formatState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxDataFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxDataFormat, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDataFormat(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxDataFormat[] = {
    {(void *)slot_wxDataFormat___eq__, eq_slot},
    {(void *)slot_wxDataFormat___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxDataFormat[] = {
    {sipName_GetId, meth_wxDataFormat_GetId, METH_VARARGS, doc_wxDataFormat_GetId},
    {sipName_GetType, meth_wxDataFormat_GetType, METH_VARARGS, doc_wxDataFormat_GetType},
    {sipName_SetId, SIP_MLMETH_CAST(meth_wxDataFormat_SetId), METH_VARARGS|METH_KEYWORDS, doc_wxDataFormat_SetId},
    {sipName_SetType, SIP_MLMETH_CAST(meth_wxDataFormat_SetType), METH_VARARGS|METH_KEYWORDS, doc_wxDataFormat_SetType}
};

sipVariableDef variables_wxDataFormat[] = {
    {PropertyVariable, sipName_Type, &methods_wxDataFormat[1], &methods_wxDataFormat[3], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Id, &methods_wxDataFormat[0], &methods_wxDataFormat[2], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxDataFormat, "DataFormat(format=DF_INVALID)\n"
"DataFormat(format)\n"
"\n"
"A wxDataFormat is an encapsulation of a platform-specific format\n"
"handle which is used by the system for the clipboard and drag and drop\n"
"operations.");


sipClassTypeDef sipTypeDef__core_wxDataFormat = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxDataFormat,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_DataFormat,
        {0, 0, 1},
        4, methods_wxDataFormat,
        0, SIP_NULLPTR,
        2, variables_wxDataFormat,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDataFormat,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxDataFormat,
    init_type_wxDataFormat,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxDataFormat,
    assign_wxDataFormat,
    array_wxDataFormat,
    copy_wxDataFormat,
    release_wxDataFormat,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
