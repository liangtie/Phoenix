/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/image.h>
        #include <wx/stream.h>
        #include <wx/image.h>
        #include <wx/stream.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxImageHandler : public  ::wxImageHandler
{
public:
    sipwxImageHandler();
    virtual ~sipwxImageHandler();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    int sipProtectVirt_DoGetImageCount(bool, ::wxInputStream&);
    bool sipProtect_DoCanRead( ::wxInputStream&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool DoCanRead( ::wxInputStream&) SIP_OVERRIDE;
    int DoGetImageCount( ::wxInputStream&) SIP_OVERRIDE;
    bool SaveFile( ::wxImage*, ::wxOutputStream&,bool) SIP_OVERRIDE;
    bool LoadFile( ::wxImage*, ::wxInputStream&,bool,int) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxImageHandler(const sipwxImageHandler &);
    sipwxImageHandler &operator = (const sipwxImageHandler &);

    char sipPyMethods[4];
};

sipwxImageHandler::sipwxImageHandler():  ::wxImageHandler(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxImageHandler::~sipwxImageHandler()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxImageHandler::DoCanRead( ::wxInputStream& stream)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, sipName_ImageHandler, sipName_DoCanRead);

    if (!sipMeth)
        return 0;

    extern bool sipVH__core_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__core_24(sipGILState, 0, sipPySelf, sipMeth, stream);
}

int sipwxImageHandler::DoGetImageCount( ::wxInputStream& stream)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_DoGetImageCount);

    if (!sipMeth)
        return  ::wxImageHandler::DoGetImageCount(stream);

    extern int sipVH__core_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__core_23(sipGILState, 0, sipPySelf, sipMeth, stream);
}

bool sipwxImageHandler::SaveFile( ::wxImage*image, ::wxOutputStream& stream,bool verbose)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_SaveFile);

    if (!sipMeth)
        return  ::wxImageHandler::SaveFile(image,stream,verbose);

    extern bool sipVH__core_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxImage*, ::wxOutputStream&,bool);

    return sipVH__core_22(sipGILState, 0, sipPySelf, sipMeth, image, stream, verbose);
}

bool sipwxImageHandler::LoadFile( ::wxImage*image, ::wxInputStream& stream,bool verbose,int index)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_LoadFile);

    if (!sipMeth)
        return  ::wxImageHandler::LoadFile(image,stream,verbose,index);

    extern bool sipVH__core_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxImage*, ::wxInputStream&,bool,int);

    return sipVH__core_21(sipGILState, 0, sipPySelf, sipMeth, image, stream, verbose, index);
}

int sipwxImageHandler::sipProtectVirt_DoGetImageCount(bool sipSelfWasArg, ::wxInputStream& stream)
{
    return (sipSelfWasArg ?  ::wxImageHandler::DoGetImageCount(stream) : DoGetImageCount(stream));
}

bool sipwxImageHandler::sipProtect_DoCanRead( ::wxInputStream& stream)
{
    return DoCanRead(stream);
}


PyDoc_STRVAR(doc_wxImageHandler_CanRead, "CanRead(stream) -> bool\n"
"CanRead(filename) -> bool\n"
"\n"
"Returns true if this handler supports the image format contained in\n"
"the given stream.\n"
"");

extern "C" {static PyObject *meth_wxImageHandler_CanRead(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_CanRead(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxInputStream* stream;
        int streamState = 0;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->CanRead(*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::wxString* filename;
        int filenameState = 0;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_filename,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxString, &filename, &filenameState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->CanRead(*filename);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(filename), sipType_wxString, filenameState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_CanRead, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_GetExtension, "GetExtension() -> String\n"
"\n"
"Gets the preferred file extension associated with this handler.");

extern "C" {static PyObject *meth_wxImageHandler_GetExtension(PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_GetExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxImageHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxImageHandler, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetExtension());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_GetExtension, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_GetAltExtensions, "GetAltExtensions() -> ArrayString\n"
"\n"
"Returns the other file extensions associated with this handler.");

extern "C" {static PyObject *meth_wxImageHandler_GetAltExtensions(PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_GetAltExtensions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxImageHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxImageHandler, &sipCpp))
        {
             ::wxArrayString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxArrayString(sipCpp->GetAltExtensions());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxArrayString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_GetAltExtensions, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_GetImageCount, "GetImageCount(stream) -> int\n"
"\n"
"If the image file contains more than one image and the image handler\n"
"is capable of retrieving these individually, this function will return\n"
"the number of available images.");

extern "C" {static PyObject *meth_wxImageHandler_GetImageCount(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_GetImageCount(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxInputStream* stream;
        int streamState = 0;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetImageCount(*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_GetImageCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_GetMimeType, "GetMimeType() -> String\n"
"\n"
"Gets the MIME type associated with this handler.");

extern "C" {static PyObject *meth_wxImageHandler_GetMimeType(PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_GetMimeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxImageHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxImageHandler, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetMimeType());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_GetMimeType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_GetName, "GetName() -> String\n"
"\n"
"Gets the name of this handler.");

extern "C" {static PyObject *meth_wxImageHandler_GetName(PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxImageHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxImageHandler, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetName());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_GetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_GetType, "GetType() -> BitmapType\n"
"\n"
"Gets the image type associated with this handler.");

extern "C" {static PyObject *meth_wxImageHandler_GetType(PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_GetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxImageHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxImageHandler, &sipCpp))
        {
             ::wxBitmapType sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetType();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxBitmapType);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_GetType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_LoadFile, "LoadFile(image, stream, verbose=True, index=-1) -> bool\n"
"\n"
"Loads an image from a stream, putting the resulting data into image.");

extern "C" {static PyObject *meth_wxImageHandler_LoadFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_LoadFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxImage* image;
         ::wxInputStream* stream;
        int streamState = 0;
        bool verbose = 1;
        int index = -1;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
            sipName_stream,
            sipName_verbose,
            sipName_index,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1|bi", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxImage, &image, sipType_wxInputStream, &stream, &streamState, &verbose, &index))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxImageHandler::LoadFile(image,*stream,verbose,index) : sipCpp->LoadFile(image,*stream,verbose,index));
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_LoadFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_SaveFile, "SaveFile(image, stream, verbose=True) -> bool\n"
"\n"
"Saves an image in the output stream.");

extern "C" {static PyObject *meth_wxImageHandler_SaveFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_SaveFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxImage* image;
         ::wxOutputStream* stream;
        int streamState = 0;
        bool verbose = 1;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
            sipName_stream,
            sipName_verbose,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1|b", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxImage, &image, sipType_wxOutputStream, &stream, &streamState, &verbose))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxImageHandler::SaveFile(image,*stream,verbose) : sipCpp->SaveFile(image,*stream,verbose));
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxOutputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_SaveFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_SetExtension, "SetExtension(extension)\n"
"\n"
"Sets the preferred file extension associated with this handler.");

extern "C" {static PyObject *meth_wxImageHandler_SetExtension(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_SetExtension(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* extension;
        int extensionState = 0;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_extension,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxString, &extension, &extensionState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetExtension(*extension);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(extension), sipType_wxString, extensionState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_SetExtension, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_SetAltExtensions, "SetAltExtensions(extensions)\n"
"\n"
"Sets the alternative file extensions associated with this handler.");

extern "C" {static PyObject *meth_wxImageHandler_SetAltExtensions(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_SetAltExtensions(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxArrayString* extensions;
        int extensionsState = 0;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_extensions,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxArrayString, &extensions, &extensionsState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetAltExtensions(*extensions);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxArrayString *>(extensions), sipType_wxArrayString, extensionsState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_SetAltExtensions, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_SetMimeType, "SetMimeType(mimetype)\n"
"\n"
"Sets the handler MIME type.");

extern "C" {static PyObject *meth_wxImageHandler_SetMimeType(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_SetMimeType(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* mimetype;
        int mimetypeState = 0;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mimetype,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxString, &mimetype, &mimetypeState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetMimeType(*mimetype);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(mimetype), sipType_wxString, mimetypeState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_SetMimeType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_SetName, "SetName(name)\n"
"\n"
"Sets the handler name.");

extern "C" {static PyObject *meth_wxImageHandler_SetName(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_SetName(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* name;
        int nameState = 0;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_name,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxString, &name, &nameState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetName(*name);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(name), sipType_wxString, nameState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_SetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_SetType, "SetType(type)\n"
"\n"
"Sets the bitmap type for the handler.");

extern "C" {static PyObject *meth_wxImageHandler_SetType(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_SetType(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxBitmapType type;
         ::wxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxBitmapType, &type))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetType(type);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_SetType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_DoGetImageCount, "DoGetImageCount(stream) -> int\n"
"\n"
"Called to get the number of images available in a multi-image file\n"
"type, if supported.");

extern "C" {static PyObject *meth_wxImageHandler_DoGetImageCount(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_DoGetImageCount(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxInputStream* stream;
        int streamState = 0;
        sipwxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxInputStream, &stream, &streamState))
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

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_DoGetImageCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageHandler_DoCanRead, "DoCanRead(stream) -> bool\n"
"\n"
"Called to test if this handler can read an image from the given\n"
"stream.");

extern "C" {static PyObject *meth_wxImageHandler_DoCanRead(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageHandler_DoCanRead(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxInputStream* stream;
        int streamState = 0;
        sipwxImageHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxImageHandler, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_ImageHandler, sipName_DoCanRead);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtect_DoCanRead(*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_ImageHandler, sipName_DoCanRead, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxImageHandler(void *, const sipTypeDef *);}
static void *cast_wxImageHandler(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxImageHandler *sipCpp = reinterpret_cast< ::wxImageHandler *>(sipCppV);

    if (targetType == sipType_wxImageHandler)
        return sipCppV;

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxImageHandler(void *, int);}
static void release_wxImageHandler(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxImageHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::wxImageHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxImageHandler(sipSimpleWrapper *);}
static void dealloc_wxImageHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxImageHandler *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxImageHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxImageHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxImageHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxImageHandler *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxImageHandler();
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
static sipEncodedTypeDef supers_wxImageHandler[] = {{392, 255, 1}};


static PyMethodDef methods_wxImageHandler[] = {
    {sipName_CanRead, SIP_MLMETH_CAST(meth_wxImageHandler_CanRead), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_CanRead},
    {sipName_DoCanRead, SIP_MLMETH_CAST(meth_wxImageHandler_DoCanRead), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_DoCanRead},
    {sipName_DoGetImageCount, SIP_MLMETH_CAST(meth_wxImageHandler_DoGetImageCount), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_DoGetImageCount},
    {sipName_GetAltExtensions, meth_wxImageHandler_GetAltExtensions, METH_VARARGS, doc_wxImageHandler_GetAltExtensions},
    {sipName_GetExtension, meth_wxImageHandler_GetExtension, METH_VARARGS, doc_wxImageHandler_GetExtension},
    {sipName_GetImageCount, SIP_MLMETH_CAST(meth_wxImageHandler_GetImageCount), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_GetImageCount},
    {sipName_GetMimeType, meth_wxImageHandler_GetMimeType, METH_VARARGS, doc_wxImageHandler_GetMimeType},
    {sipName_GetName, meth_wxImageHandler_GetName, METH_VARARGS, doc_wxImageHandler_GetName},
    {sipName_GetType, meth_wxImageHandler_GetType, METH_VARARGS, doc_wxImageHandler_GetType},
    {sipName_LoadFile, SIP_MLMETH_CAST(meth_wxImageHandler_LoadFile), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_LoadFile},
    {sipName_SaveFile, SIP_MLMETH_CAST(meth_wxImageHandler_SaveFile), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_SaveFile},
    {sipName_SetAltExtensions, SIP_MLMETH_CAST(meth_wxImageHandler_SetAltExtensions), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_SetAltExtensions},
    {sipName_SetExtension, SIP_MLMETH_CAST(meth_wxImageHandler_SetExtension), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_SetExtension},
    {sipName_SetMimeType, SIP_MLMETH_CAST(meth_wxImageHandler_SetMimeType), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_SetMimeType},
    {sipName_SetName, SIP_MLMETH_CAST(meth_wxImageHandler_SetName), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_SetName},
    {sipName_SetType, SIP_MLMETH_CAST(meth_wxImageHandler_SetType), METH_VARARGS|METH_KEYWORDS, doc_wxImageHandler_SetType}
};

sipVariableDef variables_wxImageHandler[] = {
    {PropertyVariable, sipName_Type, &methods_wxImageHandler[8], &methods_wxImageHandler[15], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Name, &methods_wxImageHandler[7], &methods_wxImageHandler[14], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_MimeType, &methods_wxImageHandler[6], &methods_wxImageHandler[13], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Extension, &methods_wxImageHandler[4], &methods_wxImageHandler[12], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_AltExtensions, &methods_wxImageHandler[3], &methods_wxImageHandler[11], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxImageHandler, "ImageHandler()\n"
"\n"
"This is the base class for implementing image file loading/saving, and\n"
"image creation from data.");


sipClassTypeDef sipTypeDef__core_wxImageHandler = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxImageHandler,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_ImageHandler,
        {0, 0, 1},
        16, methods_wxImageHandler,
        0, SIP_NULLPTR,
        5, variables_wxImageHandler,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxImageHandler,
    -1,
    -1,
    supers_wxImageHandler,
    SIP_NULLPTR,
    init_type_wxImageHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxImageHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxImageHandler,
    cast_wxImageHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
