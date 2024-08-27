/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/printdlg.h>
        #include <wx/window.h>
        #include <wx/cmndata.h>
        #include <wx/cmndata.h>
        #include <wx/dc.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxPrintDialog : public  ::wxPrintDialog
{
public:
    sipwxPrintDialog( ::wxWindow*, ::wxPrintDialogData*);
    sipwxPrintDialog( ::wxWindow*, ::wxPrintData*);
    virtual ~sipwxPrintDialog();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int ShowModal() SIP_OVERRIDE;
     ::wxPrintData& GetPrintData() SIP_OVERRIDE;
     ::wxPrintDialogData& GetPrintDialogData() SIP_OVERRIDE;
     ::wxDC* GetPrintDC() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPrintDialog(const sipwxPrintDialog &);
    sipwxPrintDialog &operator = (const sipwxPrintDialog &);

    char sipPyMethods[4];
};

sipwxPrintDialog::sipwxPrintDialog( ::wxWindow*parent, ::wxPrintDialogData*data):  ::wxPrintDialog(parent,data), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPrintDialog::sipwxPrintDialog( ::wxWindow*parent, ::wxPrintData*data):  ::wxPrintDialog(parent,data), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPrintDialog::~sipwxPrintDialog()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

int sipwxPrintDialog::ShowModal()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_ShowModal);

    if (!sipMeth)
        return  ::wxPrintDialog::ShowModal();

    extern int sipVH__core_111(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_111(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPrintData& sipwxPrintDialog::GetPrintData()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_GetPrintData);

    if (!sipMeth)
        return  ::wxPrintDialog::GetPrintData();

    extern  ::wxPrintData& sipVH__core_229(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_229(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPrintDialogData& sipwxPrintDialog::GetPrintDialogData()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_GetPrintDialogData);

    if (!sipMeth)
        return  ::wxPrintDialog::GetPrintDialogData();

    extern  ::wxPrintDialogData& sipVH__core_223(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_223(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxDC* sipwxPrintDialog::GetPrintDC()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_GetPrintDC);

    if (!sipMeth)
        return  ::wxPrintDialog::GetPrintDC();

    extern  ::wxDC* sipVH__core_228(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_228(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxPrintDialog_GetPrintDC, "GetPrintDC() -> DC\n"
"\n"
"Returns the device context created by the print dialog, if any.");

extern "C" {static PyObject *meth_wxPrintDialog_GetPrintDC(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialog_GetPrintDC(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPrintDialog *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialog, &sipCpp))
        {
             ::wxDC*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxPrintDialog::GetPrintDC() : sipCpp->GetPrintDC());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxDC,Py_None);
        }
    }

    sipNoMethod(sipParseErr, sipName_PrintDialog, sipName_GetPrintDC, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialog_GetPrintDialogData, "GetPrintDialogData() -> PrintDialogData\n"
"\n"
"Returns the print dialog data associated with the print dialog.");

extern "C" {static PyObject *meth_wxPrintDialog_GetPrintDialogData(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialog_GetPrintDialogData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPrintDialog *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialog, &sipCpp))
        {
             ::wxPrintDialogData*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &(sipSelfWasArg ? sipCpp-> ::wxPrintDialog::GetPrintDialogData() : sipCpp->GetPrintDialogData());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPrintDialogData,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PrintDialog, sipName_GetPrintDialogData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialog_GetPrintData, "GetPrintData() -> PrintData\n"
"\n"
"Returns the print data associated with the print dialog.");

extern "C" {static PyObject *meth_wxPrintDialog_GetPrintData(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialog_GetPrintData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPrintDialog *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialog, &sipCpp))
        {
             ::wxPrintData*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &(sipSelfWasArg ? sipCpp-> ::wxPrintDialog::GetPrintData() : sipCpp->GetPrintData());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPrintData,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PrintDialog, sipName_GetPrintData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialog_ShowModal, "ShowModal() -> int\n"
"\n"
"Shows the dialog, returning wxID_OK if the user pressed OK, and\n"
"wxID_CANCEL otherwise.");

extern "C" {static PyObject *meth_wxPrintDialog_ShowModal(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialog_ShowModal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPrintDialog *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialog, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxPrintDialog::ShowModal() : sipCpp->ShowModal());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PrintDialog, sipName_ShowModal, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPrintDialog(void *, const sipTypeDef *);}
static void *cast_wxPrintDialog(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPrintDialog *sipCpp = reinterpret_cast< ::wxPrintDialog *>(sipCppV);

    if (targetType == sipType_wxPrintDialog)
        return sipCppV;

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPrintDialog(void *, int);}
static void release_wxPrintDialog(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPrintDialog *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPrintDialog *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPrintDialog(sipSimpleWrapper *);}
static void dealloc_wxPrintDialog(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPrintDialog *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPrintDialog(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPrintDialog(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPrintDialog(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPrintDialog *sipCpp = SIP_NULLPTR;

    {
         ::wxWindow* parent;
         ::wxPrintDialogData* data = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
            sipName_data,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|J8", sipType_wxWindow, &parent, sipType_wxPrintDialogData, &data))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPrintDialog(parent,data);
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
         ::wxWindow* parent;
         ::wxPrintData* data;

        static const char *sipKwdList[] = {
            sipName_parent,
            sipName_data,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8J8", sipType_wxWindow, &parent, sipType_wxPrintData, &data))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPrintDialog(parent,data);
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
static sipEncodedTypeDef supers_wxPrintDialog[] = {{392, 255, 1}};


static PyMethodDef methods_wxPrintDialog[] = {
    {sipName_GetPrintDC, meth_wxPrintDialog_GetPrintDC, METH_VARARGS, doc_wxPrintDialog_GetPrintDC},
    {sipName_GetPrintData, meth_wxPrintDialog_GetPrintData, METH_VARARGS, doc_wxPrintDialog_GetPrintData},
    {sipName_GetPrintDialogData, meth_wxPrintDialog_GetPrintDialogData, METH_VARARGS, doc_wxPrintDialog_GetPrintDialogData},
    {sipName_ShowModal, meth_wxPrintDialog_ShowModal, METH_VARARGS, doc_wxPrintDialog_ShowModal}
};

sipVariableDef variables_wxPrintDialog[] = {
    {PropertyVariable, sipName_PrintDialogData, &methods_wxPrintDialog[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_PrintData, &methods_wxPrintDialog[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_PrintDC, &methods_wxPrintDialog[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPrintDialog, "PrintDialog(parent, data=None)\n"
"PrintDialog(parent, data)\n"
"\n"
"This class represents the print and print setup common dialogs.");


sipClassTypeDef sipTypeDef__core_wxPrintDialog = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxPrintDialog,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_PrintDialog,
        {0, 0, 1},
        4, methods_wxPrintDialog,
        0, SIP_NULLPTR,
        3, variables_wxPrintDialog,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPrintDialog,
    -1,
    -1,
    supers_wxPrintDialog,
    SIP_NULLPTR,
    init_type_wxPrintDialog,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxPrintDialog,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPrintDialog,
    cast_wxPrintDialog,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
