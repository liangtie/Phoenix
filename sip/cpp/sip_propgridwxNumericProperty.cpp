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
        #include <wx/propgrid/property.h>
        #include <wx/bmpbndl.h>
        #include <wx/validate.h>
        #include <wx/colour.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/editors.h>
        #include <wx/bitmap.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/propgrid/editors.h>
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


class sipwxNumericProperty : public  ::wxNumericProperty
{
public:
    sipwxNumericProperty(const  ::wxString&,const  ::wxString&);
    sipwxNumericProperty(const  ::wxNumericProperty&);
    virtual ~sipwxNumericProperty();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxPGVariant AddSpinStepValue(long) const SIP_OVERRIDE;
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
    sipwxNumericProperty(const sipwxNumericProperty &);
    sipwxNumericProperty &operator = (const sipwxNumericProperty &);

    char sipPyMethods[21];
};

sipwxNumericProperty::sipwxNumericProperty(const  ::wxString& label,const  ::wxString& name):  ::wxNumericProperty(label,name), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxNumericProperty::sipwxNumericProperty(const  ::wxNumericProperty& a0):  ::wxNumericProperty(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxNumericProperty::~sipwxNumericProperty()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxPGVariant sipwxNumericProperty::AddSpinStepValue(long stepScale) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_NumericProperty, sipName_AddSpinStepValue);

    if (!sipMeth)
        return  ::wxPGVariant();

    extern  ::wxPGVariant sipVH__propgrid_68(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, long);

    return sipVH__propgrid_68(sipGILState, 0, sipPySelf, sipMeth, stepScale);
}

void sipwxNumericProperty::OnSetValue()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_OnSetValue);

    if (!sipMeth)
    {
         ::wxNumericProperty::OnSetValue();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPGVariant sipwxNumericProperty::DoGetValue() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DoGetValue);

    if (!sipMeth)
        return  ::wxNumericProperty::DoGetValue();

    extern  ::wxPGVariant sipVH__propgrid_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_4(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxNumericProperty::ValidateValue( ::wxPGVariant& value, ::wxPGValidationInfo& validationInfo) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[3]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_ValidateValue);

    if (!sipMeth)
        return  ::wxNumericProperty::ValidateValue(value,validationInfo);

    extern bool sipVH__propgrid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&, ::wxPGValidationInfo&);

    return sipVH__propgrid_5(sipGILState, 0, sipPySelf, sipMeth, value, validationInfo);
}

bool sipwxNumericProperty::StringToValue( ::wxPGVariant& variant,const  ::wxString& text,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[4]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_StringToValue);

    if (!sipMeth)
        return  ::wxNumericProperty::StringToValue(variant,text,argFlags);

    extern bool sipVH__propgrid_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,const  ::wxString&,int);

    return sipVH__propgrid_6(sipGILState, 0, sipPySelf, sipMeth, variant, text, argFlags);
}

bool sipwxNumericProperty::IntToValue( ::wxPGVariant& variant,int number,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[5]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_IntToValue);

    if (!sipMeth)
        return  ::wxNumericProperty::IntToValue(variant,number,argFlags);

    extern bool sipVH__propgrid_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int,int);

    return sipVH__propgrid_7(sipGILState, 0, sipPySelf, sipMeth, variant, number, argFlags);
}

 ::wxString sipwxNumericProperty::ValueToString( ::wxPGVariant& value,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[6]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_ValueToString);

    if (!sipMeth)
        return  ::wxNumericProperty::ValueToString(value,argFlags);

    extern  ::wxString sipVH__propgrid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int);

    return sipVH__propgrid_8(sipGILState, 0, sipPySelf, sipMeth, value, argFlags);
}

 ::wxSize sipwxNumericProperty::OnMeasureImage(int item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[7]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_OnMeasureImage);

    if (!sipMeth)
        return  ::wxNumericProperty::OnMeasureImage(item);

    extern  ::wxSize sipVH__propgrid_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_9(sipGILState, 0, sipPySelf, sipMeth, item);
}

bool sipwxNumericProperty::OnEvent( ::wxPropertyGrid*propgrid, ::wxWindow*wnd_primary, ::wxEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[8], &sipPySelf, SIP_NULLPTR, sipName_OnEvent);

    if (!sipMeth)
        return  ::wxNumericProperty::OnEvent(propgrid,wnd_primary,event);

    extern bool sipVH__propgrid_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxWindow*, ::wxEvent&);

    return sipVH__propgrid_10(sipGILState, 0, sipPySelf, sipMeth, propgrid, wnd_primary, event);
}

 ::wxPGVariant sipwxNumericProperty::ChildChanged( ::wxPGVariant& thisValue,int childIndex, ::wxPGVariant& childValue) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[9]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_ChildChanged);

    if (!sipMeth)
        return  ::wxNumericProperty::ChildChanged(thisValue,childIndex,childValue);

    extern  ::wxPGVariant sipVH__propgrid_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int, ::wxPGVariant&);

    return sipVH__propgrid_11(sipGILState, 0, sipPySelf, sipMeth, thisValue, childIndex, childValue);
}

const  ::wxPGEditor* sipwxNumericProperty::DoGetEditorClass() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[10]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DoGetEditorClass);

    if (!sipMeth)
        return  ::wxNumericProperty::DoGetEditorClass();

    extern const  ::wxPGEditor* sipVH__propgrid_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_12(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxValidator* sipwxNumericProperty::DoGetValidator() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[11]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DoGetValidator);

    if (!sipMeth)
        return  ::wxNumericProperty::DoGetValidator();

    extern  ::wxValidator* sipVH__propgrid_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_13(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxNumericProperty::OnCustomPaint( ::wxDC& dc,const  ::wxRect& rect, ::wxPGPaintData& paintdata)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[12], &sipPySelf, SIP_NULLPTR, sipName_OnCustomPaint);

    if (!sipMeth)
    {
         ::wxNumericProperty::OnCustomPaint(dc,rect,paintdata);
        return;
    }

    extern void sipVH__propgrid_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&, ::wxPGPaintData&);

    sipVH__propgrid_14(sipGILState, 0, sipPySelf, sipMeth, dc, rect, paintdata);
}

 ::wxPGCellRenderer* sipwxNumericProperty::GetCellRenderer(int column) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[13]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetCellRenderer);

    if (!sipMeth)
        return  ::wxNumericProperty::GetCellRenderer(column);

    extern  ::wxPGCellRenderer* sipVH__propgrid_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_15(sipGILState, 0, sipPySelf, sipMeth, column);
}

int sipwxNumericProperty::GetChoiceSelection() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[14]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetChoiceSelection);

    if (!sipMeth)
        return  ::wxNumericProperty::GetChoiceSelection();

    extern int sipVH__propgrid_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_16(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxNumericProperty::RefreshChildren()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[15], &sipPySelf, SIP_NULLPTR, sipName_RefreshChildren);

    if (!sipMeth)
    {
         ::wxNumericProperty::RefreshChildren();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxNumericProperty::DoSetAttribute(const  ::wxString& name, ::wxPGVariant& value)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[16], &sipPySelf, SIP_NULLPTR, sipName_DoSetAttribute);

    if (!sipMeth)
        return  ::wxNumericProperty::DoSetAttribute(name,value);

    extern bool sipVH__propgrid_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&, ::wxPGVariant&);

    return sipVH__propgrid_17(sipGILState, 0, sipPySelf, sipMeth, name, value);
}

 ::wxPGVariant sipwxNumericProperty::DoGetAttribute(const  ::wxString& name) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[17]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_DoGetAttribute);

    if (!sipMeth)
        return  ::wxNumericProperty::DoGetAttribute(name);

    extern  ::wxPGVariant sipVH__propgrid_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__propgrid_18(sipGILState, 0, sipPySelf, sipMeth, name);
}

 ::wxPGEditorDialogAdapter* sipwxNumericProperty::GetEditorDialog() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[18]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetEditorDialog);

    if (!sipMeth)
        return  ::wxNumericProperty::GetEditorDialog();

    extern  ::wxPGEditorDialogAdapter* sipVH__propgrid_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_19(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxNumericProperty::OnValidationFailure( ::wxPGVariant& pendingValue)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[19], &sipPySelf, SIP_NULLPTR, sipName_OnValidationFailure);

    if (!sipMeth)
    {
         ::wxNumericProperty::OnValidationFailure(pendingValue);
        return;
    }

    extern void sipVH__propgrid_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&);

    sipVH__propgrid_20(sipGILState, 0, sipPySelf, sipMeth, pendingValue);
}

 ::wxString sipwxNumericProperty::GetValueAsString(int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[20]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetValueAsString);

    if (!sipMeth)
        return  ::wxNumericProperty::GetValueAsString(argFlags);

    extern  ::wxString sipVH__propgrid_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_21(sipGILState, 0, sipPySelf, sipMeth, argFlags);
}


PyDoc_STRVAR(doc_wxNumericProperty_DoSetAttribute, "DoSetAttribute(name, value) -> bool\n"
"\n"
"Reimplement this member function to add special handling for\n"
"attributes of this property.");

extern "C" {static PyObject *meth_wxNumericProperty_DoSetAttribute(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxNumericProperty_DoSetAttribute(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* name;
        int nameState = 0;
         ::wxPGVariant* value;
        int valueState = 0;
         ::wxNumericProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_name,
            sipName_value,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1J1", &sipSelf, sipType_wxNumericProperty, &sipCpp, sipType_wxString, &name, &nameState, sipType_wxPGVariant, &value, &valueState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxNumericProperty::DoSetAttribute(*name,*value) : sipCpp->DoSetAttribute(*name,*value));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(name), sipType_wxString, nameState);
            sipReleaseType(value, sipType_wxPGVariant, valueState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_NumericProperty, sipName_DoSetAttribute, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxNumericProperty_AddSpinStepValue, "AddSpinStepValue(stepScale) -> PGVariant\n"
"\n"
"Returns what would be the new value of the property after adding\n"
"SpinCtrl editor step to the current value.");

extern "C" {static PyObject *meth_wxNumericProperty_AddSpinStepValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxNumericProperty_AddSpinStepValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        long stepScale;
        const  ::wxNumericProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stepScale,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxNumericProperty, &sipCpp, &stepScale))
        {
             ::wxPGVariant*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_NumericProperty, sipName_AddSpinStepValue);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPGVariant(sipCpp->AddSpinStepValue(stepScale));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPGVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_NumericProperty, sipName_AddSpinStepValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxNumericProperty_UseSpinMotion, "UseSpinMotion() -> bool\n"
"\n"
"Return true if value can be changed with SpinCtrl editor by moving the\n"
"mouse.");

extern "C" {static PyObject *meth_wxNumericProperty_UseSpinMotion(PyObject *, PyObject *);}
static PyObject *meth_wxNumericProperty_UseSpinMotion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxNumericProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxNumericProperty, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->UseSpinMotion();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_NumericProperty, sipName_UseSpinMotion, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxNumericProperty(void *, const sipTypeDef *);}
static void *cast_wxNumericProperty(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxNumericProperty *sipCpp = reinterpret_cast< ::wxNumericProperty *>(sipCppV);

    if (targetType == sipType_wxNumericProperty)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxPGProperty)->ctd_cast(static_cast< ::wxPGProperty *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxNumericProperty(void *, int);}
static void release_wxNumericProperty(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxNumericProperty *>(sipCppV);
    else
        delete reinterpret_cast< ::wxNumericProperty *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxNumericProperty(sipSimpleWrapper *);}
static void dealloc_wxNumericProperty(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxNumericProperty *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxNumericProperty(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxNumericProperty(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxNumericProperty(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxNumericProperty *sipCpp = SIP_NULLPTR;

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
            sipCpp = new sipwxNumericProperty(*label,*name);
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
        const  ::wxNumericProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxNumericProperty, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxNumericProperty(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxNumericProperty[] = {{44, 255, 1}};


static PyMethodDef methods_wxNumericProperty[] = {
    {sipName_AddSpinStepValue, SIP_MLMETH_CAST(meth_wxNumericProperty_AddSpinStepValue), METH_VARARGS|METH_KEYWORDS, doc_wxNumericProperty_AddSpinStepValue},
    {sipName_DoSetAttribute, SIP_MLMETH_CAST(meth_wxNumericProperty_DoSetAttribute), METH_VARARGS|METH_KEYWORDS, doc_wxNumericProperty_DoSetAttribute},
    {sipName_UseSpinMotion, meth_wxNumericProperty_UseSpinMotion, METH_VARARGS, doc_wxNumericProperty_UseSpinMotion}
};

PyDoc_STRVAR(doc_wxNumericProperty, "NumericProperty(label, name)\n"
"\n"
"This is an abstract class which serves as a base class for numeric\n"
"properties, like wxIntProperty, wxUIntProperty, wxFloatProperty.");


sipClassTypeDef sipTypeDef__propgrid_wxNumericProperty = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxNumericProperty,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_NumericProperty,
        {0, 0, 1},
        3, methods_wxNumericProperty,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxNumericProperty,
    -1,
    -1,
    supers_wxNumericProperty,
    SIP_NULLPTR,
    init_type_wxNumericProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxNumericProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxNumericProperty,
    cast_wxNumericProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
