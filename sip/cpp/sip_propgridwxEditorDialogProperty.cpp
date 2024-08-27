/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"
        #include <wx/propgrid/props.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/propgrid/editors.h>
        #include <wx/propgrid/property.h>
        #include <wx/bmpbndl.h>
        #include <wx/validate.h>
        #include <wx/colour.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/editors.h>
        #include <wx/bitmap.h>
        #include <wx/propgrid/property.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/propgrid/property.h>
        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/gdicmn.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxEditorDialogProperty : public  ::wxEditorDialogProperty
{
public:
    sipwxEditorDialogProperty(const  ::wxString&,const  ::wxString&);
    sipwxEditorDialogProperty(const  ::wxEditorDialogProperty&);
    virtual ~sipwxEditorDialogProperty();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtect_DisplayEditorDialog( ::wxPropertyGrid*, ::wxPGVariant&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool DisplayEditorDialog( ::wxPropertyGrid*, ::wxPGVariant&) SIP_OVERRIDE;
    void OnSetValue() SIP_OVERRIDE;
     ::wxPGVariant DoGetValue() const SIP_OVERRIDE;
    bool ValidateValue( ::wxPGVariant&, ::wxPGValidationInfo&) const SIP_OVERRIDE;
    bool StringToValue( ::wxPGVariant&,const  ::wxString&,int) const SIP_OVERRIDE;
    bool IntToValue( ::wxPGVariant&,int,int) const SIP_OVERRIDE;
     ::wxString ValueToString( ::wxPGVariant&,int) const SIP_OVERRIDE;
     ::wxSize OnMeasureImage(int) const SIP_OVERRIDE;
    bool OnEvent( ::wxPropertyGrid*, ::wxWindow*, ::wxEvent&) SIP_OVERRIDE;
     ::wxPGVariant ChildChanged( ::wxPGVariant&,int, ::wxPGVariant&) const SIP_OVERRIDE;
    const  ::wxPGEditor* DoGetEditorClass() const SIP_OVERRIDE;
     ::wxValidator* DoGetValidator() const SIP_OVERRIDE;
    void OnCustomPaint( ::wxDC&,const  ::wxRect&, ::wxPGPaintData&) SIP_OVERRIDE;
     ::wxPGCellRenderer* GetCellRenderer(int) const SIP_OVERRIDE;
    int GetChoiceSelection() const SIP_OVERRIDE;
    void RefreshChildren() SIP_OVERRIDE;
    bool DoSetAttribute(const  ::wxString&, ::wxPGVariant&) SIP_OVERRIDE;
     ::wxPGVariant DoGetAttribute(const  ::wxString&) const SIP_OVERRIDE;
     ::wxPGEditorDialogAdapter* GetEditorDialog() const SIP_OVERRIDE;
    void OnValidationFailure( ::wxPGVariant&) SIP_OVERRIDE;
     ::wxString GetValueAsString(int) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxEditorDialogProperty(const sipwxEditorDialogProperty &);
    sipwxEditorDialogProperty &operator = (const sipwxEditorDialogProperty &);

    char sipPyMethods[21];
};

sipwxEditorDialogProperty::sipwxEditorDialogProperty(const  ::wxString& label,const  ::wxString& name):  ::wxEditorDialogProperty(label,name), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxEditorDialogProperty::sipwxEditorDialogProperty(const  ::wxEditorDialogProperty& a0):  ::wxEditorDialogProperty(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxEditorDialogProperty::~sipwxEditorDialogProperty()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxEditorDialogProperty::DisplayEditorDialog( ::wxPropertyGrid*pg, ::wxPGVariant& value)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, sipName_EditorDialogProperty, sipName_DisplayEditorDialog);

    if (!sipMeth)
        return 0;

    extern bool sipVH__propgrid_72(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxPGVariant&);

    return sipVH__propgrid_72(sipGILState, 0, sipPySelf, sipMeth, pg, value);
}

void sipwxEditorDialogProperty::OnSetValue()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_OnSetValue);

    if (!sipMeth)
    {
         ::wxEditorDialogProperty::OnSetValue();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPGVariant sipwxEditorDialogProperty::DoGetValue() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DoGetValue);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::DoGetValue();

    extern  ::wxPGVariant sipVH__propgrid_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_4(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxEditorDialogProperty::ValidateValue( ::wxPGVariant& value, ::wxPGValidationInfo& validationInfo) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[3]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_ValidateValue);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::ValidateValue(value,validationInfo);

    extern bool sipVH__propgrid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&, ::wxPGValidationInfo&);

    return sipVH__propgrid_5(sipGILState, 0, sipPySelf, sipMeth, value, validationInfo);
}

bool sipwxEditorDialogProperty::StringToValue( ::wxPGVariant& variant,const  ::wxString& text,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[4]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_StringToValue);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::StringToValue(variant,text,argFlags);

    extern bool sipVH__propgrid_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,const  ::wxString&,int);

    return sipVH__propgrid_6(sipGILState, 0, sipPySelf, sipMeth, variant, text, argFlags);
}

bool sipwxEditorDialogProperty::IntToValue( ::wxPGVariant& variant,int number,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[5]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_IntToValue);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::IntToValue(variant,number,argFlags);

    extern bool sipVH__propgrid_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int,int);

    return sipVH__propgrid_7(sipGILState, 0, sipPySelf, sipMeth, variant, number, argFlags);
}

 ::wxString sipwxEditorDialogProperty::ValueToString( ::wxPGVariant& value,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[6]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_ValueToString);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::ValueToString(value,argFlags);

    extern  ::wxString sipVH__propgrid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int);

    return sipVH__propgrid_8(sipGILState, 0, sipPySelf, sipMeth, value, argFlags);
}

 ::wxSize sipwxEditorDialogProperty::OnMeasureImage(int item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[7]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_OnMeasureImage);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::OnMeasureImage(item);

    extern  ::wxSize sipVH__propgrid_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_9(sipGILState, 0, sipPySelf, sipMeth, item);
}

bool sipwxEditorDialogProperty::OnEvent( ::wxPropertyGrid*propgrid, ::wxWindow*wnd_primary, ::wxEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[8], &sipPySelf, SIP_NULLPTR, sipName_OnEvent);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::OnEvent(propgrid,wnd_primary,event);

    extern bool sipVH__propgrid_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxWindow*, ::wxEvent&);

    return sipVH__propgrid_10(sipGILState, 0, sipPySelf, sipMeth, propgrid, wnd_primary, event);
}

 ::wxPGVariant sipwxEditorDialogProperty::ChildChanged( ::wxPGVariant& thisValue,int childIndex, ::wxPGVariant& childValue) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[9]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_ChildChanged);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::ChildChanged(thisValue,childIndex,childValue);

    extern  ::wxPGVariant sipVH__propgrid_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int, ::wxPGVariant&);

    return sipVH__propgrid_11(sipGILState, 0, sipPySelf, sipMeth, thisValue, childIndex, childValue);
}

const  ::wxPGEditor* sipwxEditorDialogProperty::DoGetEditorClass() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[10]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DoGetEditorClass);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::DoGetEditorClass();

    extern const  ::wxPGEditor* sipVH__propgrid_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_12(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxValidator* sipwxEditorDialogProperty::DoGetValidator() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[11]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DoGetValidator);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::DoGetValidator();

    extern  ::wxValidator* sipVH__propgrid_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_13(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxEditorDialogProperty::OnCustomPaint( ::wxDC& dc,const  ::wxRect& rect, ::wxPGPaintData& paintdata)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[12], &sipPySelf, SIP_NULLPTR, sipName_OnCustomPaint);

    if (!sipMeth)
    {
         ::wxEditorDialogProperty::OnCustomPaint(dc,rect,paintdata);
        return;
    }

    extern void sipVH__propgrid_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&, ::wxPGPaintData&);

    sipVH__propgrid_14(sipGILState, 0, sipPySelf, sipMeth, dc, rect, paintdata);
}

 ::wxPGCellRenderer* sipwxEditorDialogProperty::GetCellRenderer(int column) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[13]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetCellRenderer);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::GetCellRenderer(column);

    extern  ::wxPGCellRenderer* sipVH__propgrid_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_15(sipGILState, 0, sipPySelf, sipMeth, column);
}

int sipwxEditorDialogProperty::GetChoiceSelection() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[14]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetChoiceSelection);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::GetChoiceSelection();

    extern int sipVH__propgrid_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_16(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxEditorDialogProperty::RefreshChildren()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[15], &sipPySelf, SIP_NULLPTR, sipName_RefreshChildren);

    if (!sipMeth)
    {
         ::wxEditorDialogProperty::RefreshChildren();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxEditorDialogProperty::DoSetAttribute(const  ::wxString& name, ::wxPGVariant& value)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[16], &sipPySelf, SIP_NULLPTR, sipName_DoSetAttribute);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::DoSetAttribute(name,value);

    extern bool sipVH__propgrid_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&, ::wxPGVariant&);

    return sipVH__propgrid_17(sipGILState, 0, sipPySelf, sipMeth, name, value);
}

 ::wxPGVariant sipwxEditorDialogProperty::DoGetAttribute(const  ::wxString& name) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[17]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DoGetAttribute);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::DoGetAttribute(name);

    extern  ::wxPGVariant sipVH__propgrid_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__propgrid_18(sipGILState, 0, sipPySelf, sipMeth, name);
}

 ::wxPGEditorDialogAdapter* sipwxEditorDialogProperty::GetEditorDialog() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[18]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetEditorDialog);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::GetEditorDialog();

    extern  ::wxPGEditorDialogAdapter* sipVH__propgrid_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_19(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxEditorDialogProperty::OnValidationFailure( ::wxPGVariant& pendingValue)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[19], &sipPySelf, SIP_NULLPTR, sipName_OnValidationFailure);

    if (!sipMeth)
    {
         ::wxEditorDialogProperty::OnValidationFailure(pendingValue);
        return;
    }

    extern void sipVH__propgrid_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&);

    sipVH__propgrid_20(sipGILState, 0, sipPySelf, sipMeth, pendingValue);
}

 ::wxString sipwxEditorDialogProperty::GetValueAsString(int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[20]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetValueAsString);

    if (!sipMeth)
        return  ::wxEditorDialogProperty::GetValueAsString(argFlags);

    extern  ::wxString sipVH__propgrid_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_21(sipGILState, 0, sipPySelf, sipMeth, argFlags);
}

bool sipwxEditorDialogProperty::sipProtect_DisplayEditorDialog( ::wxPropertyGrid*pg, ::wxPGVariant& value)
{
    return DisplayEditorDialog(pg,value);
}


PyDoc_STRVAR(doc_wxEditorDialogProperty_GetEditorDialog, "GetEditorDialog() -> PGEditorDialogAdapter\n"
"\n"
"Returns instance of a new wxPGEditorDialogAdapter instance, which is\n"
"used when user presses the (optional) button next to the editor\n"
"control;.");

extern "C" {static PyObject *meth_wxEditorDialogProperty_GetEditorDialog(PyObject *, PyObject *);}
static PyObject *meth_wxEditorDialogProperty_GetEditorDialog(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxEditorDialogProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEditorDialogProperty, &sipCpp))
        {
             ::wxPGEditorDialogAdapter*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxEditorDialogProperty::GetEditorDialog() : sipCpp->GetEditorDialog());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPGEditorDialogAdapter,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_EditorDialogProperty, sipName_GetEditorDialog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEditorDialogProperty_DoSetAttribute, "DoSetAttribute(name, value) -> bool\n"
"\n"
"Reimplement this member function to add special handling for\n"
"attributes of this property.");

extern "C" {static PyObject *meth_wxEditorDialogProperty_DoSetAttribute(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxEditorDialogProperty_DoSetAttribute(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* name;
        int nameState = 0;
         ::wxPGVariant* value;
        int valueState = 0;
         ::wxEditorDialogProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_name,
            sipName_value,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1J1", &sipSelf, sipType_wxEditorDialogProperty, &sipCpp, sipType_wxString, &name, &nameState, sipType_wxPGVariant, &value, &valueState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxEditorDialogProperty::DoSetAttribute(*name,*value) : sipCpp->DoSetAttribute(*name,*value));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(name), sipType_wxString, nameState);
            sipReleaseType(value, sipType_wxPGVariant, valueState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EditorDialogProperty, sipName_DoSetAttribute, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEditorDialogProperty_DisplayEditorDialog, "DisplayEditorDialog(pg, value) -> bool\n"
"\n"
"Shows editor dialog.");

extern "C" {static PyObject *meth_wxEditorDialogProperty_DisplayEditorDialog(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxEditorDialogProperty_DisplayEditorDialog(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxPropertyGrid* pg;
         ::wxPGVariant* value;
        int valueState = 0;
        sipwxEditorDialogProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pg,
            sipName_value,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1", &sipSelf, sipType_wxEditorDialogProperty, &sipCpp, sipType_wxPropertyGrid, &pg, sipType_wxPGVariant, &value, &valueState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_EditorDialogProperty, sipName_DisplayEditorDialog);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtect_DisplayEditorDialog(pg,*value);
            Py_END_ALLOW_THREADS
            sipReleaseType(value, sipType_wxPGVariant, valueState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EditorDialogProperty, sipName_DisplayEditorDialog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxEditorDialogProperty(void *, const sipTypeDef *);}
static void *cast_wxEditorDialogProperty(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxEditorDialogProperty *sipCpp = reinterpret_cast< ::wxEditorDialogProperty *>(sipCppV);

    if (targetType == sipType_wxEditorDialogProperty)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxPGProperty)->ctd_cast(static_cast< ::wxPGProperty *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxEditorDialogProperty(void *, int);}
static void release_wxEditorDialogProperty(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxEditorDialogProperty *>(sipCppV);
    else
        delete reinterpret_cast< ::wxEditorDialogProperty *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxEditorDialogProperty(sipSimpleWrapper *);}
static void dealloc_wxEditorDialogProperty(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxEditorDialogProperty *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxEditorDialogProperty(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxEditorDialogProperty(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxEditorDialogProperty(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxEditorDialogProperty *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString* label;
        int labelState = 0;
        const  ::wxString* name;
        int nameState = 0;

        static const char *sipKwdList[] = {
            sipName_label,
            sipName_name,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1", sipType_wxString, &label, &labelState, sipType_wxString, &name, &nameState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxEditorDialogProperty(*label,*name);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(label), sipType_wxString, labelState);
            sipReleaseType(const_cast< ::wxString *>(name), sipType_wxString, nameState);

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
        const  ::wxEditorDialogProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxEditorDialogProperty, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxEditorDialogProperty(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxEditorDialogProperty[] = {{44, 255, 1}};


static PyMethodDef methods_wxEditorDialogProperty[] = {
    {sipName_DisplayEditorDialog, SIP_MLMETH_CAST(meth_wxEditorDialogProperty_DisplayEditorDialog), METH_VARARGS|METH_KEYWORDS, doc_wxEditorDialogProperty_DisplayEditorDialog},
    {sipName_DoSetAttribute, SIP_MLMETH_CAST(meth_wxEditorDialogProperty_DoSetAttribute), METH_VARARGS|METH_KEYWORDS, doc_wxEditorDialogProperty_DoSetAttribute},
    {sipName_GetEditorDialog, meth_wxEditorDialogProperty_GetEditorDialog, METH_VARARGS, doc_wxEditorDialogProperty_GetEditorDialog}
};

sipVariableDef variables_wxEditorDialogProperty[] = {
    {PropertyVariable, sipName_EditorDialog, &methods_wxEditorDialogProperty[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxEditorDialogProperty, "EditorDialogProperty(label, name)\n"
"\n"
"This is an abstract class which serves as a base class for the\n"
"properties having a button triggering an editor dialog, like e.g.");


sipClassTypeDef sipTypeDef__propgrid_wxEditorDialogProperty = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxEditorDialogProperty,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_EditorDialogProperty,
        {0, 0, 1},
        3, methods_wxEditorDialogProperty,
        0, SIP_NULLPTR,
        1, variables_wxEditorDialogProperty,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxEditorDialogProperty,
    -1,
    -1,
    supers_wxEditorDialogProperty,
    SIP_NULLPTR,
    init_type_wxEditorDialogProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxEditorDialogProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxEditorDialogProperty,
    cast_wxEditorDialogProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
