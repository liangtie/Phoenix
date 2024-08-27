/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"
        #include <wx/propgrid/propgrid.h>
        #include <wx/event.h>
        #include <wx/propgrid/property.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxPropertyGridEvent : public  ::wxPropertyGridEvent
{
public:
    sipwxPropertyGridEvent( ::wxEventType,int);
    sipwxPropertyGridEvent(const  ::wxPropertyGridEvent&);
    virtual ~sipwxPropertyGridEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxEventCategory GetEventCategory() const SIP_OVERRIDE;
     ::wxEvent* Clone() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPropertyGridEvent(const sipwxPropertyGridEvent &);
    sipwxPropertyGridEvent &operator = (const sipwxPropertyGridEvent &);

    char sipPyMethods[2];
};

sipwxPropertyGridEvent::sipwxPropertyGridEvent( ::wxEventType commandType,int id):  ::wxPropertyGridEvent(commandType,id), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPropertyGridEvent::sipwxPropertyGridEvent(const  ::wxPropertyGridEvent& event):  ::wxPropertyGridEvent(event), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPropertyGridEvent::~sipwxPropertyGridEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEventCategory sipwxPropertyGridEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxPropertyGridEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__propgrid_66(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_66(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxPropertyGridEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::wxPropertyGridEvent::Clone();

    extern  ::wxEvent* sipVH__propgrid_65(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_65(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_CanVeto, "CanVeto() -> bool\n"
"\n"
"Returns true if you can veto the action that the event is signaling.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_CanVeto(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_CanVeto(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->CanVeto();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_CanVeto, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_GetColumn, "GetColumn() -> unsignedint\n"
"\n"
"Returns the column index associated with this event.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_GetColumn(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_GetColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
            uint sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetColumn();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_GetColumn, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_GetMainParent, "GetMainParent() -> PGProperty\n"
"\n"
"Returns highest level non-category, non-root parent of property for\n"
"which event occurred.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_GetMainParent(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_GetMainParent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
             ::wxPGProperty*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetMainParent();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPGProperty,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_GetMainParent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_GetProperty, "GetProperty() -> PGProperty\n"
"\n"
"Returns property associated with this event.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_GetProperty(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_GetProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
             ::wxPGProperty*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetProperty();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPGProperty,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_GetProperty, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_GetValidationFailureBehavior, "GetValidationFailureBehavior() -> byte\n"
"\n"
"Returns current validation failure flags.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_GetValidationFailureBehavior(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_GetValidationFailureBehavior(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
             ::byte sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetValidationFailureBehavior();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_GetValidationFailureBehavior, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_GetPropertyName, "GetPropertyName() -> String\n"
"\n"
"Returns name of the associated property.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_GetPropertyName(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_GetPropertyName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetPropertyName());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_GetPropertyName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_GetPropertyValue, "GetPropertyValue() -> PGVariant\n"
"\n"
"Returns value of the associated property.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_GetPropertyValue(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_GetPropertyValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
             ::wxPGVariant*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPGVariant(sipCpp->GetPropertyValue());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPGVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_GetPropertyValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_GetValue, "GetValue() -> PGVariant\n"
"\n"
"Returns value of the associated property.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_GetValue(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_GetValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
             ::wxPGVariant*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPGVariant(sipCpp->GetValue());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPGVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_GetValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_SetCanVeto, "SetCanVeto(canVeto)\n"
"\n"
"Set if event can be vetoed.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_SetCanVeto(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_SetCanVeto(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool canVeto;
         ::wxPropertyGridEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_canVeto,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp, &canVeto))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetCanVeto(canVeto);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_SetCanVeto, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_SetProperty, "SetProperty(p)\n"
"\n"
"Changes the property associated with this event.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_SetProperty(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_SetProperty(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPGProperty* p;
         ::wxPropertyGridEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_p,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp, sipType_wxPGProperty, &p))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetProperty(p);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_SetProperty, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_SetValidationFailureBehavior, "SetValidationFailureBehavior(flags)\n"
"\n"
"Set override validation failure behaviour.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_SetValidationFailureBehavior(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_SetValidationFailureBehavior(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::byte flags;
         ::wxPropertyGridEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BM", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp, &flags))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetValidationFailureBehavior(flags);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_SetValidationFailureBehavior, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_SetValidationFailureMessage, "SetValidationFailureMessage(message)\n"
"\n"
"Sets custom failure message for this time only.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_SetValidationFailureMessage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_SetValidationFailureMessage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* message;
        int messageState = 0;
         ::wxPropertyGridEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_message,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp, sipType_wxString, &message, &messageState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetValidationFailureMessage(*message);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(message), sipType_wxString, messageState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_SetValidationFailureMessage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_Veto, "Veto(veto=True)\n"
"\n"
"Call this from your event handler to veto action that the event is\n"
"signaling.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_Veto(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_Veto(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool veto = 1;
         ::wxPropertyGridEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_veto,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|b", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp, &veto))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Veto(veto);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_Veto, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_WasVetoed, "WasVetoed() -> bool\n"
"\n"
"Returns true if event was vetoed.");

extern "C" {static PyObject *meth_wxPropertyGridEvent_WasVetoed(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_WasVetoed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->WasVetoed();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_WasVetoed, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPropertyGridEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxPropertyGridEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxPropertyGridEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxPropertyGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPropertyGridEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxPropertyGridEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_PropertyGridEvent, sipName_Clone, doc_wxPropertyGridEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPropertyGridEvent(void *, const sipTypeDef *);}
static void *cast_wxPropertyGridEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPropertyGridEvent *sipCpp = reinterpret_cast< ::wxPropertyGridEvent *>(sipCppV);

    if (targetType == sipType_wxPropertyGridEvent)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxCommandEvent)->ctd_cast(static_cast< ::wxCommandEvent *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPropertyGridEvent(void *, int);}
static void release_wxPropertyGridEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPropertyGridEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPropertyGridEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPropertyGridEvent(sipSimpleWrapper *);}
static void dealloc_wxPropertyGridEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPropertyGridEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPropertyGridEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPropertyGridEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPropertyGridEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPropertyGridEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType commandType = 0;
        int id = 0;

        static const char *sipKwdList[] = {
            sipName_commandType,
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &commandType, &id))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPropertyGridEvent(commandType,id);
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
        const  ::wxPropertyGridEvent* event;

        static const char *sipKwdList[] = {
            sipName_event,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxPropertyGridEvent, &event))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPropertyGridEvent(*event);
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
static sipEncodedTypeDef supers_wxPropertyGridEvent[] = {{7, 0, 1}};


static PyMethodDef methods_wxPropertyGridEvent[] = {
    {sipName_CanVeto, meth_wxPropertyGridEvent_CanVeto, METH_VARARGS, doc_wxPropertyGridEvent_CanVeto},
    {sipName_Clone, meth_wxPropertyGridEvent_Clone, METH_VARARGS, doc_wxPropertyGridEvent_Clone},
    {sipName_GetColumn, meth_wxPropertyGridEvent_GetColumn, METH_VARARGS, doc_wxPropertyGridEvent_GetColumn},
    {sipName_GetMainParent, meth_wxPropertyGridEvent_GetMainParent, METH_VARARGS, doc_wxPropertyGridEvent_GetMainParent},
    {sipName_GetProperty, meth_wxPropertyGridEvent_GetProperty, METH_VARARGS, doc_wxPropertyGridEvent_GetProperty},
    {sipName_GetPropertyName, meth_wxPropertyGridEvent_GetPropertyName, METH_VARARGS, doc_wxPropertyGridEvent_GetPropertyName},
    {sipName_GetPropertyValue, meth_wxPropertyGridEvent_GetPropertyValue, METH_VARARGS, doc_wxPropertyGridEvent_GetPropertyValue},
    {sipName_GetValidationFailureBehavior, meth_wxPropertyGridEvent_GetValidationFailureBehavior, METH_VARARGS, doc_wxPropertyGridEvent_GetValidationFailureBehavior},
    {sipName_GetValue, meth_wxPropertyGridEvent_GetValue, METH_VARARGS, doc_wxPropertyGridEvent_GetValue},
    {sipName_SetCanVeto, SIP_MLMETH_CAST(meth_wxPropertyGridEvent_SetCanVeto), METH_VARARGS|METH_KEYWORDS, doc_wxPropertyGridEvent_SetCanVeto},
    {sipName_SetProperty, SIP_MLMETH_CAST(meth_wxPropertyGridEvent_SetProperty), METH_VARARGS|METH_KEYWORDS, doc_wxPropertyGridEvent_SetProperty},
    {sipName_SetValidationFailureBehavior, SIP_MLMETH_CAST(meth_wxPropertyGridEvent_SetValidationFailureBehavior), METH_VARARGS|METH_KEYWORDS, doc_wxPropertyGridEvent_SetValidationFailureBehavior},
    {sipName_SetValidationFailureMessage, SIP_MLMETH_CAST(meth_wxPropertyGridEvent_SetValidationFailureMessage), METH_VARARGS|METH_KEYWORDS, doc_wxPropertyGridEvent_SetValidationFailureMessage},
    {sipName_Veto, SIP_MLMETH_CAST(meth_wxPropertyGridEvent_Veto), METH_VARARGS|METH_KEYWORDS, doc_wxPropertyGridEvent_Veto},
    {sipName_WasVetoed, meth_wxPropertyGridEvent_WasVetoed, METH_VARARGS, doc_wxPropertyGridEvent_WasVetoed}
};

sipVariableDef variables_wxPropertyGridEvent[] = {
    {PropertyVariable, sipName_Value, &methods_wxPropertyGridEvent[8], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ValidationFailureBehavior, &methods_wxPropertyGridEvent[7], &methods_wxPropertyGridEvent[11], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_PropertyValue, &methods_wxPropertyGridEvent[6], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_PropertyName, &methods_wxPropertyGridEvent[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Property, &methods_wxPropertyGridEvent[4], &methods_wxPropertyGridEvent[10], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_MainParent, &methods_wxPropertyGridEvent[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Column, &methods_wxPropertyGridEvent[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPropertyGridEvent, "PropertyGridEvent(commandType=0, id=0)\n"
"PropertyGridEvent(event)\n"
"\n"
"A property grid event holds information about events associated with\n"
"wxPropertyGrid objects.");


sipClassTypeDef sipTypeDef__propgrid_wxPropertyGridEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxPropertyGridEvent,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_PropertyGridEvent,
        {0, 0, 1},
        15, methods_wxPropertyGridEvent,
        0, SIP_NULLPTR,
        7, variables_wxPropertyGridEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPropertyGridEvent,
    -1,
    -1,
    supers_wxPropertyGridEvent,
    SIP_NULLPTR,
    init_type_wxPropertyGridEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxPropertyGridEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPropertyGridEvent,
    cast_wxPropertyGridEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
