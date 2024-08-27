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
        #include <wx/window.h>
        #include <wx/bitmap.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
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


class sipwxBufferedPaintDC : public  ::wxBufferedPaintDC
{
public:
    sipwxBufferedPaintDC( ::wxWindow*, ::wxBitmap&,int);
    sipwxBufferedPaintDC( ::wxWindow*,int);
    ~sipwxBufferedPaintDC();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxBufferedPaintDC(const sipwxBufferedPaintDC &);
    sipwxBufferedPaintDC &operator = (const sipwxBufferedPaintDC &);
};

sipwxBufferedPaintDC::sipwxBufferedPaintDC( ::wxWindow*window, ::wxBitmap& buffer,int style):  ::wxBufferedPaintDC(window,buffer,style), sipPySelf(SIP_NULLPTR)
{
}

sipwxBufferedPaintDC::sipwxBufferedPaintDC( ::wxWindow*window,int style):  ::wxBufferedPaintDC(window,style), sipPySelf(SIP_NULLPTR)
{
}

sipwxBufferedPaintDC::~sipwxBufferedPaintDC()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxBufferedPaintDC(void *, const sipTypeDef *);}
static void *cast_wxBufferedPaintDC(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxBufferedPaintDC *sipCpp = reinterpret_cast< ::wxBufferedPaintDC *>(sipCppV);

    if (targetType == sipType_wxBufferedPaintDC)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxBufferedDC)->ctd_cast(static_cast< ::wxBufferedDC *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxBufferedPaintDC(void *, int);}
static void release_wxBufferedPaintDC(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxBufferedPaintDC *>(sipCppV);
    else
        delete reinterpret_cast< ::wxBufferedPaintDC *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxBufferedPaintDC(sipSimpleWrapper *);}
static void dealloc_wxBufferedPaintDC(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxBufferedPaintDC *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxBufferedPaintDC(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxBufferedPaintDC(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxBufferedPaintDC(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxBufferedPaintDC *sipCpp = SIP_NULLPTR;

    {
         ::wxWindow* window;
         ::wxBitmap* buffer;
        PyObject *bufferKeep;
        int style = wxBUFFER_CLIENT_AREA;

        static const char *sipKwdList[] = {
            sipName_window,
            sipName_buffer,
            sipName_style,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8@J9|i", sipType_wxWindow, &window, &bufferKeep, sipType_wxBitmap, &buffer, &style))
        {
        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxBufferedPaintDC(window,*buffer,style);
            Py_END_ALLOW_THREADS

            sipKeepReference((PyObject *)sipSelf, -8, bufferKeep);

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
         ::wxWindow* window;
        int style = wxBUFFER_CLIENT_AREA;

        static const char *sipKwdList[] = {
            sipName_window,
            sipName_style,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|i", sipType_wxWindow, &window, &style))
        {
        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxBufferedPaintDC(window,style);
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

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxBufferedPaintDC[] = {{48, 255, 1}};

PyDoc_STRVAR(doc_wxBufferedPaintDC, "BufferedPaintDC(window, buffer, style=BUFFER_CLIENT_AREA)\n"
"BufferedPaintDC(window, style=BUFFER_CLIENT_AREA)\n"
"\n"
"This is a subclass of wxBufferedDC which can be used inside of an\n"
"EVT_PAINT() event handler to achieve double-buffered drawing.");


sipClassTypeDef sipTypeDef__core_wxBufferedPaintDC = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxBufferedPaintDC,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_BufferedPaintDC,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxBufferedPaintDC,
    -1,
    -1,
    supers_wxBufferedPaintDC,
    SIP_NULLPTR,
    init_type_wxBufferedPaintDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxBufferedPaintDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxBufferedPaintDC,
    cast_wxBufferedPaintDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
