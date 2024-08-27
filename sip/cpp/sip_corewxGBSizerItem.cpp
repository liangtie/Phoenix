/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/gbsizer.h>
        #include <wx/gbsizer.h>
        #include <wx/gbsizer.h>
        #include <wx/window.h>
        #include <wx/sizer.h>
        #include <wx/gbsizer.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


PyDoc_STRVAR(doc_wxGBSizerItem_GetPos, "GetPos() -> GBPosition\n"
"\n"
"Get the grid position of the item.");

extern "C" {static PyObject *meth_wxGBSizerItem_GetPos(PyObject *, PyObject *);}
static PyObject *meth_wxGBSizerItem_GetPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBSizerItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGBSizerItem, &sipCpp))
        {
             ::wxGBPosition*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxGBPosition(sipCpp->GetPos());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGBPosition,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_GBSizerItem, sipName_GetPos, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBSizerItem_GetSpan, "GetSpan() -> GBSpan\n"
"\n"
"Get the row and column spanning of the item.");

extern "C" {static PyObject *meth_wxGBSizerItem_GetSpan(PyObject *, PyObject *);}
static PyObject *meth_wxGBSizerItem_GetSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBSizerItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGBSizerItem, &sipCpp))
        {
             ::wxGBSpan*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxGBSpan(sipCpp->GetSpan());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGBSpan,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_GBSizerItem, sipName_GetSpan, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBSizerItem_GetEndPos, "GetEndPos() -> (row, col)\n"
"\n"
"Get the row and column of the endpoint of this item.");

extern "C" {static PyObject *meth_wxGBSizerItem_GetEndPos(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGBSizerItem_GetEndPos(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int row;
        int col;
         ::wxGBSizerItem *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "B", &sipSelf, sipType_wxGBSizerItem, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->GetEndPos(row,col);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(ii)",row,col);
        }
    }

    sipNoMethod(sipParseErr, sipName_GBSizerItem, sipName_GetEndPos, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBSizerItem_Intersects, "Intersects(other) -> bool\n"
"Intersects(pos, span) -> bool\n"
"\n"
"Returns true if this item and the other item intersect.\n"
"");

extern "C" {static PyObject *meth_wxGBSizerItem_Intersects(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGBSizerItem_Intersects(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBSizerItem* other;
         ::wxGBSizerItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_other,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxGBSizerItem, &sipCpp, sipType_wxGBSizerItem, &other))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Intersects(*other);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::wxGBPosition* pos;
        int posState = 0;
        const  ::wxGBSpan* span;
        int spanState = 0;
         ::wxGBSizerItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pos,
            sipName_span,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1J1", &sipSelf, sipType_wxGBSizerItem, &sipCpp, sipType_wxGBPosition, &pos, &posState, sipType_wxGBSpan, &span, &spanState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Intersects(*pos,*span);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxGBPosition *>(pos), sipType_wxGBPosition, posState);
            sipReleaseType(const_cast< ::wxGBSpan *>(span), sipType_wxGBSpan, spanState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_GBSizerItem, sipName_Intersects, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBSizerItem_SetPos, "SetPos(pos) -> bool\n"
"\n"
"If the item is already a member of a sizer then first ensure that\n"
"there is no other item that would intersect with this one at the new\n"
"position, then set the new position.");

extern "C" {static PyObject *meth_wxGBSizerItem_SetPos(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGBSizerItem_SetPos(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBPosition* pos;
        int posState = 0;
         ::wxGBSizerItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pos,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxGBSizerItem, &sipCpp, sipType_wxGBPosition, &pos, &posState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->SetPos(*pos);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxGBPosition *>(pos), sipType_wxGBPosition, posState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_GBSizerItem, sipName_SetPos, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBSizerItem_SetSpan, "SetSpan(span) -> bool\n"
"\n"
"If the item is already a member of a sizer then first ensure that\n"
"there is no other item that would intersect with this one with its new\n"
"spanning size, then set the new spanning.");

extern "C" {static PyObject *meth_wxGBSizerItem_SetSpan(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGBSizerItem_SetSpan(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBSpan* span;
        int spanState = 0;
         ::wxGBSizerItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_span,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxGBSizerItem, &sipCpp, sipType_wxGBSpan, &span, &spanState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->SetSpan(*span);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxGBSpan *>(span), sipType_wxGBSpan, spanState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_GBSizerItem, sipName_SetSpan, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBSizerItem_GetGBSizer, "GetGBSizer() -> GridBagSizer");

extern "C" {static PyObject *meth_wxGBSizerItem_GetGBSizer(PyObject *, PyObject *);}
static PyObject *meth_wxGBSizerItem_GetGBSizer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBSizerItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGBSizerItem, &sipCpp))
        {
             ::wxGridBagSizer*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetGBSizer();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxGridBagSizer,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_GBSizerItem, sipName_GetGBSizer, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBSizerItem_SetGBSizer, "SetGBSizer(sizer)");

extern "C" {static PyObject *meth_wxGBSizerItem_SetGBSizer(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGBSizerItem_SetGBSizer(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxGridBagSizer* sizer;
         ::wxGBSizerItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_sizer,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxGBSizerItem, &sipCpp, sipType_wxGridBagSizer, &sizer))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetGBSizer(sizer);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GBSizerItem, sipName_SetGBSizer, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGBSizerItem(void *, const sipTypeDef *);}
static void *cast_wxGBSizerItem(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGBSizerItem *sipCpp = reinterpret_cast< ::wxGBSizerItem *>(sipCppV);

    if (targetType == sipType_wxGBSizerItem)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxSizerItem)->ctd_cast(static_cast< ::wxSizerItem *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGBSizerItem(void *, int);}
static void release_wxGBSizerItem(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGBSizerItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxGBSizerItem(sipSimpleWrapper *);}
static void dealloc_wxGBSizerItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGBSizerItem(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGBSizerItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGBSizerItem(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGBSizerItem *sipCpp = SIP_NULLPTR;

    {
        int width;
        int height;
        const  ::wxGBPosition* pos;
        int posState = 0;
        const  ::wxGBSpan& spandef = wxDefaultSpan;
        const  ::wxGBSpan* span = &spandef;
        int spanState = 0;
        int flag = 0;
        int border = 0;
         ::wxPyUserData* userData = 0;
        int userDataState = 0;

        static const char *sipKwdList[] = {
            sipName_width,
            sipName_height,
            sipName_pos,
            sipName_span,
            sipName_flag,
            sipName_border,
            sipName_userData,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "#iiJ1|J1iiJ2", sipSelf, &width, &height, sipType_wxGBPosition, &pos, &posState, sipType_wxGBSpan, &span, &spanState, &flag, &border, sipType_wxPyUserData, &userData, &userDataState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGBSizerItem(width,height,*pos,*span,flag,border,userData);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxGBPosition *>(pos), sipType_wxGBPosition, posState);
            sipReleaseType(const_cast< ::wxGBSpan *>(span), sipType_wxGBSpan, spanState);
            sipReleaseType(userData, sipType_wxPyUserData, userDataState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
         ::wxWindow* window;
        const  ::wxGBPosition* pos;
        int posState = 0;
        const  ::wxGBSpan& spandef = wxDefaultSpan;
        const  ::wxGBSpan* span = &spandef;
        int spanState = 0;
        int flag = 0;
        int border = 0;
         ::wxPyUserData* userData = 0;
        int userDataState = 0;

        static const char *sipKwdList[] = {
            sipName_window,
            sipName_pos,
            sipName_span,
            sipName_flag,
            sipName_border,
            sipName_userData,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "#J8J1|J1iiJ2", sipSelf, sipType_wxWindow, &window, sipType_wxGBPosition, &pos, &posState, sipType_wxGBSpan, &span, &spanState, &flag, &border, sipType_wxPyUserData, &userData, &userDataState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGBSizerItem(window,*pos,*span,flag,border,userData);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxGBPosition *>(pos), sipType_wxGBPosition, posState);
            sipReleaseType(const_cast< ::wxGBSpan *>(span), sipType_wxGBSpan, spanState);
            sipReleaseType(userData, sipType_wxPyUserData, userDataState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
         ::wxSizer* sizer;
        const  ::wxGBPosition* pos;
        int posState = 0;
        const  ::wxGBSpan& spandef = wxDefaultSpan;
        const  ::wxGBSpan* span = &spandef;
        int spanState = 0;
        int flag = 0;
        int border = 0;
         ::wxPyUserData* userData = 0;
        int userDataState = 0;

        static const char *sipKwdList[] = {
            sipName_sizer,
            sipName_pos,
            sipName_span,
            sipName_flag,
            sipName_border,
            sipName_userData,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "#J:J1|J1iiJ2", sipSelf, sipType_wxSizer, &sizer, sipType_wxGBPosition, &pos, &posState, sipType_wxGBSpan, &span, &spanState, &flag, &border, sipType_wxPyUserData, &userData, &userDataState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGBSizerItem(sizer,*pos,*span,flag,border,userData);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxGBPosition *>(pos), sipType_wxGBPosition, posState);
            sipReleaseType(const_cast< ::wxGBSpan *>(span), sipType_wxGBSpan, spanState);
            sipReleaseType(userData, sipType_wxPyUserData, userDataState);

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
static sipEncodedTypeDef supers_wxGBSizerItem[] = {{515, 255, 1}};


static PyMethodDef methods_wxGBSizerItem[] = {
    {sipName_GetEndPos, SIP_MLMETH_CAST(meth_wxGBSizerItem_GetEndPos), METH_VARARGS|METH_KEYWORDS, doc_wxGBSizerItem_GetEndPos},
    {sipName_GetGBSizer, meth_wxGBSizerItem_GetGBSizer, METH_VARARGS, doc_wxGBSizerItem_GetGBSizer},
    {sipName_GetPos, meth_wxGBSizerItem_GetPos, METH_VARARGS, doc_wxGBSizerItem_GetPos},
    {sipName_GetSpan, meth_wxGBSizerItem_GetSpan, METH_VARARGS, doc_wxGBSizerItem_GetSpan},
    {sipName_Intersects, SIP_MLMETH_CAST(meth_wxGBSizerItem_Intersects), METH_VARARGS|METH_KEYWORDS, doc_wxGBSizerItem_Intersects},
    {sipName_SetGBSizer, SIP_MLMETH_CAST(meth_wxGBSizerItem_SetGBSizer), METH_VARARGS|METH_KEYWORDS, doc_wxGBSizerItem_SetGBSizer},
    {sipName_SetPos, SIP_MLMETH_CAST(meth_wxGBSizerItem_SetPos), METH_VARARGS|METH_KEYWORDS, doc_wxGBSizerItem_SetPos},
    {sipName_SetSpan, SIP_MLMETH_CAST(meth_wxGBSizerItem_SetSpan), METH_VARARGS|METH_KEYWORDS, doc_wxGBSizerItem_SetSpan}
};

sipVariableDef variables_wxGBSizerItem[] = {
    {PropertyVariable, sipName_Span, &methods_wxGBSizerItem[3], &methods_wxGBSizerItem[7], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Pos, &methods_wxGBSizerItem[2], &methods_wxGBSizerItem[6], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_GBSizer, &methods_wxGBSizerItem[1], &methods_wxGBSizerItem[5], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxGBSizerItem, "GBSizerItem(width, height, pos, span=DefaultSpan, flag=0, border=0, userData=None)\n"
"GBSizerItem(window, pos, span=DefaultSpan, flag=0, border=0, userData=None)\n"
"GBSizerItem(sizer, pos, span=DefaultSpan, flag=0, border=0, userData=None)\n"
"\n"
"The wxGBSizerItem class is used by the wxGridBagSizer for tracking the\n"
"items in the sizer.");


sipClassTypeDef sipTypeDef__core_wxGBSizerItem = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxGBSizerItem,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_GBSizerItem,
        {0, 0, 1},
        8, methods_wxGBSizerItem,
        0, SIP_NULLPTR,
        3, variables_wxGBSizerItem,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGBSizerItem,
    -1,
    -1,
    supers_wxGBSizerItem,
    SIP_NULLPTR,
    init_type_wxGBSizerItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxGBSizerItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxGBSizerItem,
    cast_wxGBSizerItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
