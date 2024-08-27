/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/tooltip.h>
        #include <wx/window.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>
    void _wxToolTip_SetMaxWidth(int width)
    {
        #ifdef __WXMSW__
            wxToolTip::SetMaxWidth(width);
        #endif
    }


PyDoc_STRVAR(doc_wxToolTip_GetTip, "GetTip() -> String\n"
"\n"
"Get the tooltip text.");

extern "C" {static PyObject *meth_wxToolTip_GetTip(PyObject *, PyObject *);}
static PyObject *meth_wxToolTip_GetTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxToolTip, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetTip());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ToolTip, sipName_GetTip, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxToolTip_GetWindow, "GetWindow() -> Window\n"
"\n"
"Get the associated window.");

extern "C" {static PyObject *meth_wxToolTip_GetWindow(PyObject *, PyObject *);}
static PyObject *meth_wxToolTip_GetWindow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxToolTip *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxToolTip, &sipCpp))
        {
             ::wxWindow*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetWindow();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ToolTip, sipName_GetWindow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxToolTip_SetTip, "SetTip(tip)\n"
"\n"
"Set the tooltip text.");

extern "C" {static PyObject *meth_wxToolTip_SetTip(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxToolTip_SetTip(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* tip;
        int tipState = 0;
         ::wxToolTip *sipCpp;

        static const char *sipKwdList[] = {
            sipName_tip,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxToolTip, &sipCpp, sipType_wxString, &tip, &tipState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetTip(*tip);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(tip), sipType_wxString, tipState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ToolTip, sipName_SetTip, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxToolTip_Enable, "Enable(flag)\n"
"\n"
"Enable or disable tooltips globally.");

extern "C" {static PyObject *meth_wxToolTip_Enable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxToolTip_Enable(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool flag;

        static const char *sipKwdList[] = {
            sipName_flag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "b", &flag))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
             ::wxToolTip::Enable(flag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ToolTip, sipName_Enable, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxToolTip_SetAutoPop, "SetAutoPop(msecs)\n"
"\n"
"Set the delay after which the tooltip disappears or how long a tooltip\n"
"remains visible.");

extern "C" {static PyObject *meth_wxToolTip_SetAutoPop(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxToolTip_SetAutoPop(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long msecs;

        static const char *sipKwdList[] = {
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "l", &msecs))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
             ::wxToolTip::SetAutoPop(msecs);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ToolTip, sipName_SetAutoPop, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxToolTip_SetDelay, "SetDelay(msecs)\n"
"\n"
"Set the delay after which the tooltip appears.");

extern "C" {static PyObject *meth_wxToolTip_SetDelay(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxToolTip_SetDelay(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long msecs;

        static const char *sipKwdList[] = {
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "l", &msecs))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
             ::wxToolTip::SetDelay(msecs);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ToolTip, sipName_SetDelay, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxToolTip_SetMaxWidth, "SetMaxWidth(width)\n"
"\n"
"Set tooltip maximal width in pixels.");

extern "C" {static PyObject *meth_wxToolTip_SetMaxWidth(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxToolTip_SetMaxWidth(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int width;

        static const char *sipKwdList[] = {
            sipName_width,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "i", &width))
        {
            int sipIsErr = 0;
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxToolTip_SetMaxWidth(width);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ToolTip, sipName_SetMaxWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxToolTip_SetReshow, "SetReshow(msecs)\n"
"\n"
"Set the delay between subsequent tooltips to appear.");

extern "C" {static PyObject *meth_wxToolTip_SetReshow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxToolTip_SetReshow(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long msecs;

        static const char *sipKwdList[] = {
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "l", &msecs))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
             ::wxToolTip::SetReshow(msecs);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ToolTip, sipName_SetReshow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxToolTip(void *, const sipTypeDef *);}
static void *cast_wxToolTip(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxToolTip *sipCpp = reinterpret_cast< ::wxToolTip *>(sipCppV);

    if (targetType == sipType_wxToolTip)
        return sipCppV;

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxToolTip(void *, int);}
static void release_wxToolTip(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxToolTip *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxToolTip(sipSimpleWrapper *);}
static void dealloc_wxToolTip(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxToolTip(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxToolTip(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxToolTip(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxToolTip *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString* tip;
        int tipState = 0;

        static const char *sipKwdList[] = {
            sipName_tip,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_wxString, &tip, &tipState))
        {
        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxToolTip(*tip);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(tip), sipType_wxString, tipState);

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


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxToolTip[] = {{392, 255, 1}};


static PyMethodDef methods_wxToolTip[] = {
    {sipName_Enable, SIP_MLMETH_CAST(meth_wxToolTip_Enable), METH_VARARGS|METH_KEYWORDS, doc_wxToolTip_Enable},
    {sipName_GetTip, meth_wxToolTip_GetTip, METH_VARARGS, doc_wxToolTip_GetTip},
    {sipName_GetWindow, meth_wxToolTip_GetWindow, METH_VARARGS, doc_wxToolTip_GetWindow},
    {sipName_SetAutoPop, SIP_MLMETH_CAST(meth_wxToolTip_SetAutoPop), METH_VARARGS|METH_KEYWORDS, doc_wxToolTip_SetAutoPop},
    {sipName_SetDelay, SIP_MLMETH_CAST(meth_wxToolTip_SetDelay), METH_VARARGS|METH_KEYWORDS, doc_wxToolTip_SetDelay},
    {sipName_SetMaxWidth, SIP_MLMETH_CAST(meth_wxToolTip_SetMaxWidth), METH_VARARGS|METH_KEYWORDS, doc_wxToolTip_SetMaxWidth},
    {sipName_SetReshow, SIP_MLMETH_CAST(meth_wxToolTip_SetReshow), METH_VARARGS|METH_KEYWORDS, doc_wxToolTip_SetReshow},
    {sipName_SetTip, SIP_MLMETH_CAST(meth_wxToolTip_SetTip), METH_VARARGS|METH_KEYWORDS, doc_wxToolTip_SetTip}
};

sipVariableDef variables_wxToolTip[] = {
    {PropertyVariable, sipName_Window, &methods_wxToolTip[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Tip, &methods_wxToolTip[1], &methods_wxToolTip[7], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxToolTip, "ToolTip(tip)\n"
"\n"
"This class holds information about a tooltip associated with a window\n"
"(see wxWindow::SetToolTip()).");


sipClassTypeDef sipTypeDef__core_wxToolTip = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxToolTip,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_ToolTip,
        {0, 0, 1},
        8, methods_wxToolTip,
        0, SIP_NULLPTR,
        2, variables_wxToolTip,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxToolTip,
    -1,
    -1,
    supers_wxToolTip,
    SIP_NULLPTR,
    init_type_wxToolTip,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxToolTip,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxToolTip,
    cast_wxToolTip,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
