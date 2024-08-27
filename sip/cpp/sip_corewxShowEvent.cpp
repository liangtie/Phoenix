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


class sipwxShowEvent : public  ::wxShowEvent
{
public:
    sipwxShowEvent(int,bool);
    sipwxShowEvent(const  ::wxShowEvent&);
    virtual ~sipwxShowEvent();

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
    sipwxShowEvent(const sipwxShowEvent &);
    sipwxShowEvent &operator = (const sipwxShowEvent &);

    char sipPyMethods[2];
};

sipwxShowEvent::sipwxShowEvent(int winid,bool show):  ::wxShowEvent(winid,show), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxShowEvent::sipwxShowEvent(const  ::wxShowEvent& a0):  ::wxShowEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxShowEvent::~sipwxShowEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxShowEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::wxShowEvent::Clone();

    extern  ::wxEvent* sipVH__core_103(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_103(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxShowEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxShowEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_104(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_104(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxShowEvent_SetShow, "SetShow(show)\n"
"\n"
"Set whether the windows was shown or hidden.");

extern "C" {static PyObject *meth_wxShowEvent_SetShow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxShowEvent_SetShow(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool show;
         ::wxShowEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_show,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxShowEvent, &sipCpp, &show))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetShow(show);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ShowEvent, sipName_SetShow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxShowEvent_IsShown, "IsShown() -> bool\n"
"\n"
"Return true if the window has been shown, false if it has been hidden.");

extern "C" {static PyObject *meth_wxShowEvent_IsShown(PyObject *, PyObject *);}
static PyObject *meth_wxShowEvent_IsShown(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxShowEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxShowEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsShown();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_ShowEvent, sipName_IsShown, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxShowEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxShowEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxShowEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxShowEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxShowEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxShowEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ShowEvent, sipName_Clone, doc_wxShowEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxShowEvent(void *, const sipTypeDef *);}
static void *cast_wxShowEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxShowEvent *sipCpp = reinterpret_cast< ::wxShowEvent *>(sipCppV);

    if (targetType == sipType_wxShowEvent)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxEvent)->ctd_cast(static_cast< ::wxEvent *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxShowEvent(void *, int);}
static void release_wxShowEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxShowEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxShowEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxShowEvent(sipSimpleWrapper *);}
static void dealloc_wxShowEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxShowEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxShowEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxShowEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxShowEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxShowEvent *sipCpp = SIP_NULLPTR;

    {
        int winid = 0;
        bool show = 0;

        static const char *sipKwdList[] = {
            sipName_winid,
            sipName_show,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ib", &winid, &show))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxShowEvent(winid,show);
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
        const  ::wxShowEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxShowEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxShowEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxShowEvent[] = {{151, 255, 1}};


static PyMethodDef methods_wxShowEvent[] = {
    {sipName_Clone, meth_wxShowEvent_Clone, METH_VARARGS, doc_wxShowEvent_Clone},
    {sipName_IsShown, meth_wxShowEvent_IsShown, METH_VARARGS, doc_wxShowEvent_IsShown},
    {sipName_SetShow, SIP_MLMETH_CAST(meth_wxShowEvent_SetShow), METH_VARARGS|METH_KEYWORDS, doc_wxShowEvent_SetShow}
};

sipVariableDef variables_wxShowEvent[] = {
    {PropertyVariable, sipName_Show, &methods_wxShowEvent[1], &methods_wxShowEvent[2], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxShowEvent, "ShowEvent(winid=0, show=False)\n"
"\n"
"An event being sent when the window is shown or hidden.");


sipClassTypeDef sipTypeDef__core_wxShowEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxShowEvent,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_ShowEvent,
        {0, 0, 1},
        3, methods_wxShowEvent,
        0, SIP_NULLPTR,
        1, variables_wxShowEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxShowEvent,
    -1,
    -1,
    supers_wxShowEvent,
    SIP_NULLPTR,
    init_type_wxShowEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxShowEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxShowEvent,
    cast_wxShowEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
