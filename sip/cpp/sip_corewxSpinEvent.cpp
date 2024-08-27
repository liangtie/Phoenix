/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/spinbutt.h>
        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxSpinEvent : public  ::wxSpinEvent
{
public:
    sipwxSpinEvent( ::wxEventType,int);
    sipwxSpinEvent(const  ::wxSpinEvent&);
    virtual ~sipwxSpinEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxEvent* Clone() const SIP_OVERRIDE;
     ::wxEventCategory GetEventCategory() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxSpinEvent(const sipwxSpinEvent &);
    sipwxSpinEvent &operator = (const sipwxSpinEvent &);

    char sipPyMethods[2];
};

sipwxSpinEvent::sipwxSpinEvent( ::wxEventType commandType,int id):  ::wxSpinEvent(commandType,id), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxSpinEvent::sipwxSpinEvent(const  ::wxSpinEvent& a0):  ::wxSpinEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxSpinEvent::~sipwxSpinEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxSpinEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::wxSpinEvent::Clone();

    extern  ::wxEvent* sipVH__core_103(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_103(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxSpinEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxSpinEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_104(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_104(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxSpinEvent_GetPosition, "GetPosition() -> int\n"
"\n"
"Retrieve the current spin button or control value.");

extern "C" {static PyObject *meth_wxSpinEvent_GetPosition(PyObject *, PyObject *);}
static PyObject *meth_wxSpinEvent_GetPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxSpinEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxSpinEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetPosition();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_SpinEvent, sipName_GetPosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxSpinEvent_SetPosition, "SetPosition(pos)\n"
"\n"
"Set the value associated with the event.");

extern "C" {static PyObject *meth_wxSpinEvent_SetPosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxSpinEvent_SetPosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int pos;
         ::wxSpinEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pos,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxSpinEvent, &sipCpp, &pos))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetPosition(pos);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_SpinEvent, sipName_SetPosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxSpinEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxSpinEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxSpinEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxSpinEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxSpinEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxSpinEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_SpinEvent, sipName_Clone, doc_wxSpinEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxSpinEvent(void *, const sipTypeDef *);}
static void *cast_wxSpinEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxSpinEvent *sipCpp = reinterpret_cast< ::wxSpinEvent *>(sipCppV);

    if (targetType == sipType_wxSpinEvent)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxNotifyEvent)->ctd_cast(static_cast< ::wxNotifyEvent *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxSpinEvent(void *, int);}
static void release_wxSpinEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxSpinEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxSpinEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxSpinEvent(sipSimpleWrapper *);}
static void dealloc_wxSpinEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxSpinEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxSpinEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxSpinEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxSpinEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxSpinEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType commandType = wxEVT_NULL;
        int id = 0;

        static const char *sipKwdList[] = {
            sipName_commandType,
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &commandType, &id))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxSpinEvent(commandType,id);
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
        const  ::wxSpinEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxSpinEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxSpinEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxSpinEvent[] = {{390, 255, 1}};


static PyMethodDef methods_wxSpinEvent[] = {
    {sipName_Clone, meth_wxSpinEvent_Clone, METH_VARARGS, doc_wxSpinEvent_Clone},
    {sipName_GetPosition, meth_wxSpinEvent_GetPosition, METH_VARARGS, doc_wxSpinEvent_GetPosition},
    {sipName_SetPosition, SIP_MLMETH_CAST(meth_wxSpinEvent_SetPosition), METH_VARARGS|METH_KEYWORDS, doc_wxSpinEvent_SetPosition}
};

sipVariableDef variables_wxSpinEvent[] = {
    {PropertyVariable, sipName_Position, &methods_wxSpinEvent[1], &methods_wxSpinEvent[2], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxSpinEvent, "SpinEvent(commandType=wxEVT_NULL, id=0)\n"
"\n"
"This event class is used for the events generated by wxSpinButton and\n"
"wxSpinCtrl.");


sipClassTypeDef sipTypeDef__core_wxSpinEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxSpinEvent,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_SpinEvent,
        {0, 0, 1},
        3, methods_wxSpinEvent,
        0, SIP_NULLPTR,
        1, variables_wxSpinEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxSpinEvent,
    -1,
    -1,
    supers_wxSpinEvent,
    SIP_NULLPTR,
    init_type_wxSpinEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxSpinEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxSpinEvent,
    cast_wxSpinEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
