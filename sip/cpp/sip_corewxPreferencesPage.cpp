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
        #include <wx/window.h>
        #include <wx/bitmap.h>
        #include <wx/bmpbndl.h>


class sipwxPreferencesPage : public  ::wxPreferencesPage
{
public:
    sipwxPreferencesPage();
    virtual ~sipwxPreferencesPage();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxWindow* CreateWindow( ::wxWindow*) SIP_OVERRIDE;
     ::wxBitmap GetLargeIcon() const SIP_OVERRIDE;
     ::wxBitmapBundle GetIcon() const SIP_OVERRIDE;
     ::wxString GetName() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPreferencesPage(const sipwxPreferencesPage &);
    sipwxPreferencesPage &operator = (const sipwxPreferencesPage &);

    char sipPyMethods[4];
};

sipwxPreferencesPage::sipwxPreferencesPage():  ::wxPreferencesPage(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPreferencesPage::~sipwxPreferencesPage()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxWindow* sipwxPreferencesPage::CreateWindow( ::wxWindow*parent)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, sipName_PreferencesPage, sipName_CreateWindow);

    if (!sipMeth)
        return 0;

    extern  ::wxWindow* sipVH__core_245(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindow*);

    return sipVH__core_245(sipGILState, 0, sipPySelf, sipMeth, parent);
}

 ::wxBitmap sipwxPreferencesPage::GetLargeIcon() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_PreferencesPage, sipName_GetLargeIcon);

    if (!sipMeth)
        return  ::wxBitmap();

    extern  ::wxBitmap sipVH__core_80(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_80(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxBitmapBundle sipwxPreferencesPage::GetIcon() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_PreferencesPage, sipName_GetIcon);

    if (!sipMeth)
        return  ::wxBitmapBundle();

    extern  ::wxBitmapBundle sipVH__core_165(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_165(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxString sipwxPreferencesPage::GetName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[3]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_PreferencesPage, sipName_GetName);

    if (!sipMeth)
        return  ::wxString();

    extern  ::wxString sipVH__core_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_11(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxPreferencesPage_GetName, "GetName() -> String\n"
"\n"
"Return name of the page.");

extern "C" {static PyObject *meth_wxPreferencesPage_GetName(PyObject *, PyObject *);}
static PyObject *meth_wxPreferencesPage_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxPreferencesPage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPreferencesPage, &sipCpp))
        {
             ::wxString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PreferencesPage, sipName_GetName);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetName());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PreferencesPage, sipName_GetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPreferencesPage_GetIcon, "GetIcon() -> BitmapBundle\n"
"\n"
"Return the icon to be used for the page on some platforms.");

extern "C" {static PyObject *meth_wxPreferencesPage_GetIcon(PyObject *, PyObject *);}
static PyObject *meth_wxPreferencesPage_GetIcon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxPreferencesPage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPreferencesPage, &sipCpp))
        {
             ::wxBitmapBundle*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PreferencesPage, sipName_GetIcon);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxBitmapBundle(sipCpp->GetIcon());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxBitmapBundle,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PreferencesPage, sipName_GetIcon, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPreferencesPage_GetLargeIcon, "GetLargeIcon() -> Bitmap");

extern "C" {static PyObject *meth_wxPreferencesPage_GetLargeIcon(PyObject *, PyObject *);}
static PyObject *meth_wxPreferencesPage_GetLargeIcon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxPreferencesPage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPreferencesPage, &sipCpp))
        {
             ::wxBitmap*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PreferencesPage, sipName_GetLargeIcon);
                return SIP_NULLPTR;
            }

            if (sipDeprecated(sipName_PreferencesPage,sipName_GetLargeIcon) < 0)
                return SIP_NULLPTR;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxBitmap(sipCpp->GetLargeIcon());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxBitmap,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PreferencesPage, sipName_GetLargeIcon, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPreferencesPage_CreateWindow, "CreateWindow(parent) -> Window\n"
"\n"
"Create a window for this page.");

extern "C" {static PyObject *meth_wxPreferencesPage_CreateWindow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPreferencesPage_CreateWindow(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxWindow* parent;
         ::wxPreferencesPage *sipCpp;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxPreferencesPage, &sipCpp, sipType_wxWindow, &parent))
        {
             ::wxWindow*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PreferencesPage, sipName_CreateWindow);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->CreateWindow(parent);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PreferencesPage, sipName_CreateWindow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPreferencesPage(void *, int);}
static void release_wxPreferencesPage(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPreferencesPage *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPreferencesPage *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPreferencesPage(sipSimpleWrapper *);}
static void dealloc_wxPreferencesPage(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPreferencesPage *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPreferencesPage(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPreferencesPage(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPreferencesPage(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPreferencesPage *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPreferencesPage();
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


static PyMethodDef methods_wxPreferencesPage[] = {
    {sipName_CreateWindow, SIP_MLMETH_CAST(meth_wxPreferencesPage_CreateWindow), METH_VARARGS|METH_KEYWORDS, doc_wxPreferencesPage_CreateWindow},
    {sipName_GetIcon, meth_wxPreferencesPage_GetIcon, METH_VARARGS, doc_wxPreferencesPage_GetIcon},
    {sipName_GetLargeIcon, meth_wxPreferencesPage_GetLargeIcon, METH_VARARGS, doc_wxPreferencesPage_GetLargeIcon},
    {sipName_GetName, meth_wxPreferencesPage_GetName, METH_VARARGS, doc_wxPreferencesPage_GetName}
};

sipVariableDef variables_wxPreferencesPage[] = {
    {PropertyVariable, sipName_Name, &methods_wxPreferencesPage[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_LargeIcon, &methods_wxPreferencesPage[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Icon, &methods_wxPreferencesPage[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPreferencesPage, "PreferencesPage()\n"
"\n"
"One page of preferences dialog.");


sipClassTypeDef sipTypeDef__core_wxPreferencesPage = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxPreferencesPage,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_PreferencesPage,
        {0, 0, 1},
        4, methods_wxPreferencesPage,
        0, SIP_NULLPTR,
        3, variables_wxPreferencesPage,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPreferencesPage,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxPreferencesPage,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxPreferencesPage,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPreferencesPage,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
