/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"
        #include <wx/propgrid/property.h>
        #include <wx/bmpbndl.h>
        #include <wx/colour.h>
        #include <wx/font.h>
        #include <wx/propgrid/property.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxPGCell : public  ::wxPGCell
{
public:
    sipwxPGCell();
    sipwxPGCell(const  ::wxPGCell&);
    sipwxPGCell(const  ::wxString&,const  ::wxBitmapBundle&,const  ::wxColour&,const  ::wxColour&);
    ~sipwxPGCell();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPGCell(const sipwxPGCell &);
    sipwxPGCell &operator = (const sipwxPGCell &);
};

sipwxPGCell::sipwxPGCell():  ::wxPGCell(), sipPySelf(SIP_NULLPTR)
{
}

sipwxPGCell::sipwxPGCell(const  ::wxPGCell& other):  ::wxPGCell(other), sipPySelf(SIP_NULLPTR)
{
}

sipwxPGCell::sipwxPGCell(const  ::wxString& text,const  ::wxBitmapBundle& bitmap,const  ::wxColour& fgCol,const  ::wxColour& bgCol):  ::wxPGCell(text,bitmap,fgCol,bgCol), sipPySelf(SIP_NULLPTR)
{
}

sipwxPGCell::~sipwxPGCell()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_wxPGCell_GetData, "GetData() -> PGCellData");

extern "C" {static PyObject *meth_wxPGCell_GetData(PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_GetData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPGCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGCell, &sipCpp))
        {
             ::wxPGCellData*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetData();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPGCellData,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_GetData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_HasText, "HasText() -> bool\n"
"\n"
"Returns true if this cell has custom text stored within.");

extern "C" {static PyObject *meth_wxPGCell_HasText(PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_HasText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGCell, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->HasText();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_HasText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_SetEmptyData, "SetEmptyData()\n"
"\n"
"Sets empty but valid data to this cell object.");

extern "C" {static PyObject *meth_wxPGCell_SetEmptyData(PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_SetEmptyData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPGCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGCell, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetEmptyData();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_SetEmptyData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_MergeFrom, "MergeFrom(srcCell)\n"
"\n"
"Merges valid data from srcCell into this.");

extern "C" {static PyObject *meth_wxPGCell_MergeFrom(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_MergeFrom(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGCell* srcCell;
         ::wxPGCell *sipCpp;

        static const char *sipKwdList[] = {
            sipName_srcCell,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxPGCell, &sipCpp, sipType_wxPGCell, &srcCell))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->MergeFrom(*srcCell);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_MergeFrom, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_SetText, "SetText(text)");

extern "C" {static PyObject *meth_wxPGCell_SetText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_SetText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* text;
        int textState = 0;
         ::wxPGCell *sipCpp;

        static const char *sipKwdList[] = {
            sipName_text,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPGCell, &sipCpp, sipType_wxString, &text, &textState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetText(*text);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text), sipType_wxString, textState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_SetText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_SetBitmap, "SetBitmap(bitmap)");

extern "C" {static PyObject *meth_wxPGCell_SetBitmap(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_SetBitmap(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxBitmapBundle* bitmap;
        int bitmapState = 0;
         ::wxPGCell *sipCpp;

        static const char *sipKwdList[] = {
            sipName_bitmap,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPGCell, &sipCpp, sipType_wxBitmapBundle, &bitmap, &bitmapState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetBitmap(*bitmap);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxBitmapBundle *>(bitmap), sipType_wxBitmapBundle, bitmapState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_SetBitmap, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_SetFgCol, "SetFgCol(col)");

extern "C" {static PyObject *meth_wxPGCell_SetFgCol(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_SetFgCol(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxColour* col;
        int colState = 0;
         ::wxPGCell *sipCpp;

        static const char *sipKwdList[] = {
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPGCell, &sipCpp, sipType_wxColour, &col, &colState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFgCol(*col);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(col), sipType_wxColour, colState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_SetFgCol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_SetFont, "SetFont(font)\n"
"\n"
"Sets font of the cell.");

extern "C" {static PyObject *meth_wxPGCell_SetFont(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_SetFont(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFont* font;
         ::wxPGCell *sipCpp;

        static const char *sipKwdList[] = {
            sipName_font,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxPGCell, &sipCpp, sipType_wxFont, &font))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFont(*font);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_SetFont, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_SetBgCol, "SetBgCol(col)");

extern "C" {static PyObject *meth_wxPGCell_SetBgCol(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_SetBgCol(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxColour* col;
        int colState = 0;
         ::wxPGCell *sipCpp;

        static const char *sipKwdList[] = {
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPGCell, &sipCpp, sipType_wxColour, &col, &colState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetBgCol(*col);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(col), sipType_wxColour, colState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_SetBgCol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_GetText, "GetText() -> String");

extern "C" {static PyObject *meth_wxPGCell_GetText(PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_GetText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGCell, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetText());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_GetText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_GetBitmap, "GetBitmap() -> wx.BitmapBundle");

extern "C" {static PyObject *meth_wxPGCell_GetBitmap(PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_GetBitmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGCell, &sipCpp))
        {
             ::wxBitmapBundle*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxBitmapBundle(sipCpp->GetBitmap());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxBitmapBundle,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_GetBitmap, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_GetFgCol, "GetFgCol() -> wx.Colour");

extern "C" {static PyObject *meth_wxPGCell_GetFgCol(PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_GetFgCol(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGCell, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetFgCol());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_GetFgCol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_GetFont, "GetFont() -> wx.Font\n"
"\n"
"Returns font of the cell.");

extern "C" {static PyObject *meth_wxPGCell_GetFont(PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_GetFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGCell, &sipCpp))
        {
             ::wxFont*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxFont(sipCpp->GetFont());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxFont,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_GetFont, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCell_GetBgCol, "GetBgCol() -> wx.Colour");

extern "C" {static PyObject *meth_wxPGCell_GetBgCol(PyObject *, PyObject *);}
static PyObject *meth_wxPGCell_GetBgCol(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGCell, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetBgCol());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGCell, sipName_GetBgCol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPGCell(void *, const sipTypeDef *);}
static void *cast_wxPGCell(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPGCell *sipCpp = reinterpret_cast< ::wxPGCell *>(sipCppV);

    if (targetType == sipType_wxPGCell)
        return sipCppV;

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPGCell(void *, int);}
static void release_wxPGCell(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPGCell *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPGCell *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxPGCell(Py_ssize_t);}
static void *array_wxPGCell(Py_ssize_t sipNrElem)
{
    return new  ::wxPGCell[sipNrElem];
}


extern "C" {static void assign_wxPGCell(void *, Py_ssize_t, void *);}
static void assign_wxPGCell(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPGCell *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPGCell *>(sipSrc);
}


extern "C" {static void *copy_wxPGCell(const void *, Py_ssize_t);}
static void *copy_wxPGCell(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxPGCell(reinterpret_cast<const  ::wxPGCell *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPGCell(sipSimpleWrapper *);}
static void dealloc_wxPGCell(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPGCell *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPGCell(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPGCell(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPGCell(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPGCell *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPGCell();
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
        const  ::wxPGCell* other;

        static const char *sipKwdList[] = {
            sipName_other,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxPGCell, &other))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPGCell(*other);
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
        const  ::wxString* text;
        int textState = 0;
        const  ::wxBitmapBundle& bitmapdef = wxBitmapBundle();
        const  ::wxBitmapBundle* bitmap = &bitmapdef;
        int bitmapState = 0;
        const  ::wxColour& fgColdef = wxNullColour;
        const  ::wxColour* fgCol = &fgColdef;
        int fgColState = 0;
        const  ::wxColour& bgColdef = wxNullColour;
        const  ::wxColour* bgCol = &bgColdef;
        int bgColState = 0;

        static const char *sipKwdList[] = {
            sipName_text,
            sipName_bitmap,
            sipName_fgCol,
            sipName_bgCol,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1J1J1", sipType_wxString, &text, &textState, sipType_wxBitmapBundle, &bitmap, &bitmapState, sipType_wxColour, &fgCol, &fgColState, sipType_wxColour, &bgCol, &bgColState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPGCell(*text,*bitmap,*fgCol,*bgCol);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text), sipType_wxString, textState);
            sipReleaseType(const_cast< ::wxBitmapBundle *>(bitmap), sipType_wxBitmapBundle, bitmapState);
            sipReleaseType(const_cast< ::wxColour *>(fgCol), sipType_wxColour, fgColState);
            sipReleaseType(const_cast< ::wxColour *>(bgCol), sipType_wxColour, bgColState);

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
static sipEncodedTypeDef supers_wxPGCell[] = {{20, 0, 1}};


static PyMethodDef methods_wxPGCell[] = {
    {sipName_GetBgCol, meth_wxPGCell_GetBgCol, METH_VARARGS, doc_wxPGCell_GetBgCol},
    {sipName_GetBitmap, meth_wxPGCell_GetBitmap, METH_VARARGS, doc_wxPGCell_GetBitmap},
    {sipName_GetData, meth_wxPGCell_GetData, METH_VARARGS, doc_wxPGCell_GetData},
    {sipName_GetFgCol, meth_wxPGCell_GetFgCol, METH_VARARGS, doc_wxPGCell_GetFgCol},
    {sipName_GetFont, meth_wxPGCell_GetFont, METH_VARARGS, doc_wxPGCell_GetFont},
    {sipName_GetText, meth_wxPGCell_GetText, METH_VARARGS, doc_wxPGCell_GetText},
    {sipName_HasText, meth_wxPGCell_HasText, METH_VARARGS, doc_wxPGCell_HasText},
    {sipName_MergeFrom, SIP_MLMETH_CAST(meth_wxPGCell_MergeFrom), METH_VARARGS|METH_KEYWORDS, doc_wxPGCell_MergeFrom},
    {sipName_SetBgCol, SIP_MLMETH_CAST(meth_wxPGCell_SetBgCol), METH_VARARGS|METH_KEYWORDS, doc_wxPGCell_SetBgCol},
    {sipName_SetBitmap, SIP_MLMETH_CAST(meth_wxPGCell_SetBitmap), METH_VARARGS|METH_KEYWORDS, doc_wxPGCell_SetBitmap},
    {sipName_SetEmptyData, meth_wxPGCell_SetEmptyData, METH_VARARGS, doc_wxPGCell_SetEmptyData},
    {sipName_SetFgCol, SIP_MLMETH_CAST(meth_wxPGCell_SetFgCol), METH_VARARGS|METH_KEYWORDS, doc_wxPGCell_SetFgCol},
    {sipName_SetFont, SIP_MLMETH_CAST(meth_wxPGCell_SetFont), METH_VARARGS|METH_KEYWORDS, doc_wxPGCell_SetFont},
    {sipName_SetText, SIP_MLMETH_CAST(meth_wxPGCell_SetText), METH_VARARGS|METH_KEYWORDS, doc_wxPGCell_SetText}
};

sipVariableDef variables_wxPGCell[] = {
    {PropertyVariable, sipName_Text, &methods_wxPGCell[5], &methods_wxPGCell[13], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Font, &methods_wxPGCell[4], &methods_wxPGCell[12], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FgCol, &methods_wxPGCell[3], &methods_wxPGCell[11], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Data, &methods_wxPGCell[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Bitmap, &methods_wxPGCell[1], &methods_wxPGCell[9], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_BgCol, &methods_wxPGCell[0], &methods_wxPGCell[8], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPGCell, "PGCell()\n"
"PGCell(other)\n"
"PGCell(text, bitmap=wx.BitmapBundle(), fgCol=wx.NullColour, bgCol=wx.NullColour)\n"
"\n"
"Base class for wxPropertyGrid cell information.");


sipClassTypeDef sipTypeDef__propgrid_wxPGCell = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxPGCell,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_PGCell,
        {0, 0, 1},
        14, methods_wxPGCell,
        0, SIP_NULLPTR,
        6, variables_wxPGCell,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPGCell,
    -1,
    -1,
    supers_wxPGCell,
    SIP_NULLPTR,
    init_type_wxPGCell,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxPGCell,
    assign_wxPGCell,
    array_wxPGCell,
    copy_wxPGCell,
    release_wxPGCell,
    cast_wxPGCell,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
