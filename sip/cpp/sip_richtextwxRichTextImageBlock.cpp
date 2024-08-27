/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_richtext.h"
        #include <wx/richtext/richtextbuffer.h>
        #include <wx/stream.h>
        #include <wx/stream.h>
        #include <wx/image.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxRichTextImageBlock : public  ::wxRichTextImageBlock
{
public:
    sipwxRichTextImageBlock();
    sipwxRichTextImageBlock(const  ::wxRichTextImageBlock&);
    virtual ~sipwxRichTextImageBlock();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool DoMakeImageBlock(const  ::wxImage&, ::wxBitmapType) SIP_OVERRIDE;
    bool MakeImageBlockDefaultQuality(const  ::wxImage&, ::wxBitmapType) SIP_OVERRIDE;
    bool MakeImageBlock( ::wxImage&, ::wxBitmapType,int) SIP_OVERRIDE;
    bool MakeImageBlock(const  ::wxString&, ::wxBitmapType, ::wxImage&,bool) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxRichTextImageBlock(const sipwxRichTextImageBlock &);
    sipwxRichTextImageBlock &operator = (const sipwxRichTextImageBlock &);

    char sipPyMethods[4];
};

sipwxRichTextImageBlock::sipwxRichTextImageBlock():  ::wxRichTextImageBlock(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxRichTextImageBlock::sipwxRichTextImageBlock(const  ::wxRichTextImageBlock& block):  ::wxRichTextImageBlock(block), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxRichTextImageBlock::~sipwxRichTextImageBlock()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxRichTextImageBlock::DoMakeImageBlock(const  ::wxImage& image, ::wxBitmapType imageType)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_DoMakeImageBlock);

    if (!sipMeth)
        return  ::wxRichTextImageBlock::DoMakeImageBlock(image,imageType);

    extern bool sipVH__richtext_90(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxImage&, ::wxBitmapType);

    return sipVH__richtext_90(sipGILState, 0, sipPySelf, sipMeth, image, imageType);
}

bool sipwxRichTextImageBlock::MakeImageBlockDefaultQuality(const  ::wxImage& image, ::wxBitmapType imageType)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_MakeImageBlockDefaultQuality);

    if (!sipMeth)
        return  ::wxRichTextImageBlock::MakeImageBlockDefaultQuality(image,imageType);

    extern bool sipVH__richtext_90(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxImage&, ::wxBitmapType);

    return sipVH__richtext_90(sipGILState, 0, sipPySelf, sipMeth, image, imageType);
}

bool sipwxRichTextImageBlock::MakeImageBlock( ::wxImage& image, ::wxBitmapType imageType,int quality)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_MakeImageBlock);

    if (!sipMeth)
        return  ::wxRichTextImageBlock::MakeImageBlock(image,imageType,quality);

    extern bool sipVH__richtext_89(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxImage&, ::wxBitmapType,int);

    return sipVH__richtext_89(sipGILState, 0, sipPySelf, sipMeth, image, imageType, quality);
}

bool sipwxRichTextImageBlock::MakeImageBlock(const  ::wxString& filename, ::wxBitmapType imageType, ::wxImage& image,bool convertToJPEG)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_MakeImageBlock);

    if (!sipMeth)
        return  ::wxRichTextImageBlock::MakeImageBlock(filename,imageType,image,convertToJPEG);

    extern bool sipVH__richtext_88(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&, ::wxBitmapType, ::wxImage&,bool);

    return sipVH__richtext_88(sipGILState, 0, sipPySelf, sipMeth, filename, imageType, image, convertToJPEG);
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_Init, "Init()\n"
"\n"
"Initialises the block.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_Init(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_Init(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextImageBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Init();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_Init, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_Clear, "Clear()\n"
"\n"
"Clears the block.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_Clear(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextImageBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Clear();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_Clear, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_MakeImageBlock, "MakeImageBlock(filename, imageType, image, convertToJPEG=True) -> bool\n"
"MakeImageBlock(image, imageType, quality=80) -> bool\n"
"\n"
"Load the original image into a memory block.\n"
"");

extern "C" {static PyObject *meth_wxRichTextImageBlock_MakeImageBlock(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_MakeImageBlock(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* filename;
        int filenameState = 0;
         ::wxBitmapType imageType;
         ::wxImage* image;
        bool convertToJPEG = 1;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_filename,
            sipName_imageType,
            sipName_image,
            sipName_convertToJPEG,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1EJ9|b", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxString, &filename, &filenameState, sipType_wxBitmapType, &imageType, sipType_wxImage, &image, &convertToJPEG))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxRichTextImageBlock::MakeImageBlock(*filename,imageType,*image,convertToJPEG) : sipCpp->MakeImageBlock(*filename,imageType,*image,convertToJPEG));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(filename), sipType_wxString, filenameState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::wxImage* image;
         ::wxBitmapType imageType;
        int quality = 80;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
            sipName_imageType,
            sipName_quality,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9E|i", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxImage, &image, sipType_wxBitmapType, &imageType, &quality))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxRichTextImageBlock::MakeImageBlock(*image,imageType,quality) : sipCpp->MakeImageBlock(*image,imageType,quality));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_MakeImageBlock, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_MakeImageBlockDefaultQuality, "MakeImageBlockDefaultQuality(image, imageType) -> bool\n"
"\n"
"Uses a const wxImage for efficiency, but can't set quality (only\n"
"relevant for JPEG)");

extern "C" {static PyObject *meth_wxRichTextImageBlock_MakeImageBlockDefaultQuality(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_MakeImageBlockDefaultQuality(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxImage* image;
         ::wxBitmapType imageType;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
            sipName_imageType,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9E", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxImage, &image, sipType_wxBitmapType, &imageType))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxRichTextImageBlock::MakeImageBlockDefaultQuality(*image,imageType) : sipCpp->MakeImageBlockDefaultQuality(*image,imageType));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_MakeImageBlockDefaultQuality, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_DoMakeImageBlock, "DoMakeImageBlock(image, imageType) -> bool\n"
"\n"
"Makes the image block.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_DoMakeImageBlock(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_DoMakeImageBlock(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxImage* image;
         ::wxBitmapType imageType;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
            sipName_imageType,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9E", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxImage, &image, sipType_wxBitmapType, &imageType))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxRichTextImageBlock::DoMakeImageBlock(*image,imageType) : sipCpp->DoMakeImageBlock(*image,imageType));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_DoMakeImageBlock, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_Write, "Write(filename) -> bool\n"
"\n"
"Writes the block to a file.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_Write(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_Write(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* filename;
        int filenameState = 0;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_filename,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxString, &filename, &filenameState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Write(*filename);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(filename), sipType_wxString, filenameState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_Write, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_WriteHex, "WriteHex(stream) -> bool\n"
"\n"
"Writes the data in hex to a stream.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_WriteHex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_WriteHex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxOutputStream* stream;
        int streamState = 0;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxOutputStream, &stream, &streamState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->WriteHex(*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxOutputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_WriteHex, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_ReadHex, "ReadHex(stream, length, imageType) -> bool\n"
"\n"
"Reads the data in hex from a stream.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_ReadHex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_ReadHex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxInputStream* stream;
        int streamState = 0;
        int length;
         ::wxBitmapType imageType;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
            sipName_length,
            sipName_imageType,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1iE", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxInputStream, &stream, &streamState, &length, sipType_wxBitmapType, &imageType))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ReadHex(*stream,length,imageType);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_ReadHex, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_Copy, "Copy(block)\n"
"\n"
"Copy from block.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_Copy(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_Copy(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextImageBlock* block;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_block,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxRichTextImageBlock, &block))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Copy(*block);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_Copy, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_Load, "Load(image) -> bool");

extern "C" {static PyObject *meth_wxRichTextImageBlock_Load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_Load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxImage* image;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxImage, &image))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Load(*image);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_Load, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_GetData, "GetData() -> unsignedchar\n"
"\n"
"Returns the raw data.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_GetData(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_GetData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextImageBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp))
        {
            unsigned char*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetData();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyBytes_FromString((char *)sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_GetData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_GetDataSize, "GetDataSize() -> size_t\n"
"\n"
"Returns the data size in bytes.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_GetDataSize(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_GetDataSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextImageBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp))
        {
            size_t sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetDataSize();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_GetDataSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_GetImageType, "GetImageType() -> BitmapType\n"
"\n"
"Returns the image type.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_GetImageType(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_GetImageType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextImageBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp))
        {
             ::wxBitmapType sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetImageType();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxBitmapType);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_GetImageType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_SetData, "SetData(image)");

extern "C" {static PyObject *meth_wxRichTextImageBlock_SetData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_SetData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        unsigned char* image;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bs", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, &image))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetData(image);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_SetData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_SetDataSize, "SetDataSize(size)\n"
"\n"
"Sets the data size.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_SetDataSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_SetDataSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        size_t size;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, &size))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetDataSize(size);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_SetDataSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_SetImageType, "SetImageType(imageType)\n"
"\n"
"Sets the image type.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_SetImageType(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_SetImageType(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxBitmapType imageType;
         ::wxRichTextImageBlock *sipCpp;

        static const char *sipKwdList[] = {
            sipName_imageType,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp, sipType_wxBitmapType, &imageType))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetImageType(imageType);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_SetImageType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_IsOk, "IsOk() -> bool\n"
"\n"
"Returns true if the data is non-NULL.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_IsOk(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_IsOk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextImageBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsOk();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_IsOk, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_Ok, "Ok() -> bool");

extern "C" {static PyObject *meth_wxRichTextImageBlock_Ok(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_Ok(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextImageBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Ok();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_Ok, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_GetExtension, "GetExtension() -> String\n"
"\n"
"Gets the extension for the block's type.");

extern "C" {static PyObject *meth_wxRichTextImageBlock_GetExtension(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_GetExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextImageBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextImageBlock, &sipCpp))
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

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_GetExtension, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_ReadBlock, "ReadBlock(stream, size) -> unsignedchar\n"
"ReadBlock(filename, size) -> unsignedchar\n"
"\n"
"Implementation.\n"
"");

extern "C" {static PyObject *meth_wxRichTextImageBlock_ReadBlock(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_ReadBlock(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxInputStream* stream;
        int streamState = 0;
        size_t size;

        static const char *sipKwdList[] = {
            sipName_stream,
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1=", sipType_wxInputStream, &stream, &streamState, &size))
        {
            unsigned char*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxRichTextImageBlock::ReadBlock(*stream,size);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyBytes_FromString((char *)sipRes);
        }
    }

    {
        const  ::wxString* filename;
        int filenameState = 0;
        size_t size;

        static const char *sipKwdList[] = {
            sipName_filename,
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1=", sipType_wxString, &filename, &filenameState, &size))
        {
            unsigned char*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxRichTextImageBlock::ReadBlock(*filename,size);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(filename), sipType_wxString, filenameState);

            if (PyErr_Occurred())
                return 0;

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyBytes_FromString((char *)sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_ReadBlock, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextImageBlock_WriteBlock, "WriteBlock(stream, block, size) -> bool\n"
"WriteBlock(filename, block, size) -> bool\n"
"\n"
"Writes a memory block to stream.\n"
"");

extern "C" {static PyObject *meth_wxRichTextImageBlock_WriteBlock(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextImageBlock_WriteBlock(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxOutputStream* stream;
        int streamState = 0;
        unsigned char* block;
        size_t size;

        static const char *sipKwdList[] = {
            sipName_stream,
            sipName_block,
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1s=", sipType_wxOutputStream, &stream, &streamState, &block, &size))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxRichTextImageBlock::WriteBlock(*stream,block,size);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxOutputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::wxString* filename;
        int filenameState = 0;
        unsigned char* block;
        size_t size;

        static const char *sipKwdList[] = {
            sipName_filename,
            sipName_block,
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1s=", sipType_wxString, &filename, &filenameState, &block, &size))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxRichTextImageBlock::WriteBlock(*filename,block,size);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(filename), sipType_wxString, filenameState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_RichTextImageBlock, sipName_WriteBlock, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxRichTextImageBlock(void *, const sipTypeDef *);}
static void *cast_wxRichTextImageBlock(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxRichTextImageBlock *sipCpp = reinterpret_cast< ::wxRichTextImageBlock *>(sipCppV);

    if (targetType == sipType_wxRichTextImageBlock)
        return sipCppV;

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRichTextImageBlock(void *, int);}
static void release_wxRichTextImageBlock(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxRichTextImageBlock *>(sipCppV);
    else
        delete reinterpret_cast< ::wxRichTextImageBlock *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxRichTextImageBlock(Py_ssize_t);}
static void *array_wxRichTextImageBlock(Py_ssize_t sipNrElem)
{
    return new  ::wxRichTextImageBlock[sipNrElem];
}


extern "C" {static void assign_wxRichTextImageBlock(void *, Py_ssize_t, void *);}
static void assign_wxRichTextImageBlock(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxRichTextImageBlock *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxRichTextImageBlock *>(sipSrc);
}


extern "C" {static void *copy_wxRichTextImageBlock(const void *, Py_ssize_t);}
static void *copy_wxRichTextImageBlock(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxRichTextImageBlock(reinterpret_cast<const  ::wxRichTextImageBlock *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxRichTextImageBlock(sipSimpleWrapper *);}
static void dealloc_wxRichTextImageBlock(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxRichTextImageBlock *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxRichTextImageBlock(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxRichTextImageBlock(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxRichTextImageBlock(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxRichTextImageBlock *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxRichTextImageBlock();
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
        const  ::wxRichTextImageBlock* block;

        static const char *sipKwdList[] = {
            sipName_block,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxRichTextImageBlock, &block))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxRichTextImageBlock(*block);
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
static sipEncodedTypeDef supers_wxRichTextImageBlock[] = {{42, 0, 1}};


static PyMethodDef methods_wxRichTextImageBlock[] = {
    {sipName_Clear, meth_wxRichTextImageBlock_Clear, METH_VARARGS, doc_wxRichTextImageBlock_Clear},
    {sipName_Copy, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_Copy), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_Copy},
    {sipName_DoMakeImageBlock, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_DoMakeImageBlock), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_DoMakeImageBlock},
    {sipName_GetData, meth_wxRichTextImageBlock_GetData, METH_VARARGS, doc_wxRichTextImageBlock_GetData},
    {sipName_GetDataSize, meth_wxRichTextImageBlock_GetDataSize, METH_VARARGS, doc_wxRichTextImageBlock_GetDataSize},
    {sipName_GetExtension, meth_wxRichTextImageBlock_GetExtension, METH_VARARGS, doc_wxRichTextImageBlock_GetExtension},
    {sipName_GetImageType, meth_wxRichTextImageBlock_GetImageType, METH_VARARGS, doc_wxRichTextImageBlock_GetImageType},
    {sipName_Init, meth_wxRichTextImageBlock_Init, METH_VARARGS, doc_wxRichTextImageBlock_Init},
    {sipName_IsOk, meth_wxRichTextImageBlock_IsOk, METH_VARARGS, doc_wxRichTextImageBlock_IsOk},
    {sipName_Load, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_Load), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_Load},
    {sipName_MakeImageBlock, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_MakeImageBlock), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_MakeImageBlock},
    {sipName_MakeImageBlockDefaultQuality, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_MakeImageBlockDefaultQuality), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_MakeImageBlockDefaultQuality},
    {sipName_Ok, meth_wxRichTextImageBlock_Ok, METH_VARARGS, doc_wxRichTextImageBlock_Ok},
    {sipName_ReadBlock, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_ReadBlock), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_ReadBlock},
    {sipName_ReadHex, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_ReadHex), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_ReadHex},
    {sipName_SetData, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_SetData), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_SetData},
    {sipName_SetDataSize, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_SetDataSize), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_SetDataSize},
    {sipName_SetImageType, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_SetImageType), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_SetImageType},
    {sipName_Write, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_Write), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_Write},
    {sipName_WriteBlock, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_WriteBlock), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_WriteBlock},
    {sipName_WriteHex, SIP_MLMETH_CAST(meth_wxRichTextImageBlock_WriteHex), METH_VARARGS|METH_KEYWORDS, doc_wxRichTextImageBlock_WriteHex}
};

sipVariableDef variables_wxRichTextImageBlock[] = {
    {PropertyVariable, sipName_ImageType, &methods_wxRichTextImageBlock[6], &methods_wxRichTextImageBlock[17], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Extension, &methods_wxRichTextImageBlock[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_DataSize, &methods_wxRichTextImageBlock[4], &methods_wxRichTextImageBlock[16], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Data, &methods_wxRichTextImageBlock[3], &methods_wxRichTextImageBlock[15], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxRichTextImageBlock, "RichTextImageBlock()\n"
"RichTextImageBlock(block)\n"
"\n"
"This class stores information about an image, in binary in-memory\n"
"form.");


sipClassTypeDef sipTypeDef__richtext_wxRichTextImageBlock = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxRichTextImageBlock,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_RichTextImageBlock,
        {0, 0, 1},
        21, methods_wxRichTextImageBlock,
        0, SIP_NULLPTR,
        4, variables_wxRichTextImageBlock,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxRichTextImageBlock,
    -1,
    -1,
    supers_wxRichTextImageBlock,
    SIP_NULLPTR,
    init_type_wxRichTextImageBlock,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxRichTextImageBlock,
    assign_wxRichTextImageBlock,
    array_wxRichTextImageBlock,
    copy_wxRichTextImageBlock,
    release_wxRichTextImageBlock,
    cast_wxRichTextImageBlock,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
