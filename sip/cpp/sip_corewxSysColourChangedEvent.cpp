/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/event.h>
        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxSysColourChangedEvent : public  ::wxSysColourChangedEvent
{
public:
    sipwxSysColourChangedEvent();
    sipwxSysColourChangedEvent(const  ::wxSysColourChangedEvent&);
    virtual ~sipwxSysColourChangedEvent();

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
    sipwxSysColourChangedEvent(const sipwxSysColourChangedEvent &);
    sipwxSysColourChangedEvent &operator = (const sipwxSysColourChangedEvent &);

    char sipPyMethods[2];
};

sipwxSysColourChangedEvent::sipwxSysColourChangedEvent():  ::wxSysColourChangedEvent(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxSysColourChangedEvent::sipwxSysColourChangedEvent(const  ::wxSysColourChangedEvent& a0):  ::wxSysColourChangedEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxSysColourChangedEvent::~sipwxSysColourChangedEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxSysColourChangedEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::wxSysColourChangedEvent::Clone();

    extern  ::wxEvent* sipVH__core_103(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_103(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxSysColourChangedEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxSysColourChangedEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_104(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_104(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxSysColourChangedEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxSysColourChangedEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxSysColourChangedEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxSysColourChangedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxSysColourChangedEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxSysColourChangedEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_SysColourChangedEvent, sipName_Clone, doc_wxSysColourChangedEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxSysColourChangedEvent(void *, const sipTypeDef *);}
static void *cast_wxSysColourChangedEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxSysColourChangedEvent *sipCpp = reinterpret_cast< ::wxSysColourChangedEvent *>(sipCppV);

    if (targetType == sipType_wxSysColourChangedEvent)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxEvent)->ctd_cast(static_cast< ::wxEvent *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxSysColourChangedEvent(void *, int);}
static void release_wxSysColourChangedEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxSysColourChangedEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxSysColourChangedEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxSysColourChangedEvent(sipSimpleWrapper *);}
static void dealloc_wxSysColourChangedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxSysColourChangedEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxSysColourChangedEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxSysColourChangedEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxSysColourChangedEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxSysColourChangedEvent *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxSysColourChangedEvent();
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
        const  ::wxSysColourChangedEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxSysColourChangedEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxSysColourChangedEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxSysColourChangedEvent[] = {{151, 255, 1}};


static PyMethodDef methods_wxSysColourChangedEvent[] = {
    {sipName_Clone, meth_wxSysColourChangedEvent_Clone, METH_VARARGS, doc_wxSysColourChangedEvent_Clone}
};

PyDoc_STRVAR(doc_wxSysColourChangedEvent, "SysColourChangedEvent()\n"
"\n"
"This class is used for system colour change events, which are\n"
"generated when the user changes the colour settings or when the system\n"
"theme changes (e.g. automatic dark mode switching on macOS).");


sipClassTypeDef sipTypeDef__core_wxSysColourChangedEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxSysColourChangedEvent,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_SysColourChangedEvent,
        {0, 0, 1},
        1, methods_wxSysColourChangedEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxSysColourChangedEvent,
    -1,
    -1,
    supers_wxSysColourChangedEvent,
    SIP_NULLPTR,
    init_type_wxSysColourChangedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxSysColourChangedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxSysColourChangedEvent,
    cast_wxSysColourChangedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
