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


class sipwxLogInterposerTemp : public  ::wxLogInterposerTemp
{
public:
    sipwxLogInterposerTemp();
    virtual ~sipwxLogInterposerTemp();

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
    void DoLogText(const  ::wxString&) SIP_OVERRIDE;
    void DoLogTextAtLevel( ::wxLogLevel,const  ::wxString&) SIP_OVERRIDE;
    void DoLogRecord( ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&) SIP_OVERRIDE;
    void Flush() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxLogInterposerTemp(const sipwxLogInterposerTemp &);
    sipwxLogInterposerTemp &operator = (const sipwxLogInterposerTemp &);

    char sipPyMethods[4];
};

sipwxLogInterposerTemp::sipwxLogInterposerTemp():  ::wxLogInterposerTemp(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxLogInterposerTemp::~sipwxLogInterposerTemp()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxLogInterposerTemp::DoLogText(const  ::wxString& msg)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_DoLogText);

    if (!sipMeth)
    {
         ::wxLogInterposerTemp::DoLogText(msg);
        return;
    }

    extern void sipVH__core_60(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__core_60(sipGILState, 0, sipPySelf, sipMeth, msg);
}

void sipwxLogInterposerTemp::DoLogTextAtLevel( ::wxLogLevel level,const  ::wxString& msg)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_DoLogTextAtLevel);

    if (!sipMeth)
    {
         ::wxLogInterposerTemp::DoLogTextAtLevel(level,msg);
        return;
    }

    extern void sipVH__core_59(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxLogLevel,const  ::wxString&);

    sipVH__core_59(sipGILState, 0, sipPySelf, sipMeth, level, msg);
}

void sipwxLogInterposerTemp::DoLogRecord( ::wxLogLevel level,const  ::wxString& msg,const  ::wxLogRecordInfo& info)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_DoLogRecord);

    if (!sipMeth)
    {
         ::wxLogInterposerTemp::DoLogRecord(level,msg,info);
        return;
    }

    extern void sipVH__core_58(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&);

    sipVH__core_58(sipGILState, 0, sipPySelf, sipMeth, level, msg, info);
}

void sipwxLogInterposerTemp::Flush()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_Flush);

    if (!sipMeth)
    {
         ::wxLogInterposerTemp::Flush();
        return;
    }

    extern void sipVH__core_57(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_57(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxLogInterposerTemp::sipProtectVirt_DoLogRecord(bool sipSelfWasArg, ::wxLogLevel level,const  ::wxString& msg,const  ::wxLogRecordInfo& info)
{
    (sipSelfWasArg ?  ::wxLog::DoLogRecord(level,msg,info) : DoLogRecord(level,msg,info));
}

void sipwxLogInterposerTemp::sipProtectVirt_DoLogTextAtLevel(bool sipSelfWasArg, ::wxLogLevel level,const  ::wxString& msg)
{
    (sipSelfWasArg ?  ::wxLog::DoLogTextAtLevel(level,msg) : DoLogTextAtLevel(level,msg));
}

void sipwxLogInterposerTemp::sipProtectVirt_DoLogText(bool sipSelfWasArg,const  ::wxString& msg)
{
    (sipSelfWasArg ?  ::wxLog::DoLogText(msg) : DoLogText(msg));
}


PyDoc_STRVAR(doc_wxLogInterposerTemp_DoLogRecord, "DoLogRecord(level, msg, info)\n"
"\n"
"Called to log a new record.");

extern "C" {static PyObject *meth_wxLogInterposerTemp_DoLogRecord(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogInterposerTemp_DoLogRecord(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogLevel level;
        const  ::wxString* msg;
        int msgState = 0;
        const  ::wxLogRecordInfo* info;
        sipwxLogInterposerTemp *sipCpp;

        static const char *sipKwdList[] = {
            sipName_level,
            sipName_msg,
            sipName_info,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BmJ1J9", &sipSelf, sipType_wxLogInterposerTemp, &sipCpp, &level, sipType_wxString, &msg, &msgState, sipType_wxLogRecordInfo, &info))
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

    sipNoMethod(sipParseErr, sipName_LogInterposerTemp, sipName_DoLogRecord, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogInterposerTemp_DoLogTextAtLevel, "DoLogTextAtLevel(level, msg)\n"
"\n"
"Called to log the specified string at given level.");

extern "C" {static PyObject *meth_wxLogInterposerTemp_DoLogTextAtLevel(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogInterposerTemp_DoLogTextAtLevel(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogLevel level;
        const  ::wxString* msg;
        int msgState = 0;
        sipwxLogInterposerTemp *sipCpp;

        static const char *sipKwdList[] = {
            sipName_level,
            sipName_msg,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BmJ1", &sipSelf, sipType_wxLogInterposerTemp, &sipCpp, &level, sipType_wxString, &msg, &msgState))
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

    sipNoMethod(sipParseErr, sipName_LogInterposerTemp, sipName_DoLogTextAtLevel, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogInterposerTemp_DoLogText, "DoLogText(msg)\n"
"\n"
"Called to log the specified string.");

extern "C" {static PyObject *meth_wxLogInterposerTemp_DoLogText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogInterposerTemp_DoLogText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* msg;
        int msgState = 0;
        sipwxLogInterposerTemp *sipCpp;

        static const char *sipKwdList[] = {
            sipName_msg,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxLogInterposerTemp, &sipCpp, sipType_wxString, &msg, &msgState))
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

    sipNoMethod(sipParseErr, sipName_LogInterposerTemp, sipName_DoLogText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxLogInterposerTemp(void *, const sipTypeDef *);}
static void *cast_wxLogInterposerTemp(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxLogInterposerTemp *sipCpp = reinterpret_cast< ::wxLogInterposerTemp *>(sipCppV);

    if (targetType == sipType_wxLogInterposerTemp)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxLogChain)->ctd_cast(static_cast< ::wxLogChain *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxLogInterposerTemp(void *, int);}
static void release_wxLogInterposerTemp(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxLogInterposerTemp *>(sipCppV);
    else
        delete reinterpret_cast< ::wxLogInterposerTemp *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxLogInterposerTemp(sipSimpleWrapper *);}
static void dealloc_wxLogInterposerTemp(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxLogInterposerTemp *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxLogInterposerTemp(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxLogInterposerTemp(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxLogInterposerTemp(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxLogInterposerTemp *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxLogInterposerTemp();
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
static sipEncodedTypeDef supers_wxLogInterposerTemp[] = {{332, 255, 1}};


static PyMethodDef methods_wxLogInterposerTemp[] = {
    {sipName_DoLogRecord, SIP_MLMETH_CAST(meth_wxLogInterposerTemp_DoLogRecord), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_DoLogText, SIP_MLMETH_CAST(meth_wxLogInterposerTemp_DoLogText), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_DoLogTextAtLevel, SIP_MLMETH_CAST(meth_wxLogInterposerTemp_DoLogTextAtLevel), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR}
};

PyDoc_STRVAR(doc_wxLogInterposerTemp, "LogInterposerTemp()\n"
"\n"
"A special version of wxLogChain which uses itself as the new log\n"
"target.");


sipClassTypeDef sipTypeDef__core_wxLogInterposerTemp = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxLogInterposerTemp,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_LogInterposerTemp,
        {0, 0, 1},
        3, methods_wxLogInterposerTemp,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxLogInterposerTemp,
    -1,
    -1,
    supers_wxLogInterposerTemp,
    SIP_NULLPTR,
    init_type_wxLogInterposerTemp,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxLogInterposerTemp,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxLogInterposerTemp,
    cast_wxLogInterposerTemp,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
