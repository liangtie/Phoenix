/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/log.h>
        #include <wx/log.h>
        #include <wx/log.h>
        #include <wx/log.h>


class sipwxLogBuffer : public  ::wxLogBuffer
{
public:
    sipwxLogBuffer();
    virtual ~sipwxLogBuffer();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtectVirt_DoLogRecord(bool, ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&);
    void sipProtectVirt_DoLogTextAtLevel(bool, ::wxLogLevel,const  ::wxString&);
    void sipProtectVirt_DoLogText(bool,const  ::wxString&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void Flush() SIP_OVERRIDE;
    void DoLogRecord( ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&) SIP_OVERRIDE;
    void DoLogTextAtLevel( ::wxLogLevel,const  ::wxString&) SIP_OVERRIDE;
    void DoLogText(const  ::wxString&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxLogBuffer(const sipwxLogBuffer &);
    sipwxLogBuffer &operator = (const sipwxLogBuffer &);

    char sipPyMethods[4];
};

sipwxLogBuffer::sipwxLogBuffer():  ::wxLogBuffer(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxLogBuffer::~sipwxLogBuffer()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxLogBuffer::Flush()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_Flush);

    if (!sipMeth)
    {
         ::wxLogBuffer::Flush();
        return;
    }

    extern void sipVH__core_57(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_57(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxLogBuffer::DoLogRecord( ::wxLogLevel level,const  ::wxString& msg,const  ::wxLogRecordInfo& info)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_DoLogRecord);

    if (!sipMeth)
    {
         ::wxLogBuffer::DoLogRecord(level,msg,info);
        return;
    }

    extern void sipVH__core_58(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&);

    sipVH__core_58(sipGILState, 0, sipPySelf, sipMeth, level, msg, info);
}

void sipwxLogBuffer::DoLogTextAtLevel( ::wxLogLevel level,const  ::wxString& msg)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_DoLogTextAtLevel);

    if (!sipMeth)
    {
         ::wxLogBuffer::DoLogTextAtLevel(level,msg);
        return;
    }

    extern void sipVH__core_59(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxLogLevel,const  ::wxString&);

    sipVH__core_59(sipGILState, 0, sipPySelf, sipMeth, level, msg);
}

void sipwxLogBuffer::DoLogText(const  ::wxString& msg)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_DoLogText);

    if (!sipMeth)
    {
         ::wxLogBuffer::DoLogText(msg);
        return;
    }

    extern void sipVH__core_60(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__core_60(sipGILState, 0, sipPySelf, sipMeth, msg);
}

void sipwxLogBuffer::sipProtectVirt_DoLogRecord(bool sipSelfWasArg, ::wxLogLevel level,const  ::wxString& msg,const  ::wxLogRecordInfo& info)
{
    (sipSelfWasArg ?  ::wxLog::DoLogRecord(level,msg,info) : DoLogRecord(level,msg,info));
}

void sipwxLogBuffer::sipProtectVirt_DoLogTextAtLevel(bool sipSelfWasArg, ::wxLogLevel level,const  ::wxString& msg)
{
    (sipSelfWasArg ?  ::wxLog::DoLogTextAtLevel(level,msg) : DoLogTextAtLevel(level,msg));
}

void sipwxLogBuffer::sipProtectVirt_DoLogText(bool sipSelfWasArg,const  ::wxString& msg)
{
    (sipSelfWasArg ?  ::wxLog::DoLogText(msg) : DoLogText(msg));
}


PyDoc_STRVAR(doc_wxLogBuffer_DoLogRecord, "DoLogRecord(level, msg, info)\n"
"\n"
"Called to log a new record.");

extern "C" {static PyObject *meth_wxLogBuffer_DoLogRecord(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogBuffer_DoLogRecord(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogLevel level;
        const  ::wxString* msg;
        int msgState = 0;
        const  ::wxLogRecordInfo* info;
        sipwxLogBuffer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_level,
            sipName_msg,
            sipName_info,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BmJ1J9", &sipSelf, sipType_wxLogBuffer, &sipCpp, &level, sipType_wxString, &msg, &msgState, sipType_wxLogRecordInfo, &info))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_DoLogRecord(sipSelfWasArg,level,*msg,*info);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg), sipType_wxString, msgState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_LogBuffer, sipName_DoLogRecord, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogBuffer_DoLogTextAtLevel, "DoLogTextAtLevel(level, msg)\n"
"\n"
"Called to log the specified string at given level.");

extern "C" {static PyObject *meth_wxLogBuffer_DoLogTextAtLevel(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogBuffer_DoLogTextAtLevel(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogLevel level;
        const  ::wxString* msg;
        int msgState = 0;
        sipwxLogBuffer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_level,
            sipName_msg,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BmJ1", &sipSelf, sipType_wxLogBuffer, &sipCpp, &level, sipType_wxString, &msg, &msgState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_DoLogTextAtLevel(sipSelfWasArg,level,*msg);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg), sipType_wxString, msgState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_LogBuffer, sipName_DoLogTextAtLevel, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogBuffer_DoLogText, "DoLogText(msg)\n"
"\n"
"Called to log the specified string.");

extern "C" {static PyObject *meth_wxLogBuffer_DoLogText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogBuffer_DoLogText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* msg;
        int msgState = 0;
        sipwxLogBuffer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_msg,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxLogBuffer, &sipCpp, sipType_wxString, &msg, &msgState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_DoLogText(sipSelfWasArg,*msg);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg), sipType_wxString, msgState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_LogBuffer, sipName_DoLogText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogBuffer_Flush, "Flush()\n"
"\n"
"Shows all the messages collected so far to the user (using a message\n"
"box in the GUI applications or by printing them out to the console in\n"
"text mode) and clears the internal buffer.");

extern "C" {static PyObject *meth_wxLogBuffer_Flush(PyObject *, PyObject *);}
static PyObject *meth_wxLogBuffer_Flush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxLogBuffer, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxLogBuffer::Flush() : sipCpp->Flush());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_LogBuffer, sipName_Flush, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogBuffer_GetBuffer, "GetBuffer() -> String\n"
"\n"
"Returns the current buffer contains.");

extern "C" {static PyObject *meth_wxLogBuffer_GetBuffer(PyObject *, PyObject *);}
static PyObject *meth_wxLogBuffer_GetBuffer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxLogBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxLogBuffer, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetBuffer());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_LogBuffer, sipName_GetBuffer, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxLogBuffer(void *, const sipTypeDef *);}
static void *cast_wxLogBuffer(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxLogBuffer *sipCpp = reinterpret_cast< ::wxLogBuffer *>(sipCppV);

    if (targetType == sipType_wxLogBuffer)
        return sipCppV;

    if (targetType == sipType_wxLog)
        return static_cast< ::wxLog *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxLogBuffer(void *, int);}
static void release_wxLogBuffer(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxLogBuffer *>(sipCppV);
    else
        delete reinterpret_cast< ::wxLogBuffer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxLogBuffer(sipSimpleWrapper *);}
static void dealloc_wxLogBuffer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxLogBuffer *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxLogBuffer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxLogBuffer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxLogBuffer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxLogBuffer *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxLogBuffer();
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
static sipEncodedTypeDef supers_wxLogBuffer[] = {{330, 255, 1}};


static PyMethodDef methods_wxLogBuffer[] = {
    {sipName_DoLogRecord, SIP_MLMETH_CAST(meth_wxLogBuffer_DoLogRecord), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_DoLogText, SIP_MLMETH_CAST(meth_wxLogBuffer_DoLogText), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_DoLogTextAtLevel, SIP_MLMETH_CAST(meth_wxLogBuffer_DoLogTextAtLevel), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_Flush, meth_wxLogBuffer_Flush, METH_VARARGS, doc_wxLogBuffer_Flush},
    {sipName_GetBuffer, meth_wxLogBuffer_GetBuffer, METH_VARARGS, doc_wxLogBuffer_GetBuffer}
};

sipVariableDef variables_wxLogBuffer[] = {
    {PropertyVariable, sipName_Buffer, &methods_wxLogBuffer[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxLogBuffer, "LogBuffer()\n"
"\n"
"wxLogBuffer is a very simple implementation of log sink which simply\n"
"collects all the logged messages in a string (except the debug\n"
"messages which are output in the usual way immediately as we're\n"
"presumably not interested in collecting them for later).");


sipClassTypeDef sipTypeDef__core_wxLogBuffer = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxLogBuffer,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_LogBuffer,
        {0, 0, 1},
        5, methods_wxLogBuffer,
        0, SIP_NULLPTR,
        1, variables_wxLogBuffer,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxLogBuffer,
    -1,
    -1,
    supers_wxLogBuffer,
    SIP_NULLPTR,
    init_type_wxLogBuffer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxLogBuffer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxLogBuffer,
    cast_wxLogBuffer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
