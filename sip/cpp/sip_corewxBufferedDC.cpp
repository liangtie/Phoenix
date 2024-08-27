/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/dcbuffer.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/bitmap.h>
    #include <wx/setup.h>
    #include <wxPython/wxpy_api.h>
        #include <wx/graphics.h>
        #include <wx/gdicmn.h>
        #include <wx/palette.h>
        #include <wx/gdicmn.h>
        #include <wx/colour.h>
        #include <wx/affinematrix2d.h>
        #include <wx/pen.h>
        #include "arrayholder.h"
        #include <wx/brush.h>
        #include <wx/font.h>
        #include <wx/dc.h>
        #include <wx/region.h>
        #include <wx/icon.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxBufferedDC : public  ::wxBufferedDC
{
public:
    sipwxBufferedDC();
    sipwxBufferedDC( ::wxDC*,const  ::wxSize&,int);
    sipwxBufferedDC( ::wxDC*, ::wxBitmap&,int);
    ~sipwxBufferedDC();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxBufferedDC(const sipwxBufferedDC &);
    sipwxBufferedDC &operator = (const sipwxBufferedDC &);
};

sipwxBufferedDC::sipwxBufferedDC():  ::wxBufferedDC(), sipPySelf(SIP_NULLPTR)
{
}

sipwxBufferedDC::sipwxBufferedDC( ::wxDC*dc,const  ::wxSize& area,int style):  ::wxBufferedDC(dc,area,style), sipPySelf(SIP_NULLPTR)
{
}

sipwxBufferedDC::sipwxBufferedDC( ::wxDC*dc, ::wxBitmap& buffer,int style):  ::wxBufferedDC(dc,buffer,style), sipPySelf(SIP_NULLPTR)
{
}

sipwxBufferedDC::~sipwxBufferedDC()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_wxBufferedDC_Init, "Init(dc, area, style=BUFFER_CLIENT_AREA)\n"
"Init(dc, buffer=NullBitmap, style=BUFFER_CLIENT_AREA)\n"
"\n"
"Initializes the object created using the default constructor.\n"
"");

extern "C" {static PyObject *meth_wxBufferedDC_Init(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBufferedDC_Init(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDC* dc;
        PyObject *dcKeep;
        const  ::wxSize* area;
        int areaState = 0;
        int style = wxBUFFER_CLIENT_AREA;
         ::wxBufferedDC *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_area,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B@J8J1|i", &sipSelf, sipType_wxBufferedDC, &sipCpp, &dcKeep, sipType_wxDC, &dc, sipType_wxSize, &area, &areaState, &style))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Init(dc,*area,style);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -5, dcKeep);
            sipReleaseType(const_cast< ::wxSize *>(area), sipType_wxSize, areaState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::wxDC* dc;
        PyObject *dcKeep;
         ::wxBitmap& bufferdef = wxNullBitmap;
         ::wxBitmap* buffer = &bufferdef;
        PyObject *bufferKeep = 0;
        int style = wxBUFFER_CLIENT_AREA;
         ::wxBufferedDC *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_buffer,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B@J8|@J9i", &sipSelf, sipType_wxBufferedDC, &sipCpp, &dcKeep, sipType_wxDC, &dc, &bufferKeep, sipType_wxBitmap, &buffer, &style))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Init(dc,*buffer,style);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -6, dcKeep);

            sipKeepReference(sipSelf, -7, bufferKeep);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_BufferedDC, sipName_Init, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBufferedDC_UnMask, "UnMask()\n"
"\n"
"Blits the buffer to the dc, and detaches the dc from the buffer (so it\n"
"can be effectively used once only).");

extern "C" {static PyObject *meth_wxBufferedDC_UnMask(PyObject *, PyObject *);}
static PyObject *meth_wxBufferedDC_UnMask(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxBufferedDC *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxBufferedDC, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->UnMask();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_BufferedDC, sipName_UnMask, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBufferedDC_SetStyle, "SetStyle(style)\n"
"\n"
"Set the style.");

extern "C" {static PyObject *meth_wxBufferedDC_SetStyle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBufferedDC_SetStyle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int style;
         ::wxBufferedDC *sipCpp;

        static const char *sipKwdList[] = {
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxBufferedDC, &sipCpp, &style))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetStyle(style);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_BufferedDC, sipName_SetStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBufferedDC_GetStyle, "GetStyle() -> int\n"
"\n"
"Get the style.");

extern "C" {static PyObject *meth_wxBufferedDC_GetStyle(PyObject *, PyObject *);}
static PyObject *meth_wxBufferedDC_GetStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxBufferedDC *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxBufferedDC, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetStyle();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BufferedDC, sipName_GetStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxBufferedDC(void *, const sipTypeDef *);}
static void *cast_wxBufferedDC(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxBufferedDC *sipCpp = reinterpret_cast< ::wxBufferedDC *>(sipCppV);

    if (targetType == sipType_wxBufferedDC)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxMemoryDC)->ctd_cast(static_cast< ::wxMemoryDC *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxBufferedDC(void *, int);}
static void release_wxBufferedDC(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxBufferedDC *>(sipCppV);
    else
        delete reinterpret_cast< ::wxBufferedDC *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxBufferedDC(Py_ssize_t);}
static void *array_wxBufferedDC(Py_ssize_t sipNrElem)
{
    return new  ::wxBufferedDC[sipNrElem];
}


extern "C" {static void dealloc_wxBufferedDC(sipSimpleWrapper *);}
static void dealloc_wxBufferedDC(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxBufferedDC *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxBufferedDC(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxBufferedDC(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxBufferedDC(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxBufferedDC *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxBufferedDC();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::wxDC* dc;
        PyObject *dcKeep;
        const  ::wxSize* area;
        int areaState = 0;
        int style = wxBUFFER_CLIENT_AREA;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_area,
            sipName_style,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "@J8J1|i", &dcKeep, sipType_wxDC, &dc, sipType_wxSize, &area, &areaState, &style))
        {
        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxBufferedDC(dc,*area,style);
            Py_END_ALLOW_THREADS

            sipKeepReference((PyObject *)sipSelf, -2, dcKeep);
            sipReleaseType(const_cast< ::wxSize *>(area), sipType_wxSize, areaState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::wxDC* dc;
        PyObject *dcKeep;
         ::wxBitmap& bufferdef = wxNullBitmap;
         ::wxBitmap* buffer = &bufferdef;
        PyObject *bufferKeep = 0;
        int style = wxBUFFER_CLIENT_AREA;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_buffer,
            sipName_style,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "@J8|@J9i", &dcKeep, sipType_wxDC, &dc, &bufferKeep, sipType_wxBitmap, &buffer, &style))
        {
        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxBufferedDC(dc,*buffer,style);
            Py_END_ALLOW_THREADS

            sipKeepReference((PyObject *)sipSelf, -3, dcKeep);

            sipKeepReference((PyObject *)sipSelf, -4, bufferKeep);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxBufferedDC[] = {{354, 255, 1}};


static PyMethodDef methods_wxBufferedDC[] = {
    {sipName_GetStyle, meth_wxBufferedDC_GetStyle, METH_VARARGS, doc_wxBufferedDC_GetStyle},
    {sipName_Init, SIP_MLMETH_CAST(meth_wxBufferedDC_Init), METH_VARARGS|METH_KEYWORDS, doc_wxBufferedDC_Init},
    {sipName_SetStyle, SIP_MLMETH_CAST(meth_wxBufferedDC_SetStyle), METH_VARARGS|METH_KEYWORDS, doc_wxBufferedDC_SetStyle},
    {sipName_UnMask, meth_wxBufferedDC_UnMask, METH_VARARGS, doc_wxBufferedDC_UnMask}
};

sipVariableDef variables_wxBufferedDC[] = {
    {PropertyVariable, sipName_Style, &methods_wxBufferedDC[0], &methods_wxBufferedDC[2], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxBufferedDC, "BufferedDC()\n"
"BufferedDC(dc, area, style=BUFFER_CLIENT_AREA)\n"
"BufferedDC(dc, buffer=NullBitmap, style=BUFFER_CLIENT_AREA)\n"
"\n"
"This class provides a simple way to avoid flicker: when drawing on it,\n"
"everything is in fact first drawn on an in-memory buffer (a wxBitmap)\n"
"and then copied to the screen, using the associated wxDC, only once,\n"
"when this object is destroyed.");


sipClassTypeDef sipTypeDef__core_wxBufferedDC = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxBufferedDC,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_BufferedDC,
        {0, 0, 1},
        4, methods_wxBufferedDC,
        0, SIP_NULLPTR,
        1, variables_wxBufferedDC,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxBufferedDC,
    -1,
    -1,
    supers_wxBufferedDC,
    SIP_NULLPTR,
    init_type_wxBufferedDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxBufferedDC,
    SIP_NULLPTR,
    array_wxBufferedDC,
    SIP_NULLPTR,
    release_wxBufferedDC,
    cast_wxBufferedDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
