/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_richtext.h"
        #include <wx/richtext/richtextstyles.h>
        #include <wx/richtext/richtextbuffer.h>
        #include <wx/richtext/richtextbuffer.h>
        #include <wx/richtext/richtextstyles.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_GetStyle, "GetStyle() -> RichTextAttr\n"
"\n"
"Returns the attributes associated with this style.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_GetStyle(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_GetStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextStyleDefinition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp))
        {
             ::wxRichTextAttr*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRichTextAttr(sipCpp->GetStyle());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRichTextAttr,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_GetStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_GetBaseStyle, "GetBaseStyle() -> String\n"
"\n"
"Returns the style on which this style is based.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_GetBaseStyle(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_GetBaseStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextStyleDefinition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetBaseStyle());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_GetBaseStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_GetDescription, "GetDescription() -> String\n"
"\n"
"Returns the style's description.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_GetDescription(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_GetDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextStyleDefinition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetDescription());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_GetDescription, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_GetName, "GetName() -> String\n"
"\n"
"Returns the style name.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_GetName(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextStyleDefinition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetName());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_GetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_GetStyleMergedWithBase, "GetStyleMergedWithBase(sheet) -> RichTextAttr\n"
"\n"
"Returns the style attributes combined with the attributes of the\n"
"specified base style, if any.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_GetStyleMergedWithBase(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_GetStyleMergedWithBase(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxRichTextStyleSheet* sheet;
        const  ::wxRichTextStyleDefinition *sipCpp;

        static const char *sipKwdList[] = {
            sipName_sheet,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp, sipType_wxRichTextStyleSheet, &sheet))
        {
             ::wxRichTextAttr*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRichTextAttr((sipSelfWasArg ? sipCpp-> ::wxRichTextStyleDefinition::GetStyleMergedWithBase(sheet) : sipCpp->GetStyleMergedWithBase(sheet)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRichTextAttr,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_GetStyleMergedWithBase, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_SetBaseStyle, "SetBaseStyle(name)\n"
"\n"
"Sets the name of the style that this style is based on.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_SetBaseStyle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_SetBaseStyle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* name;
        int nameState = 0;
         ::wxRichTextStyleDefinition *sipCpp;

        static const char *sipKwdList[] = {
            sipName_name,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp, sipType_wxString, &name, &nameState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetBaseStyle(*name);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(name), sipType_wxString, nameState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_SetBaseStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_SetDescription, "SetDescription(descr)\n"
"\n"
"Sets the style description.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_SetDescription(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_SetDescription(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* descr;
        int descrState = 0;
         ::wxRichTextStyleDefinition *sipCpp;

        static const char *sipKwdList[] = {
            sipName_descr,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp, sipType_wxString, &descr, &descrState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetDescription(*descr);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(descr), sipType_wxString, descrState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_SetDescription, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_SetName, "SetName(name)\n"
"\n"
"Sets the name of the style.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_SetName(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_SetName(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* name;
        int nameState = 0;
         ::wxRichTextStyleDefinition *sipCpp;

        static const char *sipKwdList[] = {
            sipName_name,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp, sipType_wxString, &name, &nameState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetName(*name);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(name), sipType_wxString, nameState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_SetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_SetStyle, "SetStyle(style)\n"
"\n"
"Sets the attributes for this style.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_SetStyle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_SetStyle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextAttr* style;
         ::wxRichTextStyleDefinition *sipCpp;

        static const char *sipKwdList[] = {
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp, sipType_wxRichTextAttr, &style))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetStyle(*style);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_SetStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_GetProperties, "GetProperties() -> RichTextProperties\n"
"\n"
"Returns the definition's properties.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_GetProperties(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_GetProperties(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextStyleDefinition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp))
        {
             ::wxRichTextProperties*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetProperties();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxRichTextProperties,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_GetProperties, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextStyleDefinition_SetProperties, "SetProperties(props)\n"
"\n"
"Sets the definition's properties.");

extern "C" {static PyObject *meth_wxRichTextStyleDefinition_SetProperties(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextStyleDefinition_SetProperties(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextProperties* props;
         ::wxRichTextStyleDefinition *sipCpp;

        static const char *sipKwdList[] = {
            sipName_props,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxRichTextStyleDefinition, &sipCpp, sipType_wxRichTextProperties, &props))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetProperties(*props);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextStyleDefinition, sipName_SetProperties, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxRichTextStyleDefinition(void *, const sipTypeDef *);}
static void *cast_wxRichTextStyleDefinition(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxRichTextStyleDefinition *sipCpp = reinterpret_cast< ::wxRichTextStyleDefinition *>(sipCppV);

    if (targetType == sipType_wxRichTextStyleDefinition)
        return sipCppV;

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRichTextStyleDefinition(void *, int);}
static void release_wxRichTextStyleDefinition(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxRichTextStyleDefinition *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxRichTextStyleDefinition(sipSimpleWrapper *);}
static void dealloc_wxRichTextStyleDefinition(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxRichTextStyleDefinition(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxRichTextStyleDefinition[] = {{42, 0, 1}};


static PyMethodDef methods_wxRichTextStyleDefinition[] = {
    {sipName_GetBaseStyle, meth_wxRichTextStyleDefinition_GetBaseStyle, METH_VARARGS, doc_wxRichTextStyleDefinition_GetBaseStyle},
    {sipName_GetDescription, meth_wxRichTextStyleDefinition_GetDescription, METH_VARARGS, doc_wxRichTextStyleDefinition_GetDescription},
    {sipName_GetName, meth_wxRichTextStyleDefinition_GetName, METH_VARARGS, doc_wxRichTextStyleDefinition_GetName},
    {sipName_GetProperties, meth_wxRichTextStyleDefinition_GetProperties, METH_VARARGS, doc_wxRichTextStyleDefinition_GetProperties},
    {sipName_GetStyle, meth_wxRichTextStyleDefinition_GetStyle, METH_VARARGS, doc_wxRichTextStyleDefinition_GetStyle},
    {sipName_GetStyleMergedWithBase, SIP_MLMETH_CAST(meth_wxRichTextStyleDefinition_GetStyleMergedWithBase), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextStyleDefinition_GetStyleMergedWithBase},
    {sipName_SetBaseStyle, SIP_MLMETH_CAST(meth_wxRichTextStyleDefinition_SetBaseStyle), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextStyleDefinition_SetBaseStyle},
    {sipName_SetDescription, SIP_MLMETH_CAST(meth_wxRichTextStyleDefinition_SetDescription), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextStyleDefinition_SetDescription},
    {sipName_SetName, SIP_MLMETH_CAST(meth_wxRichTextStyleDefinition_SetName), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextStyleDefinition_SetName},
    {sipName_SetProperties, SIP_MLMETH_CAST(meth_wxRichTextStyleDefinition_SetProperties), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextStyleDefinition_SetProperties},
    {sipName_SetStyle, SIP_MLMETH_CAST(meth_wxRichTextStyleDefinition_SetStyle), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextStyleDefinition_SetStyle}
};

sipVariableDef variables_wxRichTextStyleDefinition[] = {
    {PropertyVariable, sipName_Style, &methods_wxRichTextStyleDefinition[4], &methods_wxRichTextStyleDefinition[10], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Properties, &methods_wxRichTextStyleDefinition[3], &methods_wxRichTextStyleDefinition[9], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Name, &methods_wxRichTextStyleDefinition[2], &methods_wxRichTextStyleDefinition[8], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Description, &methods_wxRichTextStyleDefinition[1], &methods_wxRichTextStyleDefinition[7], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_BaseStyle, &methods_wxRichTextStyleDefinition[0], &methods_wxRichTextStyleDefinition[6], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxRichTextStyleDefinition, "RichTextStyleDefinition(name=wx.EmptyString)\n"
"\n"
"This is a base class for paragraph and character styles.");


sipClassTypeDef sipTypeDef__richtext_wxRichTextStyleDefinition = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxRichTextStyleDefinition,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_RichTextStyleDefinition,
        {0, 0, 1},
        11, methods_wxRichTextStyleDefinition,
        0, SIP_NULLPTR,
        5, variables_wxRichTextStyleDefinition,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxRichTextStyleDefinition,
    -1,
    -1,
    supers_wxRichTextStyleDefinition,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxRichTextStyleDefinition,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxRichTextStyleDefinition,
    cast_wxRichTextStyleDefinition,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
