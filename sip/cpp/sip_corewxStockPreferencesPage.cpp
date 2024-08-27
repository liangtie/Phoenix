/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/preferences.h>
        #include <wx/bmpbndl.h>
        #include <wx/window.h>
        #include <wx/bitmap.h>


class sipwxStockPreferencesPage : public  ::wxStockPreferencesPage
{
public:
    sipwxStockPreferencesPage( ::wxStockPreferencesPage::Kind);
    virtual ~sipwxStockPreferencesPage();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxString GetName() const SIP_OVERRIDE;
     ::wxBitmapBundle GetIcon() const SIP_OVERRIDE;
     ::wxBitmap GetLargeIcon() const SIP_OVERRIDE;
     ::wxWindow* CreateWindow( ::wxWindow*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxStockPreferencesPage(const sipwxStockPreferencesPage &);
    sipwxStockPreferencesPage &operator = (const sipwxStockPreferencesPage &);

    char sipPyMethods[4];
};

sipwxStockPreferencesPage::sipwxStockPreferencesPage( ::wxStockPreferencesPage::Kind kind):  ::wxStockPreferencesPage(kind), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxStockPreferencesPage::~sipwxStockPreferencesPage()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxString sipwxStockPreferencesPage::GetName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetName);

    if (!sipMeth)
        return  ::wxStockPreferencesPage::GetName();

    extern  ::wxString sipVH__core_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_11(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxBitmapBundle sipwxStockPreferencesPage::GetIcon() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetIcon);

    if (!sipMeth)
        return  ::wxStockPreferencesPage::GetIcon();

    extern  ::wxBitmapBundle sipVH__core_165(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_165(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxBitmap sipwxStockPreferencesPage::GetLargeIcon() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_StockPreferencesPage, sipName_GetLargeIcon);

    if (!sipMeth)
        return  ::wxBitmap();

    extern  ::wxBitmap sipVH__core_80(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_80(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxWindow* sipwxStockPreferencesPage::CreateWindow( ::wxWindow*parent)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, sipName_StockPreferencesPage, sipName_CreateWindow);

    if (!sipMeth)
        return 0;

    extern  ::wxWindow* sipVH__core_245(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindow*);

    return sipVH__core_245(sipGILState, 0, sipPySelf, sipMeth, parent);
}


PyDoc_STRVAR(doc_wxStockPreferencesPage_GetKind, "GetKind() -> Kind\n"
"\n"
"Returns the page's kind.");

extern "C" {static PyObject *meth_wxStockPreferencesPage_GetKind(PyObject *, PyObject *);}
static PyObject *meth_wxStockPreferencesPage_GetKind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxStockPreferencesPage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStockPreferencesPage, &sipCpp))
        {
             ::wxStockPreferencesPage::Kind sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetKind();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxStockPreferencesPage_Kind);
        }
    }

    sipNoMethod(sipParseErr, sipName_StockPreferencesPage, sipName_GetKind, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStockPreferencesPage_GetName, "GetName() -> String\n"
"\n"
"Reimplemented to return suitable name for the page's kind.");

extern "C" {static PyObject *meth_wxStockPreferencesPage_GetName(PyObject *, PyObject *);}
static PyObject *meth_wxStockPreferencesPage_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStockPreferencesPage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStockPreferencesPage, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStockPreferencesPage::GetName() : sipCpp->GetName()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_StockPreferencesPage, sipName_GetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStockPreferencesPage_GetIcon, "GetIcon() -> BitmapBundle\n"
"\n"
"Reimplemented to return stock icon on macOS.");

extern "C" {static PyObject *meth_wxStockPreferencesPage_GetIcon(PyObject *, PyObject *);}
static PyObject *meth_wxStockPreferencesPage_GetIcon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStockPreferencesPage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStockPreferencesPage, &sipCpp))
        {
             ::wxBitmapBundle*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxBitmapBundle((sipSelfWasArg ? sipCpp-> ::wxStockPreferencesPage::GetIcon() : sipCpp->GetIcon()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxBitmapBundle,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_StockPreferencesPage, sipName_GetIcon, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxStockPreferencesPage(void *, const sipTypeDef *);}
static void *cast_wxStockPreferencesPage(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxStockPreferencesPage *sipCpp = reinterpret_cast< ::wxStockPreferencesPage *>(sipCppV);

    if (targetType == sipType_wxStockPreferencesPage)
        return sipCppV;

    if (targetType == sipType_wxPreferencesPage)
        return static_cast< ::wxPreferencesPage *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxStockPreferencesPage(void *, int);}
static void release_wxStockPreferencesPage(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxStockPreferencesPage *>(sipCppV);
    else
        delete reinterpret_cast< ::wxStockPreferencesPage *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxStockPreferencesPage(sipSimpleWrapper *);}
static void dealloc_wxStockPreferencesPage(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxStockPreferencesPage *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxStockPreferencesPage(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxStockPreferencesPage(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxStockPreferencesPage(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxStockPreferencesPage *sipCpp = SIP_NULLPTR;

    {
         ::wxStockPreferencesPage::Kind kind;

        static const char *sipKwdList[] = {
            sipName_kind,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "E", sipType_wxStockPreferencesPage_Kind, &kind))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxStockPreferencesPage(kind);
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
static sipEncodedTypeDef supers_wxStockPreferencesPage[] = {{438, 255, 1}};


static PyMethodDef methods_wxStockPreferencesPage[] = {
    {sipName_GetIcon, meth_wxStockPreferencesPage_GetIcon, METH_VARARGS, doc_wxStockPreferencesPage_GetIcon},
    {sipName_GetKind, meth_wxStockPreferencesPage_GetKind, METH_VARARGS, doc_wxStockPreferencesPage_GetKind},
    {sipName_GetName, meth_wxStockPreferencesPage_GetName, METH_VARARGS, doc_wxStockPreferencesPage_GetName}
};

static sipEnumMemberDef enummembers_wxStockPreferencesPage[] = {
    {sipName_Kind_Advanced, static_cast<int>( ::wxStockPreferencesPage::Kind_Advanced), 548},
    {sipName_Kind_General, static_cast<int>( ::wxStockPreferencesPage::Kind_General), 548},
};

sipVariableDef variables_wxStockPreferencesPage[] = {
    {PropertyVariable, sipName_Name, &methods_wxStockPreferencesPage[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Icon, &methods_wxStockPreferencesPage[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxStockPreferencesPage, "StockPreferencesPage(kind)\n"
"\n"
"Specialization of wxPreferencesPage useful for certain commonly used\n"
"preferences page.");


sipClassTypeDef sipTypeDef__core_wxStockPreferencesPage = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxStockPreferencesPage,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_StockPreferencesPage,
        {0, 0, 1},
        3, methods_wxStockPreferencesPage,
        2, enummembers_wxStockPreferencesPage,
        2, variables_wxStockPreferencesPage,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxStockPreferencesPage,
    -1,
    -1,
    supers_wxStockPreferencesPage,
    SIP_NULLPTR,
    init_type_wxStockPreferencesPage,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxStockPreferencesPage,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxStockPreferencesPage,
    cast_wxStockPreferencesPage,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
