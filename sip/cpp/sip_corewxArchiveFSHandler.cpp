/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/fs_arc.h>
        #include <wx/filesys.h>
        #include <wx/filesys.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxArchiveFSHandler : public  ::wxArchiveFSHandler
{
public:
    sipwxArchiveFSHandler();
    virtual ~sipwxArchiveFSHandler();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    static  ::wxString sipProtect_GetAnchor(const  ::wxString&);
    static  ::wxString sipProtect_GetLeftLocation(const  ::wxString&);
    static  ::wxString sipProtect_GetProtocol(const  ::wxString&);
    static  ::wxString sipProtect_GetRightLocation(const  ::wxString&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool CanOpen(const  ::wxString&) SIP_OVERRIDE;
     ::wxString FindFirst(const  ::wxString&,int) SIP_OVERRIDE;
     ::wxString FindNext() SIP_OVERRIDE;
     ::wxFSFile* OpenFile( ::wxFileSystem&,const  ::wxString&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxArchiveFSHandler(const sipwxArchiveFSHandler &);
    sipwxArchiveFSHandler &operator = (const sipwxArchiveFSHandler &);

    char sipPyMethods[4];
};

sipwxArchiveFSHandler::sipwxArchiveFSHandler():  ::wxArchiveFSHandler(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxArchiveFSHandler::~sipwxArchiveFSHandler()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxArchiveFSHandler::CanOpen(const  ::wxString& location)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_CanOpen);

    if (!sipMeth)
        return  ::wxArchiveFSHandler::CanOpen(location);

    extern bool sipVH__core_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__core_9(sipGILState, 0, sipPySelf, sipMeth, location);
}

 ::wxString sipwxArchiveFSHandler::FindFirst(const  ::wxString& spec,int flags)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_FindFirst);

    if (!sipMeth)
        return  ::wxArchiveFSHandler::FindFirst(spec,flags);

    extern  ::wxString sipVH__core_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&,int);

    return sipVH__core_10(sipGILState, 0, sipPySelf, sipMeth, spec, flags);
}

 ::wxString sipwxArchiveFSHandler::FindNext()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_FindNext);

    if (!sipMeth)
        return  ::wxArchiveFSHandler::FindNext();

    extern  ::wxString sipVH__core_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_11(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxFSFile* sipwxArchiveFSHandler::OpenFile( ::wxFileSystem& fs,const  ::wxString& location)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_OpenFile);

    if (!sipMeth)
        return  ::wxArchiveFSHandler::OpenFile(fs,location);

    extern  ::wxFSFile* sipVH__core_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxFileSystem&,const  ::wxString&);

    return sipVH__core_12(sipGILState, 0, sipPySelf, sipMeth, fs, location);
}

 ::wxString sipwxArchiveFSHandler::sipProtect_GetAnchor(const  ::wxString& location)
{
    return  ::wxFileSystemHandler::GetAnchor(location);
}

 ::wxString sipwxArchiveFSHandler::sipProtect_GetLeftLocation(const  ::wxString& location)
{
    return  ::wxFileSystemHandler::GetLeftLocation(location);
}

 ::wxString sipwxArchiveFSHandler::sipProtect_GetProtocol(const  ::wxString& location)
{
    return  ::wxFileSystemHandler::GetProtocol(location);
}

 ::wxString sipwxArchiveFSHandler::sipProtect_GetRightLocation(const  ::wxString& location)
{
    return  ::wxFileSystemHandler::GetRightLocation(location);
}


PyDoc_STRVAR(doc_wxArchiveFSHandler_GetAnchor, "GetAnchor(location) -> String\n"
"\n"
"Returns the anchor if present in the location.");

extern "C" {static PyObject *meth_wxArchiveFSHandler_GetAnchor(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxArchiveFSHandler_GetAnchor(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* location;
        int locationState = 0;

        static const char *sipKwdList[] = {
            sipName_location,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1", sipType_wxString, &location, &locationState))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipwxArchiveFSHandler::sipProtect_GetAnchor(*location));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(location), sipType_wxString, locationState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ArchiveFSHandler, sipName_GetAnchor, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxArchiveFSHandler_GetLeftLocation, "GetLeftLocation(location) -> String\n"
"\n"
"Returns the left location string extracted from location.");

extern "C" {static PyObject *meth_wxArchiveFSHandler_GetLeftLocation(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxArchiveFSHandler_GetLeftLocation(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* location;
        int locationState = 0;

        static const char *sipKwdList[] = {
            sipName_location,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1", sipType_wxString, &location, &locationState))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipwxArchiveFSHandler::sipProtect_GetLeftLocation(*location));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(location), sipType_wxString, locationState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ArchiveFSHandler, sipName_GetLeftLocation, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxArchiveFSHandler_GetProtocol, "GetProtocol(location) -> String\n"
"\n"
"Returns the protocol string extracted from location.");

extern "C" {static PyObject *meth_wxArchiveFSHandler_GetProtocol(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxArchiveFSHandler_GetProtocol(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* location;
        int locationState = 0;

        static const char *sipKwdList[] = {
            sipName_location,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1", sipType_wxString, &location, &locationState))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipwxArchiveFSHandler::sipProtect_GetProtocol(*location));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(location), sipType_wxString, locationState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ArchiveFSHandler, sipName_GetProtocol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxArchiveFSHandler_GetRightLocation, "GetRightLocation(location) -> String\n"
"\n"
"Returns the right location string extracted from location.");

extern "C" {static PyObject *meth_wxArchiveFSHandler_GetRightLocation(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxArchiveFSHandler_GetRightLocation(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* location;
        int locationState = 0;

        static const char *sipKwdList[] = {
            sipName_location,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1", sipType_wxString, &location, &locationState))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipwxArchiveFSHandler::sipProtect_GetRightLocation(*location));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(location), sipType_wxString, locationState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ArchiveFSHandler, sipName_GetRightLocation, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxArchiveFSHandler_Cleanup, "Cleanup()");

extern "C" {static PyObject *meth_wxArchiveFSHandler_Cleanup(PyObject *, PyObject *);}
static PyObject *meth_wxArchiveFSHandler_Cleanup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxArchiveFSHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxArchiveFSHandler, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Cleanup();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ArchiveFSHandler, sipName_Cleanup, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxArchiveFSHandler_CanOpen, "CanOpen(self, location: object) -> bool");

extern "C" {static PyObject *meth_wxArchiveFSHandler_CanOpen(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxArchiveFSHandler_CanOpen(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* location;
        int locationState = 0;
         ::wxArchiveFSHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_location,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxArchiveFSHandler, &sipCpp, sipType_wxString, &location, &locationState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxArchiveFSHandler::CanOpen(*location) : sipCpp->CanOpen(*location));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(location), sipType_wxString, locationState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_ArchiveFSHandler, sipName_CanOpen, doc_wxArchiveFSHandler_CanOpen);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxArchiveFSHandler_OpenFile, "OpenFile(self, fs: FileSystem, location: object) -> FSFile");

extern "C" {static PyObject *meth_wxArchiveFSHandler_OpenFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxArchiveFSHandler_OpenFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxFileSystem* fs;
        const  ::wxString* location;
        int locationState = 0;
         ::wxArchiveFSHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_fs,
            sipName_location,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J1", &sipSelf, sipType_wxArchiveFSHandler, &sipCpp, sipType_wxFileSystem, &fs, sipType_wxString, &location, &locationState))
        {
             ::wxFSFile*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxArchiveFSHandler::OpenFile(*fs,*location) : sipCpp->OpenFile(*fs,*location));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(location), sipType_wxString, locationState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxFSFile,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ArchiveFSHandler, sipName_OpenFile, doc_wxArchiveFSHandler_OpenFile);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxArchiveFSHandler_FindFirst, "FindFirst(self, spec: object, flags: int = 0) -> object");

extern "C" {static PyObject *meth_wxArchiveFSHandler_FindFirst(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxArchiveFSHandler_FindFirst(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* spec;
        int specState = 0;
        int flags = 0;
         ::wxArchiveFSHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_spec,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|i", &sipSelf, sipType_wxArchiveFSHandler, &sipCpp, sipType_wxString, &spec, &specState, &flags))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxArchiveFSHandler::FindFirst(*spec,flags) : sipCpp->FindFirst(*spec,flags)));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(spec), sipType_wxString, specState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ArchiveFSHandler, sipName_FindFirst, doc_wxArchiveFSHandler_FindFirst);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxArchiveFSHandler_FindNext, "FindNext(self) -> object");

extern "C" {static PyObject *meth_wxArchiveFSHandler_FindNext(PyObject *, PyObject *);}
static PyObject *meth_wxArchiveFSHandler_FindNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxArchiveFSHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxArchiveFSHandler, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxArchiveFSHandler::FindNext() : sipCpp->FindNext()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ArchiveFSHandler, sipName_FindNext, doc_wxArchiveFSHandler_FindNext);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxArchiveFSHandler(void *, const sipTypeDef *);}
static void *cast_wxArchiveFSHandler(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxArchiveFSHandler *sipCpp = reinterpret_cast< ::wxArchiveFSHandler *>(sipCppV);

    if (targetType == sipType_wxArchiveFSHandler)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxFileSystemHandler)->ctd_cast(static_cast< ::wxFileSystemHandler *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxArchiveFSHandler(void *, int);}
static void release_wxArchiveFSHandler(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxArchiveFSHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::wxArchiveFSHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxArchiveFSHandler(Py_ssize_t);}
static void *array_wxArchiveFSHandler(Py_ssize_t sipNrElem)
{
    return new  ::wxArchiveFSHandler[sipNrElem];
}


extern "C" {static void dealloc_wxArchiveFSHandler(sipSimpleWrapper *);}
static void dealloc_wxArchiveFSHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxArchiveFSHandler *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxArchiveFSHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxArchiveFSHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxArchiveFSHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxArchiveFSHandler *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxArchiveFSHandler();
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
static sipEncodedTypeDef supers_wxArchiveFSHandler[] = {{186, 255, 1}};


static PyMethodDef methods_wxArchiveFSHandler[] = {
    {sipName_CanOpen, SIP_MLMETH_CAST(meth_wxArchiveFSHandler_CanOpen), METH_VARARGS|METH_KEYWORDS, doc_wxArchiveFSHandler_CanOpen},
    {sipName_Cleanup, meth_wxArchiveFSHandler_Cleanup, METH_VARARGS, doc_wxArchiveFSHandler_Cleanup},
    {sipName_FindFirst, SIP_MLMETH_CAST(meth_wxArchiveFSHandler_FindFirst), METH_VARARGS|METH_KEYWORDS, doc_wxArchiveFSHandler_FindFirst},
    {sipName_FindNext, meth_wxArchiveFSHandler_FindNext, METH_VARARGS, doc_wxArchiveFSHandler_FindNext},
    {sipName_GetAnchor, SIP_MLMETH_CAST(meth_wxArchiveFSHandler_GetAnchor), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_GetLeftLocation, SIP_MLMETH_CAST(meth_wxArchiveFSHandler_GetLeftLocation), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_GetProtocol, SIP_MLMETH_CAST(meth_wxArchiveFSHandler_GetProtocol), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_GetRightLocation, SIP_MLMETH_CAST(meth_wxArchiveFSHandler_GetRightLocation), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_OpenFile, SIP_MLMETH_CAST(meth_wxArchiveFSHandler_OpenFile), METH_VARARGS|METH_KEYWORDS, doc_wxArchiveFSHandler_OpenFile}
};

PyDoc_STRVAR(doc_wxArchiveFSHandler, "ArchiveFSHandler()\n"
"\n"
"A file system handler for accessing files inside of archives.");


sipClassTypeDef sipTypeDef__core_wxArchiveFSHandler = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxArchiveFSHandler,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_ArchiveFSHandler,
        {0, 0, 1},
        9, methods_wxArchiveFSHandler,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxArchiveFSHandler,
    -1,
    -1,
    supers_wxArchiveFSHandler,
    SIP_NULLPTR,
    init_type_wxArchiveFSHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxArchiveFSHandler,
    SIP_NULLPTR,
    array_wxArchiveFSHandler,
    SIP_NULLPTR,
    release_wxArchiveFSHandler,
    cast_wxArchiveFSHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
