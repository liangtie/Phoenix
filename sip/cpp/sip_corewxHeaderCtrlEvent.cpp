/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/headerctrl.h>
        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxHeaderCtrlEvent : public  ::wxHeaderCtrlEvent
{
public:
    sipwxHeaderCtrlEvent( ::wxEventType,int);
    sipwxHeaderCtrlEvent(const  ::wxHeaderCtrlEvent&);
    virtual ~sipwxHeaderCtrlEvent();

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
    sipwxHeaderCtrlEvent(const sipwxHeaderCtrlEvent &);
    sipwxHeaderCtrlEvent &operator = (const sipwxHeaderCtrlEvent &);

    char sipPyMethods[2];
};

sipwxHeaderCtrlEvent::sipwxHeaderCtrlEvent( ::wxEventType commandType,int winid):  ::wxHeaderCtrlEvent(commandType,winid), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxHeaderCtrlEvent::sipwxHeaderCtrlEvent(const  ::wxHeaderCtrlEvent& event):  ::wxHeaderCtrlEvent(event), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxHeaderCtrlEvent::~sipwxHeaderCtrlEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxHeaderCtrlEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::wxHeaderCtrlEvent::Clone();

    extern  ::wxEvent* sipVH__core_103(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_103(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxHeaderCtrlEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxHeaderCtrlEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_104(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_104(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxHeaderCtrlEvent_GetColumn, "GetColumn() -> int\n"
"\n"
"Return the index of the column affected by this event.");

extern "C" {static PyObject *meth_wxHeaderCtrlEvent_GetColumn(PyObject *, PyObject *);}
static PyObject *meth_wxHeaderCtrlEvent_GetColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHeaderCtrlEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHeaderCtrlEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetColumn();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_HeaderCtrlEvent, sipName_GetColumn, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHeaderCtrlEvent_SetColumn, "SetColumn(col)");

extern "C" {static PyObject *meth_wxHeaderCtrlEvent_SetColumn(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHeaderCtrlEvent_SetColumn(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int col;
         ::wxHeaderCtrlEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxHeaderCtrlEvent, &sipCpp, &col))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetColumn(col);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HeaderCtrlEvent, sipName_SetColumn, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHeaderCtrlEvent_GetWidth, "GetWidth() -> int\n"
"\n"
"Return the current width of the column.");

extern "C" {static PyObject *meth_wxHeaderCtrlEvent_GetWidth(PyObject *, PyObject *);}
static PyObject *meth_wxHeaderCtrlEvent_GetWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHeaderCtrlEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHeaderCtrlEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetWidth();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_HeaderCtrlEvent, sipName_GetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHeaderCtrlEvent_SetWidth, "SetWidth(width)");

extern "C" {static PyObject *meth_wxHeaderCtrlEvent_SetWidth(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHeaderCtrlEvent_SetWidth(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int width;
         ::wxHeaderCtrlEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_width,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxHeaderCtrlEvent, &sipCpp, &width))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetWidth(width);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HeaderCtrlEvent, sipName_SetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHeaderCtrlEvent_GetNewOrder, "GetNewOrder() -> unsignedint\n"
"\n"
"Return the new order of the column.");

extern "C" {static PyObject *meth_wxHeaderCtrlEvent_GetNewOrder(PyObject *, PyObject *);}
static PyObject *meth_wxHeaderCtrlEvent_GetNewOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHeaderCtrlEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHeaderCtrlEvent, &sipCpp))
        {
            uint sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetNewOrder();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_HeaderCtrlEvent, sipName_GetNewOrder, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHeaderCtrlEvent_SetNewOrder, "SetNewOrder(order)");

extern "C" {static PyObject *meth_wxHeaderCtrlEvent_SetNewOrder(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHeaderCtrlEvent_SetNewOrder(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint order;
         ::wxHeaderCtrlEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_order,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxHeaderCtrlEvent, &sipCpp, &order))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetNewOrder(order);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HeaderCtrlEvent, sipName_SetNewOrder, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHeaderCtrlEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxHeaderCtrlEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxHeaderCtrlEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxHeaderCtrlEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHeaderCtrlEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxHeaderCtrlEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_HeaderCtrlEvent, sipName_Clone, doc_wxHeaderCtrlEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxHeaderCtrlEvent(void *, const sipTypeDef *);}
static void *cast_wxHeaderCtrlEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxHeaderCtrlEvent *sipCpp = reinterpret_cast< ::wxHeaderCtrlEvent *>(sipCppV);

    if (targetType == sipType_wxHeaderCtrlEvent)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxNotifyEvent)->ctd_cast(static_cast< ::wxNotifyEvent *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHeaderCtrlEvent(void *, int);}
static void release_wxHeaderCtrlEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxHeaderCtrlEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxHeaderCtrlEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxHeaderCtrlEvent(sipSimpleWrapper *);}
static void dealloc_wxHeaderCtrlEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxHeaderCtrlEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHeaderCtrlEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxHeaderCtrlEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxHeaderCtrlEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxHeaderCtrlEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType commandType = wxEVT_NULL;
        int winid = 0;

        static const char *sipKwdList[] = {
            sipName_commandType,
            sipName_winid,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &commandType, &winid))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxHeaderCtrlEvent(commandType,winid);
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
        const  ::wxHeaderCtrlEvent* event;

        static const char *sipKwdList[] = {
            sipName_event,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxHeaderCtrlEvent, &event))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxHeaderCtrlEvent(*event);
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
static sipEncodedTypeDef supers_wxHeaderCtrlEvent[] = {{390, 255, 1}};


static PyMethodDef methods_wxHeaderCtrlEvent[] = {
    {sipName_Clone, meth_wxHeaderCtrlEvent_Clone, METH_VARARGS, doc_wxHeaderCtrlEvent_Clone},
    {sipName_GetColumn, meth_wxHeaderCtrlEvent_GetColumn, METH_VARARGS, doc_wxHeaderCtrlEvent_GetColumn},
    {sipName_GetNewOrder, meth_wxHeaderCtrlEvent_GetNewOrder, METH_VARARGS, doc_wxHeaderCtrlEvent_GetNewOrder},
    {sipName_GetWidth, meth_wxHeaderCtrlEvent_GetWidth, METH_VARARGS, doc_wxHeaderCtrlEvent_GetWidth},
    {sipName_SetColumn, SIP_MLMETH_CAST(meth_wxHeaderCtrlEvent_SetColumn), METH_VARARGS|METH_KEYWORDS, doc_wxHeaderCtrlEvent_SetColumn},
    {sipName_SetNewOrder, SIP_MLMETH_CAST(meth_wxHeaderCtrlEvent_SetNewOrder), METH_VARARGS|METH_KEYWORDS, doc_wxHeaderCtrlEvent_SetNewOrder},
    {sipName_SetWidth, SIP_MLMETH_CAST(meth_wxHeaderCtrlEvent_SetWidth), METH_VARARGS|METH_KEYWORDS, doc_wxHeaderCtrlEvent_SetWidth}
};

sipVariableDef variables_wxHeaderCtrlEvent[] = {
    {PropertyVariable, sipName_Width, &methods_wxHeaderCtrlEvent[3], &methods_wxHeaderCtrlEvent[6], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_NewOrder, &methods_wxHeaderCtrlEvent[2], &methods_wxHeaderCtrlEvent[5], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Column, &methods_wxHeaderCtrlEvent[1], &methods_wxHeaderCtrlEvent[4], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHeaderCtrlEvent, "HeaderCtrlEvent(commandType=wxEVT_NULL, winid=0)\n"
"HeaderCtrlEvent(event)\n"
"\n"
"Event class representing the events generated by wxHeaderCtrl.");


sipClassTypeDef sipTypeDef__core_wxHeaderCtrlEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxHeaderCtrlEvent,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_HeaderCtrlEvent,
        {0, 0, 1},
        7, methods_wxHeaderCtrlEvent,
        0, SIP_NULLPTR,
        3, variables_wxHeaderCtrlEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHeaderCtrlEvent,
    -1,
    -1,
    supers_wxHeaderCtrlEvent,
    SIP_NULLPTR,
    init_type_wxHeaderCtrlEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxHeaderCtrlEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxHeaderCtrlEvent,
    cast_wxHeaderCtrlEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
