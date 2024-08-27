/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/dialog.h>
        #include <wx/dialog.h>


class sipwxDialogLayoutAdapter : public  ::wxDialogLayoutAdapter
{
public:
    sipwxDialogLayoutAdapter();
    sipwxDialogLayoutAdapter(const  ::wxDialogLayoutAdapter&);
    virtual ~sipwxDialogLayoutAdapter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool DoLayoutAdaptation( ::wxDialog*) SIP_OVERRIDE;
    bool CanDoLayoutAdaptation( ::wxDialog*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxDialogLayoutAdapter(const sipwxDialogLayoutAdapter &);
    sipwxDialogLayoutAdapter &operator = (const sipwxDialogLayoutAdapter &);

    char sipPyMethods[2];
};

sipwxDialogLayoutAdapter::sipwxDialogLayoutAdapter():  ::wxDialogLayoutAdapter(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxDialogLayoutAdapter::sipwxDialogLayoutAdapter(const  ::wxDialogLayoutAdapter& a0):  ::wxDialogLayoutAdapter(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxDialogLayoutAdapter::~sipwxDialogLayoutAdapter()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxDialogLayoutAdapter::DoLayoutAdaptation( ::wxDialog*dialog)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, sipName_DialogLayoutAdapter, sipName_DoLayoutAdaptation);

    if (!sipMeth)
        return 0;

    extern bool sipVH__core_191(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDialog*);

    return sipVH__core_191(sipGILState, 0, sipPySelf, sipMeth, dialog);
}

bool sipwxDialogLayoutAdapter::CanDoLayoutAdaptation( ::wxDialog*dialog)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, sipName_DialogLayoutAdapter, sipName_CanDoLayoutAdaptation);

    if (!sipMeth)
        return 0;

    extern bool sipVH__core_191(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDialog*);

    return sipVH__core_191(sipGILState, 0, sipPySelf, sipMeth, dialog);
}


PyDoc_STRVAR(doc_wxDialogLayoutAdapter_CanDoLayoutAdaptation, "CanDoLayoutAdaptation(dialog) -> bool\n"
"\n"
"Override this to returns true if adaptation can and should be done.");

extern "C" {static PyObject *meth_wxDialogLayoutAdapter_CanDoLayoutAdaptation(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDialogLayoutAdapter_CanDoLayoutAdaptation(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxDialog* dialog;
         ::wxDialogLayoutAdapter *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dialog,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxDialogLayoutAdapter, &sipCpp, sipType_wxDialog, &dialog))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DialogLayoutAdapter, sipName_CanDoLayoutAdaptation);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->CanDoLayoutAdaptation(dialog);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_DialogLayoutAdapter, sipName_CanDoLayoutAdaptation, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDialogLayoutAdapter_DoLayoutAdaptation, "DoLayoutAdaptation(dialog) -> bool\n"
"\n"
"Override this to perform layout adaptation, such as making parts of\n"
"the dialog scroll and resizing the dialog to fit the display.");

extern "C" {static PyObject *meth_wxDialogLayoutAdapter_DoLayoutAdaptation(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDialogLayoutAdapter_DoLayoutAdaptation(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxDialog* dialog;
         ::wxDialogLayoutAdapter *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dialog,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxDialogLayoutAdapter, &sipCpp, sipType_wxDialog, &dialog))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DialogLayoutAdapter, sipName_DoLayoutAdaptation);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->DoLayoutAdaptation(dialog);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_DialogLayoutAdapter, sipName_DoLayoutAdaptation, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDialogLayoutAdapter(void *, int);}
static void release_wxDialogLayoutAdapter(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxDialogLayoutAdapter *>(sipCppV);
    else
        delete reinterpret_cast< ::wxDialogLayoutAdapter *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxDialogLayoutAdapter(sipSimpleWrapper *);}
static void dealloc_wxDialogLayoutAdapter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxDialogLayoutAdapter *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDialogLayoutAdapter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxDialogLayoutAdapter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDialogLayoutAdapter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxDialogLayoutAdapter *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxDialogLayoutAdapter();
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
        const  ::wxDialogLayoutAdapter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxDialogLayoutAdapter, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxDialogLayoutAdapter(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxDialogLayoutAdapter[] = {
    {sipName_CanDoLayoutAdaptation, SIP_MLMETH_CAST(meth_wxDialogLayoutAdapter_CanDoLayoutAdaptation), METH_VARARGS|METH_KEYWORDS, doc_wxDialogLayoutAdapter_CanDoLayoutAdaptation},
    {sipName_DoLayoutAdaptation, SIP_MLMETH_CAST(meth_wxDialogLayoutAdapter_DoLayoutAdaptation), METH_VARARGS|METH_KEYWORDS, doc_wxDialogLayoutAdapter_DoLayoutAdaptation}
};

PyDoc_STRVAR(doc_wxDialogLayoutAdapter, "DialogLayoutAdapter()\n"
"\n"
"This abstract class is the base for classes that help wxWidgets\n"
"perform run-time layout adaptation of dialogs.");


sipClassTypeDef sipTypeDef__core_wxDialogLayoutAdapter = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxDialogLayoutAdapter,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_DialogLayoutAdapter,
        {0, 0, 1},
        2, methods_wxDialogLayoutAdapter,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDialogLayoutAdapter,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxDialogLayoutAdapter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxDialogLayoutAdapter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxDialogLayoutAdapter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
