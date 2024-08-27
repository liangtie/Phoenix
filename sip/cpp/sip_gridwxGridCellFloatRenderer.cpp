/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_grid.h"
        #include <wx/grid.h>
        #include <wx/gdicmn.h>
        #include <wx/grid.h>
        #include <wx/grid.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/grid.h>


class sipwxGridCellFloatRenderer : public  ::wxGridCellFloatRenderer
{
public:
    sipwxGridCellFloatRenderer(int,int,int);
    virtual ~sipwxGridCellFloatRenderer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void SetParameters(const  ::wxString&) SIP_OVERRIDE;
     ::wxSize GetMaxBestSize( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&) SIP_OVERRIDE;
    int GetBestWidth( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int) SIP_OVERRIDE;
    int GetBestHeight( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int) SIP_OVERRIDE;
     ::wxSize GetBestSize( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int) SIP_OVERRIDE;
    void Draw( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,const  ::wxRect&,int,int,bool) SIP_OVERRIDE;
     ::wxGridCellRenderer* Clone() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxGridCellFloatRenderer(const sipwxGridCellFloatRenderer &);
    sipwxGridCellFloatRenderer &operator = (const sipwxGridCellFloatRenderer &);

    char sipPyMethods[7];
};

sipwxGridCellFloatRenderer::sipwxGridCellFloatRenderer(int width,int precision,int format):  ::wxGridCellFloatRenderer(width,precision,format), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridCellFloatRenderer::~sipwxGridCellFloatRenderer()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxGridCellFloatRenderer::SetParameters(const  ::wxString& params)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_SetParameters);

    if (!sipMeth)
    {
         ::wxGridCellFloatRenderer::SetParameters(params);
        return;
    }

    extern void sipVH__grid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__grid_5(sipGILState, 0, sipPySelf, sipMeth, params);
}

 ::wxSize sipwxGridCellFloatRenderer::GetMaxBestSize( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_GetMaxBestSize);

    if (!sipMeth)
        return  ::wxGridCellFloatRenderer::GetMaxBestSize(grid,attr,dc);

    extern  ::wxSize sipVH__grid_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&);

    return sipVH__grid_4(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc);
}

int sipwxGridCellFloatRenderer::GetBestWidth( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,int row,int col,int height)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_GetBestWidth);

    if (!sipMeth)
        return  ::wxGridCellFloatRenderer::GetBestWidth(grid,attr,dc,row,col,height);

    extern int sipVH__grid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int);

    return sipVH__grid_3(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, row, col, height);
}

int sipwxGridCellFloatRenderer::GetBestHeight( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,int row,int col,int width)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_GetBestHeight);

    if (!sipMeth)
        return  ::wxGridCellFloatRenderer::GetBestHeight(grid,attr,dc,row,col,width);

    extern int sipVH__grid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int);

    return sipVH__grid_3(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, row, col, width);
}

 ::wxSize sipwxGridCellFloatRenderer::GetBestSize( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,int row,int col)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[4], &sipPySelf, SIP_NULLPTR, sipName_GetBestSize);

    if (!sipMeth)
        return  ::wxGridCellFloatRenderer::GetBestSize(grid,attr,dc,row,col);

    extern  ::wxSize sipVH__grid_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int);

    return sipVH__grid_2(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, row, col);
}

void sipwxGridCellFloatRenderer::Draw( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,const  ::wxRect& rect,int row,int col,bool isSelected)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[5], &sipPySelf, SIP_NULLPTR, sipName_Draw);

    if (!sipMeth)
    {
         ::wxGridCellFloatRenderer::Draw(grid,attr,dc,rect,row,col,isSelected);
        return;
    }

    extern void sipVH__grid_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,const  ::wxRect&,int,int,bool);

    sipVH__grid_1(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, rect, row, col, isSelected);
}

 ::wxGridCellRenderer* sipwxGridCellFloatRenderer::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[6]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::wxGridCellFloatRenderer::Clone();

    extern  ::wxGridCellRenderer* sipVH__grid_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_0(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_GetFormat, "GetFormat() -> int\n"
"\n"
"Returns the specifier used to format the data to string.");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_GetFormat(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_GetFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridCellFloatRenderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetFormat();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_GetFormat, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_GetPrecision, "GetPrecision() -> int\n"
"\n"
"Returns the precision.");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_GetPrecision(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_GetPrecision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridCellFloatRenderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetPrecision();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_GetPrecision, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_GetWidth, "GetWidth() -> int\n"
"\n"
"Returns the width.");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_GetWidth(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_GetWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridCellFloatRenderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetWidth();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_GetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_SetFormat, "SetFormat(format)\n"
"\n"
"Set the format to use for display the number.");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_SetFormat(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_SetFormat(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int format;
         ::wxGridCellFloatRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp, &format))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFormat(format);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_SetFormat, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_SetParameters, "SetParameters(params)\n"
"\n"
"The parameters string format is \"width[,precision[,format]]\" where\n"
"format should be chosen between f|e|g|E|G (f is used by default)");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_SetParameters(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_SetParameters(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* params;
        int paramsState = 0;
         ::wxGridCellFloatRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_params,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp, sipType_wxString, &params, &paramsState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellFloatRenderer::SetParameters(*params) : sipCpp->SetParameters(*params));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(params), sipType_wxString, paramsState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_SetParameters, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_SetPrecision, "SetPrecision(precision)\n"
"\n"
"Sets the precision.");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_SetPrecision(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_SetPrecision(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int precision;
         ::wxGridCellFloatRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_precision,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp, &precision))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetPrecision(precision);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_SetPrecision, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_SetWidth, "SetWidth(width)\n"
"\n"
"Sets the width.");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_SetWidth(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_SetWidth(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int width;
         ::wxGridCellFloatRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_width,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp, &width))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetWidth(width);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_SetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_Clone, "Clone(self) -> GridCellRenderer");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGridCellFloatRenderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp))
        {
             ::wxGridCellRenderer*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxGridCellFloatRenderer::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGridCellRenderer,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_Clone, doc_wxGridCellFloatRenderer_Clone);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_Draw, "Draw(self, grid: Grid, attr: GridCellAttr, dc: DC, rect: Rect, row: int, col: int, isSelected: bool)");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_Draw(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_Draw(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGrid* grid;
         ::wxGridCellAttr* attr;
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
        int row;
        int col;
        bool isSelected;
         ::wxGridCellFloatRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_grid,
            sipName_attr,
            sipName_dc,
            sipName_rect,
            sipName_row,
            sipName_col,
            sipName_isSelected,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9J9J1iib", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp, sipType_wxGrid, &grid, sipType_wxGridCellAttr, &attr, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, &row, &col, &isSelected))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellFloatRenderer::Draw(*grid,*attr,*dc,*rect,row,col,isSelected) : sipCpp->Draw(*grid,*attr,*dc,*rect,row,col,isSelected));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect), sipType_wxRect, rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_Draw, doc_wxGridCellFloatRenderer_Draw);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellFloatRenderer_GetBestSize, "GetBestSize(self, grid: Grid, attr: GridCellAttr, dc: DC, row: int, col: int) -> Size");

extern "C" {static PyObject *meth_wxGridCellFloatRenderer_GetBestSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellFloatRenderer_GetBestSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGrid* grid;
         ::wxGridCellAttr* attr;
         ::wxDC* dc;
        int row;
        int col;
         ::wxGridCellFloatRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_grid,
            sipName_attr,
            sipName_dc,
            sipName_row,
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9J9ii", &sipSelf, sipType_wxGridCellFloatRenderer, &sipCpp, sipType_wxGrid, &grid, sipType_wxGridCellAttr, &attr, sipType_wxDC, &dc, &row, &col))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize((sipSelfWasArg ? sipCpp-> ::wxGridCellFloatRenderer::GetBestSize(*grid,*attr,*dc,row,col) : sipCpp->GetBestSize(*grid,*attr,*dc,row,col)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_GridCellFloatRenderer, sipName_GetBestSize, doc_wxGridCellFloatRenderer_GetBestSize);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGridCellFloatRenderer(void *, const sipTypeDef *);}
static void *cast_wxGridCellFloatRenderer(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGridCellFloatRenderer *sipCpp = reinterpret_cast< ::wxGridCellFloatRenderer *>(sipCppV);

    if (targetType == sipType_wxGridCellFloatRenderer)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxGridCellStringRenderer)->ctd_cast(static_cast< ::wxGridCellStringRenderer *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridCellFloatRenderer(void *, int);}
static void release_wxGridCellFloatRenderer(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxGridCellFloatRenderer *>(sipCppV);
    else
        delete reinterpret_cast< ::wxGridCellFloatRenderer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxGridCellFloatRenderer(Py_ssize_t);}
static void *array_wxGridCellFloatRenderer(Py_ssize_t sipNrElem)
{
    return new  ::wxGridCellFloatRenderer[sipNrElem];
}


extern "C" {static void dealloc_wxGridCellFloatRenderer(sipSimpleWrapper *);}
static void dealloc_wxGridCellFloatRenderer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxGridCellFloatRenderer *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridCellFloatRenderer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxGridCellFloatRenderer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridCellFloatRenderer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipwxGridCellFloatRenderer *sipCpp = SIP_NULLPTR;

    {
        int width = -1;
        int precision = -1;
        int format = wxGRID_FLOAT_FORMAT_DEFAULT;

        static const char *sipKwdList[] = {
            sipName_width,
            sipName_precision,
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|iii", &width, &precision, &format))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridCellFloatRenderer(width,precision,format);
            Py_END_ALLOW_THREADS

            *sipOwner = Py_None;

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
static sipEncodedTypeDef supers_wxGridCellFloatRenderer[] = {{37, 255, 1}};


static PyMethodDef methods_wxGridCellFloatRenderer[] = {
    {sipName_Clone, meth_wxGridCellFloatRenderer_Clone, METH_VARARGS, doc_wxGridCellFloatRenderer_Clone},
    {sipName_Draw, SIP_MLMETH_CAST(meth_wxGridCellFloatRenderer_Draw), METH_VARARGS|METH_KEYWORDS, doc_wxGridCellFloatRenderer_Draw},
    {sipName_GetBestSize, SIP_MLMETH_CAST(meth_wxGridCellFloatRenderer_GetBestSize), METH_VARARGS|METH_KEYWORDS, doc_wxGridCellFloatRenderer_GetBestSize},
    {sipName_GetFormat, meth_wxGridCellFloatRenderer_GetFormat, METH_VARARGS, doc_wxGridCellFloatRenderer_GetFormat},
    {sipName_GetPrecision, meth_wxGridCellFloatRenderer_GetPrecision, METH_VARARGS, doc_wxGridCellFloatRenderer_GetPrecision},
    {sipName_GetWidth, meth_wxGridCellFloatRenderer_GetWidth, METH_VARARGS, doc_wxGridCellFloatRenderer_GetWidth},
    {sipName_SetFormat, SIP_MLMETH_CAST(meth_wxGridCellFloatRenderer_SetFormat), METH_VARARGS|METH_KEYWORDS, doc_wxGridCellFloatRenderer_SetFormat},
    {sipName_SetParameters, SIP_MLMETH_CAST(meth_wxGridCellFloatRenderer_SetParameters), METH_VARARGS|METH_KEYWORDS, doc_wxGridCellFloatRenderer_SetParameters},
    {sipName_SetPrecision, SIP_MLMETH_CAST(meth_wxGridCellFloatRenderer_SetPrecision), METH_VARARGS|METH_KEYWORDS, doc_wxGridCellFloatRenderer_SetPrecision},
    {sipName_SetWidth, SIP_MLMETH_CAST(meth_wxGridCellFloatRenderer_SetWidth), METH_VARARGS|METH_KEYWORDS, doc_wxGridCellFloatRenderer_SetWidth}
};

sipVariableDef variables_wxGridCellFloatRenderer[] = {
    {PropertyVariable, sipName_Width, &methods_wxGridCellFloatRenderer[5], &methods_wxGridCellFloatRenderer[9], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Precision, &methods_wxGridCellFloatRenderer[4], &methods_wxGridCellFloatRenderer[8], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Format, &methods_wxGridCellFloatRenderer[3], &methods_wxGridCellFloatRenderer[6], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxGridCellFloatRenderer, "GridCellFloatRenderer(width=-1, precision=-1, format=GRID_FLOAT_FORMAT_DEFAULT)\n"
"\n"
"This class may be used to format floating point data in a cell.");


sipClassTypeDef sipTypeDef__grid_wxGridCellFloatRenderer = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridCellFloatRenderer,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_GridCellFloatRenderer,
        {0, 0, 1},
        10, methods_wxGridCellFloatRenderer,
        0, SIP_NULLPTR,
        3, variables_wxGridCellFloatRenderer,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridCellFloatRenderer,
    -1,
    -1,
    supers_wxGridCellFloatRenderer,
    SIP_NULLPTR,
    init_type_wxGridCellFloatRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxGridCellFloatRenderer,
    SIP_NULLPTR,
    array_wxGridCellFloatRenderer,
    SIP_NULLPTR,
    release_wxGridCellFloatRenderer,
    cast_wxGridCellFloatRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
