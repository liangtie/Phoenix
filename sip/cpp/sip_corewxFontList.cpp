/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/font.h>
        #include <wx/font.h>
        #include <wx/font.h>


PyDoc_STRVAR(doc_wxFontList_FindOrCreateFont, "FindOrCreateFont(point_size, family, style, weight, underline=False, facename=EmptyString, encoding=FONTENCODING_DEFAULT) -> Font\n"
"FindOrCreateFont(fontInfo) -> Font\n"
"\n"
"Finds a font of the given specification, or creates one and adds it to\n"
"the list.\n"
"");

extern "C" {static PyObject *meth_wxFontList_FindOrCreateFont(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFontList_FindOrCreateFont(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int point_size;
         ::wxFontFamily family;
         ::wxFontStyle style;
         ::wxFontWeight weight;
        bool underline = 0;
        const  ::wxString& facenamedef = wxEmptyString;
        const  ::wxString* facename = &facenamedef;
        int facenameState = 0;
         ::wxFontEncoding encoding = wxFONTENCODING_DEFAULT;
         ::wxFontList *sipCpp;

        static const char *sipKwdList[] = {
            sipName_point_size,
            sipName_family,
            sipName_style,
            sipName_weight,
            sipName_underline,
            sipName_facename,
            sipName_encoding,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiEEE|bJ1E", &sipSelf, sipType_wxFontList, &sipCpp, &point_size, sipType_wxFontFamily, &family, sipType_wxFontStyle, &style, sipType_wxFontWeight, &weight, &underline, sipType_wxString, &facename, &facenameState, sipType_wxFontEncoding, &encoding))
        {
             ::wxFont*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->FindOrCreateFont(point_size,family,style,weight,underline,*facename,encoding);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(facename), sipType_wxString, facenameState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxFont,SIP_NULLPTR);
        }
    }

    {
        const  ::wxFontInfo* fontInfo;
         ::wxFontList *sipCpp;

        static const char *sipKwdList[] = {
            sipName_fontInfo,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxFontList, &sipCpp, sipType_wxFontInfo, &fontInfo))
        {
             ::wxFont*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->FindOrCreateFont(*fontInfo);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxFont,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FontList, sipName_FindOrCreateFont, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxFontList(void *, int);}
static void release_wxFontList(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxFontList *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxFontList(Py_ssize_t);}
static void *array_wxFontList(Py_ssize_t sipNrElem)
{
    return new  ::wxFontList[sipNrElem];
}


extern "C" {static void assign_wxFontList(void *, Py_ssize_t, void *);}
static void assign_wxFontList(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxFontList *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxFontList *>(sipSrc);
}


extern "C" {static void *copy_wxFontList(const void *, Py_ssize_t);}
static void *copy_wxFontList(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxFontList(reinterpret_cast<const  ::wxFontList *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxFontList(sipSimpleWrapper *);}
static void dealloc_wxFontList(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxFontList(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxFontList(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxFontList(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxFontList *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxFontList();
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
        const  ::wxFontList* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxFontList, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxFontList(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxFontList[] = {
    {sipName_FindOrCreateFont, SIP_MLMETH_CAST(meth_wxFontList_FindOrCreateFont), METH_VARARGS|METH_KEYWORDS, doc_wxFontList_FindOrCreateFont}
};

PyDoc_STRVAR(doc_wxFontList, "FontList()\n"
"\n"
"A font list is a list containing all fonts which have been created.");


sipClassTypeDef sipTypeDef__core_wxFontList = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxFontList,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FontList,
        {0, 0, 1},
        1, methods_wxFontList,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxFontList,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxFontList,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxFontList,
    assign_wxFontList,
    array_wxFontList,
    copy_wxFontList,
    release_wxFontList,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
