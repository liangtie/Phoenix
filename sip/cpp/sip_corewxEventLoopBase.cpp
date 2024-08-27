/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/evtloop.h>



PyDoc_STRVAR(doc_wxEventLoopBase_Run, "Run() -> int\n"
"\n"
"Start the event loop, return the exit code when it is finished.");

extern "C" {static PyObject *meth_wxEventLoopBase_Run(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_Run(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_EventLoopBase, sipName_Run);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Run();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_Run, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_IsRunning, "IsRunning() -> bool\n"
"\n"
"Return true if this event loop is currently running.");

extern "C" {static PyObject *meth_wxEventLoopBase_IsRunning(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_IsRunning(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsRunning();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_IsRunning, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_IsOk, "IsOk() -> bool\n"
"\n"
"Use this to check whether the event loop was successfully created\n"
"before using it.");

extern "C" {static PyObject *meth_wxEventLoopBase_IsOk(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_IsOk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxEventLoopBase::IsOk() : sipCpp->IsOk());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_IsOk, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_Exit, "Exit(rc=0)\n"
"\n"
"Exit the currently running loop with the given exit code.");

extern "C" {static PyObject *meth_wxEventLoopBase_Exit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_Exit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int rc = 0;
         ::wxEventLoopBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_rc,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|i", &sipSelf, sipType_wxEventLoopBase, &sipCpp, &rc))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxEventLoopBase::Exit(rc) : sipCpp->Exit(rc));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_Exit, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_ScheduleExit, "ScheduleExit(rc=0)\n"
"\n"
"Schedule an exit from the loop with the given exit code.");

extern "C" {static PyObject *meth_wxEventLoopBase_ScheduleExit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_ScheduleExit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        int rc = 0;
         ::wxEventLoopBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_rc,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|i", &sipSelf, sipType_wxEventLoopBase, &sipCpp, &rc))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_EventLoopBase, sipName_ScheduleExit);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->ScheduleExit(rc);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_ScheduleExit, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_Pending, "Pending() -> bool\n"
"\n"
"Return true if any events are available.");

extern "C" {static PyObject *meth_wxEventLoopBase_Pending(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_Pending(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_EventLoopBase, sipName_Pending);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Pending();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_Pending, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_Dispatch, "Dispatch() -> bool\n"
"\n"
"Dispatches the next event in the windowing system event queue.");

extern "C" {static PyObject *meth_wxEventLoopBase_Dispatch(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_Dispatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_EventLoopBase, sipName_Dispatch);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Dispatch();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_Dispatch, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_DispatchTimeout, "DispatchTimeout(timeout) -> int\n"
"\n"
"Dispatch an event but not wait longer than the specified timeout for\n"
"it.");

extern "C" {static PyObject *meth_wxEventLoopBase_DispatchTimeout(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_DispatchTimeout(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        unsigned long timeout;
         ::wxEventLoopBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_timeout,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bm", &sipSelf, sipType_wxEventLoopBase, &sipCpp, &timeout))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_EventLoopBase, sipName_DispatchTimeout);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->DispatchTimeout(timeout);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_DispatchTimeout, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_WakeUp, "WakeUp()\n"
"\n"
"Called by wxWidgets to wake up the event loop even if it is currently\n"
"blocked inside Dispatch().");

extern "C" {static PyObject *meth_wxEventLoopBase_WakeUp(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_WakeUp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_EventLoopBase, sipName_WakeUp);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->WakeUp();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_WakeUp, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_WakeUpIdle, "WakeUpIdle()\n"
"\n"
"Makes sure that idle events are sent again.");

extern "C" {static PyObject *meth_wxEventLoopBase_WakeUpIdle(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_WakeUpIdle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->WakeUpIdle();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_WakeUpIdle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_ProcessIdle, "ProcessIdle() -> bool\n"
"\n"
"This virtual function is called when the application becomes idle and\n"
"normally just sends wxIdleEvent to all interested parties.");

extern "C" {static PyObject *meth_wxEventLoopBase_ProcessIdle(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_ProcessIdle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxEventLoopBase::ProcessIdle() : sipCpp->ProcessIdle());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_ProcessIdle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_IsYielding, "IsYielding() -> bool\n"
"\n"
"Returns true if called from inside Yield() or from inside YieldFor().");

extern "C" {static PyObject *meth_wxEventLoopBase_IsYielding(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_IsYielding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxEventLoopBase::IsYielding() : sipCpp->IsYielding());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_IsYielding, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_Yield, "Yield(onlyIfNeeded=False) -> bool\n"
"\n"
"Yields control to pending messages in the windowing system.");

extern "C" {static PyObject *meth_wxEventLoopBase_Yield(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_Yield(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool onlyIfNeeded = 0;
         ::wxEventLoopBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_onlyIfNeeded,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|b", &sipSelf, sipType_wxEventLoopBase, &sipCpp, &onlyIfNeeded))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Yield(onlyIfNeeded);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_Yield, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_YieldFor, "YieldFor(eventsToProcess) -> bool\n"
"\n"
"Works like Yield() with onlyIfNeeded == true, except that it allows\n"
"the caller to specify a mask of the wxEventCategory values which\n"
"indicates which events should be processed and which should instead be\n"
"\"delayed\" (i.e.");

extern "C" {static PyObject *meth_wxEventLoopBase_YieldFor(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_YieldFor(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long eventsToProcess;
         ::wxEventLoopBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_eventsToProcess,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxEventLoopBase, &sipCpp, &eventsToProcess))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->YieldFor(eventsToProcess);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_YieldFor, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_IsEventAllowedInsideYield, "IsEventAllowedInsideYield(cat) -> bool\n"
"\n"
"Returns true if the given event category is allowed inside a\n"
"YieldFor() call (i.e.");

extern "C" {static PyObject *meth_wxEventLoopBase_IsEventAllowedInsideYield(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_IsEventAllowedInsideYield(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxEventCategory cat;
        const  ::wxEventLoopBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_cat,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxEventLoopBase, &sipCpp, sipType_wxEventCategory, &cat))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxEventLoopBase::IsEventAllowedInsideYield(cat) : sipCpp->IsEventAllowedInsideYield(cat));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_IsEventAllowedInsideYield, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_GetActive, "GetActive() -> EventLoopBase\n"
"\n"
"Return the currently active (running) event loop.");

extern "C" {static PyObject *meth_wxEventLoopBase_GetActive(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_GetActive(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::wxEventLoopBase*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxEventLoopBase::GetActive();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxEventLoopBase,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_GetActive, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_SetActive, "SetActive(loop)\n"
"\n"
"Set currently active (running) event loop.");

extern "C" {static PyObject *meth_wxEventLoopBase_SetActive(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_SetActive(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxEventLoopBase* loop;

        static const char *sipKwdList[] = {
            sipName_loop,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J8", sipType_wxEventLoopBase, &loop))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
             ::wxEventLoopBase::SetActive(loop);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_SetActive, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxEventLoopBase_IsMain, "IsMain() -> bool\n"
"\n"
"Returns true if this is the main loop executed by wxApp::OnRun().");

extern "C" {static PyObject *meth_wxEventLoopBase_IsMain(PyObject *, PyObject *);}
static PyObject *meth_wxEventLoopBase_IsMain(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxEventLoopBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxEventLoopBase, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsMain();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_EventLoopBase, sipName_IsMain, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxEventLoopBase(void *, int);}
static void release_wxEventLoopBase(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxEventLoopBase *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxEventLoopBase(sipSimpleWrapper *);}
static void dealloc_wxEventLoopBase(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxEventLoopBase(sipGetAddress(sipSelf), 0);
    }
}


static PyMethodDef methods_wxEventLoopBase[] = {
    {sipName_Dispatch, meth_wxEventLoopBase_Dispatch, METH_VARARGS, doc_wxEventLoopBase_Dispatch},
    {sipName_DispatchTimeout, SIP_MLMETH_CAST(meth_wxEventLoopBase_DispatchTimeout), METH_VARARGS|METH_KEYWORDS, doc_wxEventLoopBase_DispatchTimeout},
    {sipName_Exit, SIP_MLMETH_CAST(meth_wxEventLoopBase_Exit), METH_VARARGS|METH_KEYWORDS, doc_wxEventLoopBase_Exit},
    {sipName_GetActive, meth_wxEventLoopBase_GetActive, METH_VARARGS, doc_wxEventLoopBase_GetActive},
    {sipName_IsEventAllowedInsideYield, SIP_MLMETH_CAST(meth_wxEventLoopBase_IsEventAllowedInsideYield), METH_VARARGS|METH_KEYWORDS, doc_wxEventLoopBase_IsEventAllowedInsideYield},
    {sipName_IsMain, meth_wxEventLoopBase_IsMain, METH_VARARGS, doc_wxEventLoopBase_IsMain},
    {sipName_IsOk, meth_wxEventLoopBase_IsOk, METH_VARARGS, doc_wxEventLoopBase_IsOk},
    {sipName_IsRunning, meth_wxEventLoopBase_IsRunning, METH_VARARGS, doc_wxEventLoopBase_IsRunning},
    {sipName_IsYielding, meth_wxEventLoopBase_IsYielding, METH_VARARGS, doc_wxEventLoopBase_IsYielding},
    {sipName_Pending, meth_wxEventLoopBase_Pending, METH_VARARGS, doc_wxEventLoopBase_Pending},
    {sipName_ProcessIdle, meth_wxEventLoopBase_ProcessIdle, METH_VARARGS, doc_wxEventLoopBase_ProcessIdle},
    {sipName_Run, meth_wxEventLoopBase_Run, METH_VARARGS, doc_wxEventLoopBase_Run},
    {sipName_ScheduleExit, SIP_MLMETH_CAST(meth_wxEventLoopBase_ScheduleExit), METH_VARARGS|METH_KEYWORDS, doc_wxEventLoopBase_ScheduleExit},
    {sipName_SetActive, SIP_MLMETH_CAST(meth_wxEventLoopBase_SetActive), METH_VARARGS|METH_KEYWORDS, doc_wxEventLoopBase_SetActive},
    {sipName_WakeUp, meth_wxEventLoopBase_WakeUp, METH_VARARGS, doc_wxEventLoopBase_WakeUp},
    {sipName_WakeUpIdle, meth_wxEventLoopBase_WakeUpIdle, METH_VARARGS, doc_wxEventLoopBase_WakeUpIdle},
    {sipName_Yield, SIP_MLMETH_CAST(meth_wxEventLoopBase_Yield), METH_VARARGS|METH_KEYWORDS, doc_wxEventLoopBase_Yield},
    {sipName_YieldFor, SIP_MLMETH_CAST(meth_wxEventLoopBase_YieldFor), METH_VARARGS|METH_KEYWORDS, doc_wxEventLoopBase_YieldFor}
};

PyDoc_STRVAR(doc_wxEventLoopBase, "Base class for all event loop implementations.");


sipClassTypeDef sipTypeDef__core_wxEventLoopBase = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxEventLoopBase,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_EventLoopBase,
        {0, 0, 1},
        18, methods_wxEventLoopBase,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxEventLoopBase,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxEventLoopBase,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxEventLoopBase,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
