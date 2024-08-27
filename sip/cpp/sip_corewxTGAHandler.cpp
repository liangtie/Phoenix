/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/imagtga.h>
        #include <wx/stream.h>
        #include <wx/image.h>
        #include <wx/stream.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxTGAHandler : public  ::wxTGAHandler
{
public:
    sipwxTGAHandler();
    virtual ~sipwxTGAHandler();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    int sipProtectVirt_DoGetImageCount(bool, ::wxInputStream&);
    bool sipProtectVirt_DoCanRead(bool, ::wxInputStream&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool LoadFile( ::wxImage*, ::wxInputStream&,bool,int) SIP_OVERRIDE;
    bool SaveFile( ::wxImage*, ::wxOutputStream&,bool) SIP_OVERRIDE;
    int DoGetImageCount( ::wxInputStream&) SIP_OVERRIDE;
    bool DoCanRead( ::wxInputStream&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxTGAHandler(const sipwxTGAHandler &);
    sipwxTGAHandler &operator = (const sipwxTGAHandler &);

    char sipPyMethods[4];
};

sipwxTGAHandler::sipwxTGAHandler():  ::wxTGAHandler(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxTGAHandler::~sipwxTGAHandler()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxTGAHandler::LoadFile( ::wxImage*image, ::wxInputStream& stream,bool verbose,int index)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_LoadFile);

    if (!sipMeth)
        return  ::wxTGAHandler::LoadFile(image,stream,verbose,index);

    extern bool sipVH__core_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxImage*, ::wxInputStream&,bool,int);

    return sipVH__core_21(sipGILState, 0, sipPySelf, sipMeth, image, stream, verbose, index);
}

bool sipwxTGAHandler::SaveFile( ::wxImage*image, ::wxOutputStream& stream,bool verbose)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_SaveFile);

    if (!sipMeth)
        return  ::wxTGAHandler::SaveFile(image,stream,verbose);

    extern bool sipVH__core_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxImage*, ::wxOutputStream&,bool);

    return sipVH__core_22(sipGILState, 0, sipPySelf, sipMeth, image, stream, verbose);
}

int sipwxTGAHandler::DoGetImageCount( ::wxInputStream& stream)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_DoGetImageCount);

    if (!sipMeth)
        return  ::wxTGAHandler::DoGetImageCount(stream);

    extern int sipVH__core_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__core_23(sipGILState, 0, sipPySelf, sipMeth, stream);
}

bool sipwxTGAHandler::DoCanRead( ::wxInputStream& stream)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_DoCanRead);

    if (!sipMeth)
        return  ::wxTGAHandler::DoCanRead(stream);

    extern bool sipVH__core_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__core_24(sipGILState, 0, sipPySelf, sipMeth, stream);
}

int sipwxTGAHandler::sipProtectVirt_DoGetImageCount(bool sipSelfWasArg, ::wxInputStream& stream)
{
    return (sipSelfWasArg ?  ::wxImageHandler::DoGetImageCount(stream) : DoGetImageCount(stream));
}

bool sipwxTGAHandler::sipProtectVirt_DoCanRead(bool sipSelfWasArg, ::wxInputStream& stream)
{
    return (sipSelfWasArg ?  ::wxTGAHandler::DoCanRead(stream) : DoCanRead(stream));
}


PyDoc_STRVAR(doc_wxTGAHandler_DoGetImageCount, "DoGetImageCount(stream) -> int\n"
"\n"
"Called to get the number of images available in a multi-image file\n"
"type, if supported.");

extern "C" {static PyObject *meth_wxTGAHandler_DoGetImageCount(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTGAHandler_DoGetImageCount(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxInputStream* stream;
        int streamState = 0;
        sipwxTGAHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxTGAHandler, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_DoGetImageCount(sipSelfWasArg,*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TGAHandler, sipName_DoGetImageCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTGAHandler_LoadFile, "LoadFile(image, stream, verbose=True, index=-1) -> bool\n"
"\n"
"Loads an image from a stream, putting the resulting data into image.");

extern "C" {static PyObject *meth_wxTGAHandler_LoadFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTGAHandler_LoadFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxImage* image;
         ::wxInputStream* stream;
        int streamState = 0;
        bool verbose = 1;
        int index = -1;
         ::wxTGAHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
            sipName_stream,
            sipName_verbose,
            sipName_index,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1|bi", &sipSelf, sipType_wxTGAHandler, &sipCpp, sipType_wxImage, &image, sipType_wxInputStream, &stream, &streamState, &verbose, &index))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTGAHandler::LoadFile(image,*stream,verbose,index) : sipCpp->LoadFile(image,*stream,verbose,index));
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TGAHandler, sipName_LoadFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTGAHandler_SaveFile, "SaveFile(image, stream, verbose=True) -> bool\n"
"\n"
"Saves an image in the output stream.");

extern "C" {static PyObject *meth_wxTGAHandler_SaveFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTGAHandler_SaveFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxImage* image;
         ::wxOutputStream* stream;
        int streamState = 0;
        bool verbose = 1;
         ::wxTGAHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
            sipName_stream,
            sipName_verbose,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1|b", &sipSelf, sipType_wxTGAHandler, &sipCpp, sipType_wxImage, &image, sipType_wxOutputStream, &stream, &streamState, &verbose))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTGAHandler::SaveFile(image,*stream,verbose) : sipCpp->SaveFile(image,*stream,verbose));
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxOutputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TGAHandler, sipName_SaveFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTGAHandler_DoCanRead, "DoCanRead(stream) -> bool\n"
"\n"
"Called to test if this handler can read an image from the given\n"
"stream.");

extern "C" {static PyObject *meth_wxTGAHandler_DoCanRead(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTGAHandler_DoCanRead(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxInputStream* stream;
        int streamState = 0;
        sipwxTGAHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxTGAHandler, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_DoCanRead(sipSelfWasArg,*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TGAHandler, sipName_DoCanRead, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxTGAHandler(void *, const sipTypeDef *);}
static void *cast_wxTGAHandler(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxTGAHandler *sipCpp = reinterpret_cast< ::wxTGAHandler *>(sipCppV);

    if (targetType == sipType_wxTGAHandler)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxImageHandler)->ctd_cast(static_cast< ::wxImageHandler *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTGAHandler(void *, int);}
static void release_wxTGAHandler(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxTGAHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::wxTGAHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxTGAHandler(Py_ssize_t);}
static void *array_wxTGAHandler(Py_ssize_t sipNrElem)
{
    return new  ::wxTGAHandler[sipNrElem];
}


extern "C" {static void dealloc_wxTGAHandler(sipSimpleWrapper *);}
static void dealloc_wxTGAHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxTGAHandler *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTGAHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxTGAHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTGAHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxTGAHandler *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxTGAHandler();
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
static sipEncodedTypeDef supers_wxTGAHandler[] = {{284, 255, 1}};


static PyMethodDef methods_wxTGAHandler[] = {
    {sipName_DoCanRead, SIP_MLMETH_CAST(meth_wxTGAHandler_DoCanRead), METH_VARARGS|METH_KEYWORDS, doc_wxTGAHandler_DoCanRead},
    {sipName_DoGetImageCount, SIP_MLMETH_CAST(meth_wxTGAHandler_DoGetImageCount), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {sipName_LoadFile, SIP_MLMETH_CAST(meth_wxTGAHandler_LoadFile), METH_VARARGS|METH_KEYWORDS, doc_wxTGAHandler_LoadFile},
    {sipName_SaveFile, SIP_MLMETH_CAST(meth_wxTGAHandler_SaveFile), METH_VARARGS|METH_KEYWORDS, doc_wxTGAHandler_SaveFile}
};

PyDoc_STRVAR(doc_wxTGAHandler, "TGAHandler()\n"
"\n"
"This is the image handler for the TGA format.");


sipClassTypeDef sipTypeDef__core_wxTGAHandler = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxTGAHandler,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_TGAHandler,
        {0, 0, 1},
        4, methods_wxTGAHandler,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTGAHandler,
    -1,
    -1,
    supers_wxTGAHandler,
    SIP_NULLPTR,
    init_type_wxTGAHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxTGAHandler,
    SIP_NULLPTR,
    array_wxTGAHandler,
    SIP_NULLPTR,
    release_wxTGAHandler,
    cast_wxTGAHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
