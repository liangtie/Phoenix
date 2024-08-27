/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"
        #include <wx/propgrid/editors.h>
        #include <wx/propgrid/property.h>
        #include <wx/window.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/propgrid/property.h>
        #include <wx/event.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/propgrid/editors.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxPGEditor : public  ::wxPGEditor
{
public:
    sipwxPGEditor();
    sipwxPGEditor(const  ::wxPGEditor&);
    virtual ~sipwxPGEditor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool CanContainCustomImage() const SIP_OVERRIDE;
    void OnFocus( ::wxPGProperty*, ::wxWindow*) const SIP_OVERRIDE;
    void DeleteItem( ::wxWindow*,int) const SIP_OVERRIDE;
    int InsertItem( ::wxWindow*,const  ::wxString&,int) const SIP_OVERRIDE;
    void SetControlIntValue( ::wxPGProperty*, ::wxWindow*,int) const SIP_OVERRIDE;
    void SetControlStringValue( ::wxPGProperty*, ::wxWindow*,const  ::wxString&) const SIP_OVERRIDE;
    void SetControlAppearance( ::wxPropertyGrid*, ::wxPGProperty*, ::wxWindow*,const  ::wxPGCell&,const  ::wxPGCell&,bool) const SIP_OVERRIDE;
    void SetValueToUnspecified( ::wxPGProperty*, ::wxWindow*) const SIP_OVERRIDE;
    bool GetValueFromControl( ::wxVariant&, ::wxPGProperty*, ::wxWindow*) const SIP_OVERRIDE;
    bool OnEvent( ::wxPropertyGrid*, ::wxPGProperty*, ::wxWindow*, ::wxEvent&) const SIP_OVERRIDE;
    void DrawValue( ::wxDC&,const  ::wxRect&, ::wxPGProperty*,const  ::wxString&) const SIP_OVERRIDE;
    void UpdateControl( ::wxPGProperty*, ::wxWindow*) const SIP_OVERRIDE;
     ::wxPGWindowList CreateControls( ::wxPropertyGrid*, ::wxPGProperty*,const  ::wxPoint&,const  ::wxSize&) const SIP_OVERRIDE;
     ::wxString GetName() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPGEditor(const sipwxPGEditor &);
    sipwxPGEditor &operator = (const sipwxPGEditor &);

    char sipPyMethods[14];
};

sipwxPGEditor::sipwxPGEditor():  ::wxPGEditor(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPGEditor::sipwxPGEditor(const  ::wxPGEditor& a0):  ::wxPGEditor(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPGEditor::~sipwxPGEditor()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxPGEditor::CanContainCustomImage() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_CanContainCustomImage);

    if (!sipMeth)
        return  ::wxPGEditor::CanContainCustomImage();

    extern bool sipVH__propgrid_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_33(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxPGEditor::OnFocus( ::wxPGProperty*property, ::wxWindow*wnd) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_OnFocus);

    if (!sipMeth)
    {
         ::wxPGEditor::OnFocus(property,wnd);
        return;
    }

    extern void sipVH__propgrid_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGProperty*, ::wxWindow*);

    sipVH__propgrid_24(sipGILState, 0, sipPySelf, sipMeth, property, wnd);
}

void sipwxPGEditor::DeleteItem( ::wxWindow*ctrl,int index) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DeleteItem);

    if (!sipMeth)
    {
         ::wxPGEditor::DeleteItem(ctrl,index);
        return;
    }

    extern void sipVH__propgrid_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindow*,int);

    sipVH__propgrid_32(sipGILState, 0, sipPySelf, sipMeth, ctrl, index);
}

int sipwxPGEditor::InsertItem( ::wxWindow*ctrl,const  ::wxString& label,int index) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[3]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_InsertItem);

    if (!sipMeth)
        return  ::wxPGEditor::InsertItem(ctrl,label,index);

    extern int sipVH__propgrid_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindow*,const  ::wxString&,int);

    return sipVH__propgrid_31(sipGILState, 0, sipPySelf, sipMeth, ctrl, label, index);
}

void sipwxPGEditor::SetControlIntValue( ::wxPGProperty*property, ::wxWindow*ctrl,int value) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[4]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_SetControlIntValue);

    if (!sipMeth)
    {
         ::wxPGEditor::SetControlIntValue(property,ctrl,value);
        return;
    }

    extern void sipVH__propgrid_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGProperty*, ::wxWindow*,int);

    sipVH__propgrid_30(sipGILState, 0, sipPySelf, sipMeth, property, ctrl, value);
}

void sipwxPGEditor::SetControlStringValue( ::wxPGProperty*property, ::wxWindow*ctrl,const  ::wxString& txt) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[5]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_SetControlStringValue);

    if (!sipMeth)
    {
         ::wxPGEditor::SetControlStringValue(property,ctrl,txt);
        return;
    }

    extern void sipVH__propgrid_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGProperty*, ::wxWindow*,const  ::wxString&);

    sipVH__propgrid_29(sipGILState, 0, sipPySelf, sipMeth, property, ctrl, txt);
}

void sipwxPGEditor::SetControlAppearance( ::wxPropertyGrid*pg, ::wxPGProperty*property, ::wxWindow*ctrl,const  ::wxPGCell& appearance,const  ::wxPGCell& oldAppearance,bool unspecified) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[6]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_SetControlAppearance);

    if (!sipMeth)
    {
         ::wxPGEditor::SetControlAppearance(pg,property,ctrl,appearance,oldAppearance,unspecified);
        return;
    }

    extern void sipVH__propgrid_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxPGProperty*, ::wxWindow*,const  ::wxPGCell&,const  ::wxPGCell&,bool);

    sipVH__propgrid_28(sipGILState, 0, sipPySelf, sipMeth, pg, property, ctrl, appearance, oldAppearance, unspecified);
}

void sipwxPGEditor::SetValueToUnspecified( ::wxPGProperty*property, ::wxWindow*ctrl) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[7]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_SetValueToUnspecified);

    if (!sipMeth)
    {
         ::wxPGEditor::SetValueToUnspecified(property,ctrl);
        return;
    }

    extern void sipVH__propgrid_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGProperty*, ::wxWindow*);

    sipVH__propgrid_24(sipGILState, 0, sipPySelf, sipMeth, property, ctrl);
}

bool sipwxPGEditor::GetValueFromControl( ::wxVariant& variant, ::wxPGProperty*property, ::wxWindow*ctrl) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[8]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetValueFromControl);

    if (!sipMeth)
        return  ::wxPGEditor::GetValueFromControl(variant,property,ctrl);

    extern bool sipVH__propgrid_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxVariant&, ::wxPGProperty*, ::wxWindow*);

    return sipVH__propgrid_27(sipGILState, 0, sipPySelf, sipMeth, variant, property, ctrl);
}

bool sipwxPGEditor::OnEvent( ::wxPropertyGrid*propgrid, ::wxPGProperty*property, ::wxWindow*wnd_primary, ::wxEvent& event) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[9]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_PGEditor, sipName_OnEvent);

    if (!sipMeth)
        return 0;

    extern bool sipVH__propgrid_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxPGProperty*, ::wxWindow*, ::wxEvent&);

    return sipVH__propgrid_26(sipGILState, 0, sipPySelf, sipMeth, propgrid, property, wnd_primary, event);
}

void sipwxPGEditor::DrawValue( ::wxDC& dc,const  ::wxRect& rect, ::wxPGProperty*property,const  ::wxString& text) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[10]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DrawValue);

    if (!sipMeth)
    {
         ::wxPGEditor::DrawValue(dc,rect,property,text);
        return;
    }

    extern void sipVH__propgrid_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&, ::wxPGProperty*,const  ::wxString&);

    sipVH__propgrid_25(sipGILState, 0, sipPySelf, sipMeth, dc, rect, property, text);
}

void sipwxPGEditor::UpdateControl( ::wxPGProperty*property, ::wxWindow*ctrl) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[11]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_PGEditor, sipName_UpdateControl);

    if (!sipMeth)
        return;

    extern void sipVH__propgrid_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGProperty*, ::wxWindow*);

    sipVH__propgrid_24(sipGILState, 0, sipPySelf, sipMeth, property, ctrl);
}

 ::wxPGWindowList sipwxPGEditor::CreateControls( ::wxPropertyGrid*propgrid, ::wxPGProperty*property,const  ::wxPoint& pos,const  ::wxSize& size) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[12]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_PGEditor, sipName_CreateControls);

    if (!sipMeth)
        return  ::wxPGWindowList(static_cast< ::wxWindow*>(0));

    extern  ::wxPGWindowList sipVH__propgrid_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxPGProperty*,const  ::wxPoint&,const  ::wxSize&);

    return sipVH__propgrid_23(sipGILState, 0, sipPySelf, sipMeth, propgrid, property, pos, size);
}

 ::wxString sipwxPGEditor::GetName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[13]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetName);

    if (!sipMeth)
        return  ::wxPGEditor::GetName();

    extern  ::wxString sipVH__propgrid_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_22(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxPGEditor_GetName, "GetName() -> String\n"
"\n"
"Returns pointer to the name of the editor.");

extern "C" {static PyObject *meth_wxPGEditor_GetName(PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxPGEditor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGEditor, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxPGEditor::GetName() : sipCpp->GetName()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_GetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_CreateControls, "CreateControls(propgrid, property, pos, size) -> PGWindowList\n"
"\n"
"Instantiates editor controls.");

extern "C" {static PyObject *meth_wxPGEditor_CreateControls(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_CreateControls(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxPropertyGrid* propgrid;
         ::wxPGProperty* property;
        const  ::wxPoint* pos;
        int posState = 0;
        const  ::wxSize* size;
        int sizeState = 0;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_propgrid,
            sipName_property,
            sipName_pos,
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J8J1J1", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxPropertyGrid, &propgrid, sipType_wxPGProperty, &property, sipType_wxPoint, &pos, &posState, sipType_wxSize, &size, &sizeState))
        {
             ::wxPGWindowList*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PGEditor, sipName_CreateControls);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPGWindowList(sipCpp->CreateControls(propgrid,property,*pos,*size));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pos), sipType_wxPoint, posState);
            sipReleaseType(const_cast< ::wxSize *>(size), sipType_wxSize, sizeState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPGWindowList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_CreateControls, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_UpdateControl, "UpdateControl(property, ctrl)\n"
"\n"
"Loads value from property to the control.");

extern "C" {static PyObject *meth_wxPGEditor_UpdateControl(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_UpdateControl(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxPGProperty* property;
         ::wxWindow* ctrl;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_property,
            sipName_ctrl,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J8", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxPGProperty, &property, sipType_wxWindow, &ctrl))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PGEditor, sipName_UpdateControl);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->UpdateControl(property,ctrl);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_UpdateControl, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_DrawValue, "DrawValue(dc, rect, property, text)\n"
"\n"
"Draws value for given property.");

extern "C" {static PyObject *meth_wxPGEditor_DrawValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_DrawValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxPGProperty* property;
        const  ::wxString* text;
        int textState = 0;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_rect,
            sipName_property,
            sipName_text,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J1J8J1", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, sipType_wxPGProperty, &property, sipType_wxString, &text, &textState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxPGEditor::DrawValue(*dc,*rect,property,*text) : sipCpp->DrawValue(*dc,*rect,property,*text));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect), sipType_wxRect, rectState);
            sipReleaseType(const_cast< ::wxString *>(text), sipType_wxString, textState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_DrawValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_OnEvent, "OnEvent(propgrid, property, wnd_primary, event) -> bool\n"
"\n"
"Handles events.");

extern "C" {static PyObject *meth_wxPGEditor_OnEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_OnEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxPropertyGrid* propgrid;
         ::wxPGProperty* property;
         ::wxWindow* wnd_primary;
         ::wxEvent* event;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_propgrid,
            sipName_property,
            sipName_wnd_primary,
            sipName_event,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J8J8J9", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxPropertyGrid, &propgrid, sipType_wxPGProperty, &property, sipType_wxWindow, &wnd_primary, sipType_wxEvent, &event))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PGEditor, sipName_OnEvent);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->OnEvent(propgrid,property,wnd_primary,*event);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_OnEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_GetValueFromControl, "GetValueFromControl(property, ctrl) -> (bool, variant)\n"
"\n"
"Returns value from control, via parameter variant.");

extern "C" {static PyObject *meth_wxPGEditor_GetValueFromControl(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_GetValueFromControl(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGVariant* variant;
         ::wxPGProperty* property;
         ::wxWindow* ctrl;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_property,
            sipName_ctrl,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J8", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxPGProperty, &property, sipType_wxWindow, &ctrl))
        {
            bool sipRes;
            variant = new  ::wxPGVariant();

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxPGEditor::GetValueFromControl(*variant,property,ctrl) : sipCpp->GetValueFromControl(*variant,property,ctrl));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(bN)",sipRes,variant,sipType_wxPGVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_GetValueFromControl, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_SetValueToUnspecified, "SetValueToUnspecified(property, ctrl)\n"
"\n"
"Sets value in control to unspecified.");

extern "C" {static PyObject *meth_wxPGEditor_SetValueToUnspecified(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_SetValueToUnspecified(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGProperty* property;
         ::wxWindow* ctrl;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_property,
            sipName_ctrl,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J8", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxPGProperty, &property, sipType_wxWindow, &ctrl))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxPGEditor::SetValueToUnspecified(property,ctrl) : sipCpp->SetValueToUnspecified(property,ctrl));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_SetValueToUnspecified, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_SetControlAppearance, "SetControlAppearance(pg, property, ctrl, appearance, oldAppearance, unspecified)\n"
"\n"
"Called by property grid to set new appearance for the control.");

extern "C" {static PyObject *meth_wxPGEditor_SetControlAppearance(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_SetControlAppearance(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPropertyGrid* pg;
         ::wxPGProperty* property;
         ::wxWindow* ctrl;
        const  ::wxPGCell* appearance;
        const  ::wxPGCell* oldAppearance;
        bool unspecified;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pg,
            sipName_property,
            sipName_ctrl,
            sipName_appearance,
            sipName_oldAppearance,
            sipName_unspecified,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J8J8J9J9b", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxPropertyGrid, &pg, sipType_wxPGProperty, &property, sipType_wxWindow, &ctrl, sipType_wxPGCell, &appearance, sipType_wxPGCell, &oldAppearance, &unspecified))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxPGEditor::SetControlAppearance(pg,property,ctrl,*appearance,*oldAppearance,unspecified) : sipCpp->SetControlAppearance(pg,property,ctrl,*appearance,*oldAppearance,unspecified));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_SetControlAppearance, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_SetControlStringValue, "SetControlStringValue(property, ctrl, txt)\n"
"\n"
"Sets control's value specifically from string.");

extern "C" {static PyObject *meth_wxPGEditor_SetControlStringValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_SetControlStringValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGProperty* property;
         ::wxWindow* ctrl;
        const  ::wxString* txt;
        int txtState = 0;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_property,
            sipName_ctrl,
            sipName_txt,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J8J1", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxPGProperty, &property, sipType_wxWindow, &ctrl, sipType_wxString, &txt, &txtState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxPGEditor::SetControlStringValue(property,ctrl,*txt) : sipCpp->SetControlStringValue(property,ctrl,*txt));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(txt), sipType_wxString, txtState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_SetControlStringValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_SetControlIntValue, "SetControlIntValue(property, ctrl, value)\n"
"\n"
"Sets control's value specifically from int (applies to choice etc.).");

extern "C" {static PyObject *meth_wxPGEditor_SetControlIntValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_SetControlIntValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGProperty* property;
         ::wxWindow* ctrl;
        int value;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_property,
            sipName_ctrl,
            sipName_value,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J8i", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxPGProperty, &property, sipType_wxWindow, &ctrl, &value))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxPGEditor::SetControlIntValue(property,ctrl,value) : sipCpp->SetControlIntValue(property,ctrl,value));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_SetControlIntValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_InsertItem, "InsertItem(ctrl, label, index) -> int\n"
"\n"
"Inserts item to existing control.");

extern "C" {static PyObject *meth_wxPGEditor_InsertItem(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_InsertItem(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxWindow* ctrl;
        const  ::wxString* label;
        int labelState = 0;
        int index;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_ctrl,
            sipName_label,
            sipName_index,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1i", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxWindow, &ctrl, sipType_wxString, &label, &labelState, &index))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxPGEditor::InsertItem(ctrl,*label,index) : sipCpp->InsertItem(ctrl,*label,index));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(label), sipType_wxString, labelState);

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_InsertItem, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_DeleteItem, "DeleteItem(ctrl, index)\n"
"\n"
"Deletes item from existing control.");

extern "C" {static PyObject *meth_wxPGEditor_DeleteItem(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_DeleteItem(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxWindow* ctrl;
        int index;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_ctrl,
            sipName_index,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8i", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxWindow, &ctrl, &index))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxPGEditor::DeleteItem(ctrl,index) : sipCpp->DeleteItem(ctrl,index));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_DeleteItem, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_OnFocus, "OnFocus(property, wnd)\n"
"\n"
"Extra processing when control gains focus.");

extern "C" {static PyObject *meth_wxPGEditor_OnFocus(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_OnFocus(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGProperty* property;
         ::wxWindow* wnd;
        const  ::wxPGEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_property,
            sipName_wnd,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J8", &sipSelf, sipType_wxPGEditor, &sipCpp, sipType_wxPGProperty, &property, sipType_wxWindow, &wnd))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxPGEditor::OnFocus(property,wnd) : sipCpp->OnFocus(property,wnd));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_OnFocus, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGEditor_CanContainCustomImage, "CanContainCustomImage() -> bool\n"
"\n"
"Returns true if control itself can contain the custom image.");

extern "C" {static PyObject *meth_wxPGEditor_CanContainCustomImage(PyObject *, PyObject *);}
static PyObject *meth_wxPGEditor_CanContainCustomImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxPGEditor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGEditor, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxPGEditor::CanContainCustomImage() : sipCpp->CanContainCustomImage());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PGEditor, sipName_CanContainCustomImage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPGEditor(void *, const sipTypeDef *);}
static void *cast_wxPGEditor(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPGEditor *sipCpp = reinterpret_cast< ::wxPGEditor *>(sipCppV);

    if (targetType == sipType_wxPGEditor)
        return sipCppV;

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPGEditor(void *, int);}
static void release_wxPGEditor(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPGEditor *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPGEditor *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPGEditor(sipSimpleWrapper *);}
static void dealloc_wxPGEditor(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPGEditor *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPGEditor(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPGEditor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPGEditor(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPGEditor *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPGEditor();
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
        const  ::wxPGEditor* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxPGEditor, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPGEditor(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxPGEditor[] = {{20, 0, 1}};


static PyMethodDef methods_wxPGEditor[] = {
    {sipName_CanContainCustomImage, meth_wxPGEditor_CanContainCustomImage, METH_VARARGS, doc_wxPGEditor_CanContainCustomImage},
    {sipName_CreateControls, SIP_MLMETH_CAST(meth_wxPGEditor_CreateControls), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_CreateControls},
    {sipName_DeleteItem, SIP_MLMETH_CAST(meth_wxPGEditor_DeleteItem), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_DeleteItem},
    {sipName_DrawValue, SIP_MLMETH_CAST(meth_wxPGEditor_DrawValue), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_DrawValue},
    {sipName_GetName, meth_wxPGEditor_GetName, METH_VARARGS, doc_wxPGEditor_GetName},
    {sipName_GetValueFromControl, SIP_MLMETH_CAST(meth_wxPGEditor_GetValueFromControl), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_GetValueFromControl},
    {sipName_InsertItem, SIP_MLMETH_CAST(meth_wxPGEditor_InsertItem), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_InsertItem},
    {sipName_OnEvent, SIP_MLMETH_CAST(meth_wxPGEditor_OnEvent), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_OnEvent},
    {sipName_OnFocus, SIP_MLMETH_CAST(meth_wxPGEditor_OnFocus), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_OnFocus},
    {sipName_SetControlAppearance, SIP_MLMETH_CAST(meth_wxPGEditor_SetControlAppearance), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_SetControlAppearance},
    {sipName_SetControlIntValue, SIP_MLMETH_CAST(meth_wxPGEditor_SetControlIntValue), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_SetControlIntValue},
    {sipName_SetControlStringValue, SIP_MLMETH_CAST(meth_wxPGEditor_SetControlStringValue), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_SetControlStringValue},
    {sipName_SetValueToUnspecified, SIP_MLMETH_CAST(meth_wxPGEditor_SetValueToUnspecified), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_SetValueToUnspecified},
    {sipName_UpdateControl, SIP_MLMETH_CAST(meth_wxPGEditor_UpdateControl), METH_VARARGS|METH_KEYWORDS, doc_wxPGEditor_UpdateControl}
};


extern "C" {static PyObject *varget_wxPGEditor_m_clientData(void *, PyObject *, PyObject *);}
static PyObject *varget_wxPGEditor_m_clientData(void *sipSelf, PyObject *, PyObject *)
{
    void*sipVal;
     ::wxPGEditor *sipCpp = reinterpret_cast< ::wxPGEditor *>(sipSelf);

    sipVal = sipCpp->m_clientData;

    return sipConvertFromVoidPtr(sipVal);
}


extern "C" {static int varset_wxPGEditor_m_clientData(void *, PyObject *, PyObject *);}
static int varset_wxPGEditor_m_clientData(void *sipSelf, PyObject *sipPy, PyObject *)
{
    void*sipVal;
     ::wxPGEditor *sipCpp = reinterpret_cast< ::wxPGEditor *>(sipSelf);

    sipVal = sipConvertToVoidPtr(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->m_clientData = sipVal;

    return 0;
}

sipVariableDef variables_wxPGEditor[] = {
    {PropertyVariable, sipName_Name, &methods_wxPGEditor[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_clientData, (PyMethodDef *)varget_wxPGEditor_m_clientData, (PyMethodDef *)varset_wxPGEditor_m_clientData, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPGEditor, "PGEditor()\n"
"\n"
"Base class for custom wxPropertyGrid editors.");


sipClassTypeDef sipTypeDef__propgrid_wxPGEditor = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxPGEditor,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_PGEditor,
        {0, 0, 1},
        14, methods_wxPGEditor,
        0, SIP_NULLPTR,
        2, variables_wxPGEditor,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPGEditor,
    -1,
    -1,
    supers_wxPGEditor,
    SIP_NULLPTR,
    init_type_wxPGEditor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxPGEditor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPGEditor,
    cast_wxPGEditor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
