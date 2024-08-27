/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_xml.h"
        #include <wx/xml/xml.h>
        #include <wx/stream.h>
        #include <wx/versioninfo.h>
        #include <wx/xml/xml.h>
        #include <wx/xml/xml.h>
        #include <wx/stream.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxXmlDocument : public  ::wxXmlDocument
{
public:
    sipwxXmlDocument();
    sipwxXmlDocument(const  ::wxXmlDocument&);
    sipwxXmlDocument(const  ::wxString&,const  ::wxString&);
    sipwxXmlDocument( ::wxInputStream&,const  ::wxString&);
    virtual ~sipwxXmlDocument();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool Save( ::wxOutputStream&,int) const SIP_OVERRIDE;
    bool Save(const  ::wxString&,int) const SIP_OVERRIDE;
    bool Load( ::wxInputStream&,const  ::wxString&,int) SIP_OVERRIDE;
    bool Load(const  ::wxString&,const  ::wxString&,int) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxXmlDocument(const sipwxXmlDocument &);
    sipwxXmlDocument &operator = (const sipwxXmlDocument &);

    char sipPyMethods[4];
};

sipwxXmlDocument::sipwxXmlDocument():  ::wxXmlDocument(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxXmlDocument::sipwxXmlDocument(const  ::wxXmlDocument& doc):  ::wxXmlDocument(doc), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxXmlDocument::sipwxXmlDocument(const  ::wxString& filename,const  ::wxString& encoding):  ::wxXmlDocument(filename,encoding), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxXmlDocument::sipwxXmlDocument( ::wxInputStream& stream,const  ::wxString& encoding):  ::wxXmlDocument(stream,encoding), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxXmlDocument::~sipwxXmlDocument()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxXmlDocument::Save( ::wxOutputStream& stream,int indentstep) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Save);

    if (!sipMeth)
        return  ::wxXmlDocument::Save(stream,indentstep);

    extern bool sipVH__xml_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxOutputStream&,int);

    return sipVH__xml_9(sipGILState, 0, sipPySelf, sipMeth, stream, indentstep);
}

bool sipwxXmlDocument::Save(const  ::wxString& filename,int indentstep) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Save);

    if (!sipMeth)
        return  ::wxXmlDocument::Save(filename,indentstep);

    extern bool sipVH__xml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&,int);

    return sipVH__xml_8(sipGILState, 0, sipPySelf, sipMeth, filename, indentstep);
}

bool sipwxXmlDocument::Load( ::wxInputStream& stream,const  ::wxString& encoding,int flags)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_Load);

    if (!sipMeth)
        return  ::wxXmlDocument::Load(stream,encoding,flags);

    extern bool sipVH__xml_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&,const  ::wxString&,int);

    return sipVH__xml_7(sipGILState, 0, sipPySelf, sipMeth, stream, encoding, flags);
}

bool sipwxXmlDocument::Load(const  ::wxString& filename,const  ::wxString& encoding,int flags)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_Load);

    if (!sipMeth)
        return  ::wxXmlDocument::Load(filename,encoding,flags);

    extern bool sipVH__xml_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&,const  ::wxString&,int);

    return sipVH__xml_6(sipGILState, 0, sipPySelf, sipMeth, filename, encoding, flags);
}


PyDoc_STRVAR(doc_wxXmlDocument_AppendToProlog, "AppendToProlog(node)\n"
"\n"
"Appends a Process Instruction or Comment node to the document\n"
"prologue.");

extern "C" {static PyObject *meth_wxXmlDocument_AppendToProlog(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_AppendToProlog(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxXmlNode* node;
         ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_node,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ:", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxXmlNode, &node))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->AppendToProlog(node);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_AppendToProlog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_DetachDocumentNode, "DetachDocumentNode() -> XmlNode\n"
"\n"
"Detaches the document node and returns it.");

extern "C" {static PyObject *meth_wxXmlDocument_DetachDocumentNode(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_DetachDocumentNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
        {
             ::wxXmlNode*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->DetachDocumentNode();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxXmlNode,Py_None);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_DetachDocumentNode, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_DetachRoot, "DetachRoot() -> XmlNode\n"
"\n"
"Detaches the root entity node and returns it.");

extern "C" {static PyObject *meth_wxXmlDocument_DetachRoot(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_DetachRoot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
        {
             ::wxXmlNode*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->DetachRoot();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxXmlNode,Py_None);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_DetachRoot, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_GetFileEncoding, "GetFileEncoding() -> String\n"
"\n"
"Returns encoding of document (may be empty).");

extern "C" {static PyObject *meth_wxXmlDocument_GetFileEncoding(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_GetFileEncoding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetFileEncoding());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_GetFileEncoding, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_GetDoctype, "GetDoctype() -> XmlDoctype\n"
"\n"
"Returns the DOCTYPE declaration data for the document.");

extern "C" {static PyObject *meth_wxXmlDocument_GetDoctype(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_GetDoctype(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
        {
             ::wxXmlDoctype*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxXmlDoctype(sipCpp->GetDoctype());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxXmlDoctype,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_GetDoctype, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_GetFileType, "GetFileType() -> TextFileType\n"
"\n"
"Returns the output line ending format used for documents.");

extern "C" {static PyObject *meth_wxXmlDocument_GetFileType(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_GetFileType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
        {
             ::wxTextFileType sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetFileType();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxTextFileType);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_GetFileType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_GetEOL, "GetEOL() -> String\n"
"\n"
"Returns the output line ending string used for documents.");

extern "C" {static PyObject *meth_wxXmlDocument_GetEOL(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_GetEOL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetEOL());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_GetEOL, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_GetDocumentNode, "GetDocumentNode() -> XmlNode\n"
"\n"
"Returns the document node of the document.");

extern "C" {static PyObject *meth_wxXmlDocument_GetDocumentNode(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_GetDocumentNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
        {
             ::wxXmlNode*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetDocumentNode();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxXmlNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_GetDocumentNode, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_GetRoot, "GetRoot() -> XmlNode\n"
"\n"
"Returns the root element node of the document.");

extern "C" {static PyObject *meth_wxXmlDocument_GetRoot(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_GetRoot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
        {
             ::wxXmlNode*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetRoot();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxXmlNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_GetRoot, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_GetVersion, "GetVersion() -> String\n"
"\n"
"Returns the version of document.");

extern "C" {static PyObject *meth_wxXmlDocument_GetVersion(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_GetVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetVersion());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_GetVersion, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_IsOk, "IsOk() -> bool\n"
"\n"
"Returns true if the document has been loaded successfully.");

extern "C" {static PyObject *meth_wxXmlDocument_IsOk(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_IsOk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxXmlDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxXmlDocument, &sipCpp))
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

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_IsOk, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_Load, "Load(filename, encoding=\"UTF-8\", flags=XMLDOC_NONE) -> bool\n"
"Load(stream, encoding=\"UTF-8\", flags=XMLDOC_NONE) -> bool\n"
"\n"
"Parses filename as an xml document and loads its data.\n"
"");

extern "C" {static PyObject *meth_wxXmlDocument_Load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_Load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* filename;
        int filenameState = 0;
        const  ::wxString& encodingdef = "UTF-8";
        const  ::wxString* encoding = &encodingdef;
        int encodingState = 0;
        int flags = wxXMLDOC_NONE;
         ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_filename,
            sipName_encoding,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J1i", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxString, &filename, &filenameState, sipType_wxString, &encoding, &encodingState, &flags))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxXmlDocument::Load(*filename,*encoding,flags) : sipCpp->Load(*filename,*encoding,flags));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(filename), sipType_wxString, filenameState);
            sipReleaseType(const_cast< ::wxString *>(encoding), sipType_wxString, encodingState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::wxInputStream* stream;
        int streamState = 0;
        const  ::wxString& encodingdef = "UTF-8";
        const  ::wxString* encoding = &encodingdef;
        int encodingState = 0;
        int flags = wxXMLDOC_NONE;
         ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
            sipName_encoding,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J1i", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxInputStream, &stream, &streamState, sipType_wxString, &encoding, &encodingState, &flags))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxXmlDocument::Load(*stream,*encoding,flags) : sipCpp->Load(*stream,*encoding,flags));
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);
            sipReleaseType(const_cast< ::wxString *>(encoding), sipType_wxString, encodingState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_Load, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_Save, "Save(filename, indentstep=2) -> bool\n"
"Save(stream, indentstep=2) -> bool\n"
"\n"
"Saves XML tree creating a file named with given string.\n"
"");

extern "C" {static PyObject *meth_wxXmlDocument_Save(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_Save(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* filename;
        int filenameState = 0;
        int indentstep = 2;
        const  ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_filename,
            sipName_indentstep,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|i", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxString, &filename, &filenameState, &indentstep))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxXmlDocument::Save(*filename,indentstep) : sipCpp->Save(*filename,indentstep));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(filename), sipType_wxString, filenameState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::wxOutputStream* stream;
        int streamState = 0;
        int indentstep = 2;
        const  ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
            sipName_indentstep,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|i", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxOutputStream, &stream, &streamState, &indentstep))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxXmlDocument::Save(*stream,indentstep) : sipCpp->Save(*stream,indentstep));
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxOutputStream, streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_Save, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_SetDocumentNode, "SetDocumentNode(node)\n"
"\n"
"Sets the document node of this document.");

extern "C" {static PyObject *meth_wxXmlDocument_SetDocumentNode(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_SetDocumentNode(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxXmlNode* node;
         ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_node,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ:", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxXmlNode, &node))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetDocumentNode(node);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_SetDocumentNode, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_SetFileEncoding, "SetFileEncoding(encoding)\n"
"\n"
"Sets the encoding of the file which will be used to save the document.");

extern "C" {static PyObject *meth_wxXmlDocument_SetFileEncoding(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_SetFileEncoding(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* encoding;
        int encodingState = 0;
         ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_encoding,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxString, &encoding, &encodingState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFileEncoding(*encoding);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(encoding), sipType_wxString, encodingState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_SetFileEncoding, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_SetDoctype, "SetDoctype(doctype)\n"
"\n"
"Sets the data which will appear in the DOCTYPE declaration when the\n"
"document is saved.");

extern "C" {static PyObject *meth_wxXmlDocument_SetDoctype(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_SetDoctype(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxXmlDoctype* doctype;
         ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_doctype,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxXmlDoctype, &doctype))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetDoctype(*doctype);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_SetDoctype, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_SetFileType, "SetFileType(fileType)\n"
"\n"
"Sets the output line ending formats when the document is saved.");

extern "C" {static PyObject *meth_wxXmlDocument_SetFileType(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_SetFileType(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextFileType fileType;
         ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_fileType,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxTextFileType, &fileType))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFileType(fileType);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_SetFileType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_SetRoot, "SetRoot(node)\n"
"\n"
"Sets the root element node of this document.");

extern "C" {static PyObject *meth_wxXmlDocument_SetRoot(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_SetRoot(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxXmlNode* node;
         ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_node,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ:", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxXmlNode, &node))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetRoot(node);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_SetRoot, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_SetVersion, "SetVersion(version)\n"
"\n"
"Sets the version of the XML file which will be used to save the\n"
"document.");

extern "C" {static PyObject *meth_wxXmlDocument_SetVersion(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_SetVersion(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* version;
        int versionState = 0;
         ::wxXmlDocument *sipCpp;

        static const char *sipKwdList[] = {
            sipName_version,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxXmlDocument, &sipCpp, sipType_wxString, &version, &versionState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetVersion(*version);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(version), sipType_wxString, versionState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_SetVersion, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxXmlDocument_GetLibraryVersionInfo, "GetLibraryVersionInfo() -> VersionInfo\n"
"\n"
"Get expat library version information.");

extern "C" {static PyObject *meth_wxXmlDocument_GetLibraryVersionInfo(PyObject *, PyObject *);}
static PyObject *meth_wxXmlDocument_GetLibraryVersionInfo(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::wxVersionInfo*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxVersionInfo( ::wxXmlDocument::GetLibraryVersionInfo());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxVersionInfo,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_XmlDocument, sipName_GetLibraryVersionInfo, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxXmlDocument(void *, const sipTypeDef *);}
static void *cast_wxXmlDocument(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxXmlDocument *sipCpp = reinterpret_cast< ::wxXmlDocument *>(sipCppV);

    if (targetType == sipType_wxXmlDocument)
        return sipCppV;

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxXmlDocument(void *, int);}
static void release_wxXmlDocument(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxXmlDocument *>(sipCppV);
    else
        delete reinterpret_cast< ::wxXmlDocument *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxXmlDocument(Py_ssize_t);}
static void *array_wxXmlDocument(Py_ssize_t sipNrElem)
{
    return new  ::wxXmlDocument[sipNrElem];
}


extern "C" {static void assign_wxXmlDocument(void *, Py_ssize_t, void *);}
static void assign_wxXmlDocument(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxXmlDocument *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxXmlDocument *>(sipSrc);
}


extern "C" {static void *copy_wxXmlDocument(const void *, Py_ssize_t);}
static void *copy_wxXmlDocument(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxXmlDocument(reinterpret_cast<const  ::wxXmlDocument *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxXmlDocument(sipSimpleWrapper *);}
static void dealloc_wxXmlDocument(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxXmlDocument *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxXmlDocument(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxXmlDocument(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxXmlDocument(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxXmlDocument *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxXmlDocument();
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
        const  ::wxXmlDocument* doc;

        static const char *sipKwdList[] = {
            sipName_doc,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxXmlDocument, &doc))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxXmlDocument(*doc);
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
        const  ::wxString* filename;
        int filenameState = 0;
        const  ::wxString& encodingdef = "UTF-8";
        const  ::wxString* encoding = &encodingdef;
        int encodingState = 0;

        static const char *sipKwdList[] = {
            sipName_filename,
            sipName_encoding,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1", sipType_wxString, &filename, &filenameState, sipType_wxString, &encoding, &encodingState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxXmlDocument(*filename,*encoding);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(filename), sipType_wxString, filenameState);
            sipReleaseType(const_cast< ::wxString *>(encoding), sipType_wxString, encodingState);

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
         ::wxInputStream* stream;
        int streamState = 0;
        const  ::wxString& encodingdef = "UTF-8";
        const  ::wxString* encoding = &encodingdef;
        int encodingState = 0;

        static const char *sipKwdList[] = {
            sipName_stream,
            sipName_encoding,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1", sipType_wxInputStream, &stream, &streamState, sipType_wxString, &encoding, &encodingState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxXmlDocument(*stream,*encoding);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream, sipType_wxInputStream, streamState);
            sipReleaseType(const_cast< ::wxString *>(encoding), sipType_wxString, encodingState);

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
static sipEncodedTypeDef supers_wxXmlDocument[] = {{1, 0, 1}};


static PyMethodDef methods_wxXmlDocument[] = {
    {sipName_AppendToProlog, SIP_MLMETH_CAST(meth_wxXmlDocument_AppendToProlog), METH_VARARGS|METH_KEYWORDS, doc_wxXmlDocument_AppendToProlog},
    {sipName_DetachDocumentNode, meth_wxXmlDocument_DetachDocumentNode, METH_VARARGS, doc_wxXmlDocument_DetachDocumentNode},
    {sipName_DetachRoot, meth_wxXmlDocument_DetachRoot, METH_VARARGS, doc_wxXmlDocument_DetachRoot},
    {sipName_GetDoctype, meth_wxXmlDocument_GetDoctype, METH_VARARGS, doc_wxXmlDocument_GetDoctype},
    {sipName_GetDocumentNode, meth_wxXmlDocument_GetDocumentNode, METH_VARARGS, doc_wxXmlDocument_GetDocumentNode},
    {sipName_GetEOL, meth_wxXmlDocument_GetEOL, METH_VARARGS, doc_wxXmlDocument_GetEOL},
    {sipName_GetFileEncoding, meth_wxXmlDocument_GetFileEncoding, METH_VARARGS, doc_wxXmlDocument_GetFileEncoding},
    {sipName_GetFileType, meth_wxXmlDocument_GetFileType, METH_VARARGS, doc_wxXmlDocument_GetFileType},
    {sipName_GetLibraryVersionInfo, meth_wxXmlDocument_GetLibraryVersionInfo, METH_VARARGS, doc_wxXmlDocument_GetLibraryVersionInfo},
    {sipName_GetRoot, meth_wxXmlDocument_GetRoot, METH_VARARGS, doc_wxXmlDocument_GetRoot},
    {sipName_GetVersion, meth_wxXmlDocument_GetVersion, METH_VARARGS, doc_wxXmlDocument_GetVersion},
    {sipName_IsOk, meth_wxXmlDocument_IsOk, METH_VARARGS, doc_wxXmlDocument_IsOk},
    {sipName_Load, SIP_MLMETH_CAST(meth_wxXmlDocument_Load), METH_VARARGS|METH_KEYWORDS, doc_wxXmlDocument_Load},
    {sipName_Save, SIP_MLMETH_CAST(meth_wxXmlDocument_Save), METH_VARARGS|METH_KEYWORDS, doc_wxXmlDocument_Save},
    {sipName_SetDoctype, SIP_MLMETH_CAST(meth_wxXmlDocument_SetDoctype), METH_VARARGS|METH_KEYWORDS, doc_wxXmlDocument_SetDoctype},
    {sipName_SetDocumentNode, SIP_MLMETH_CAST(meth_wxXmlDocument_SetDocumentNode), METH_VARARGS|METH_KEYWORDS, doc_wxXmlDocument_SetDocumentNode},
    {sipName_SetFileEncoding, SIP_MLMETH_CAST(meth_wxXmlDocument_SetFileEncoding), METH_VARARGS|METH_KEYWORDS, doc_wxXmlDocument_SetFileEncoding},
    {sipName_SetFileType, SIP_MLMETH_CAST(meth_wxXmlDocument_SetFileType), METH_VARARGS|METH_KEYWORDS, doc_wxXmlDocument_SetFileType},
    {sipName_SetRoot, SIP_MLMETH_CAST(meth_wxXmlDocument_SetRoot), METH_VARARGS|METH_KEYWORDS, doc_wxXmlDocument_SetRoot},
    {sipName_SetVersion, SIP_MLMETH_CAST(meth_wxXmlDocument_SetVersion), METH_VARARGS|METH_KEYWORDS, doc_wxXmlDocument_SetVersion}
};

sipVariableDef variables_wxXmlDocument[] = {
    {PropertyVariable, sipName_Version, &methods_wxXmlDocument[10], &methods_wxXmlDocument[19], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Root, &methods_wxXmlDocument[9], &methods_wxXmlDocument[18], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FileType, &methods_wxXmlDocument[7], &methods_wxXmlDocument[17], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FileEncoding, &methods_wxXmlDocument[6], &methods_wxXmlDocument[16], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_EOL, &methods_wxXmlDocument[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_DocumentNode, &methods_wxXmlDocument[4], &methods_wxXmlDocument[15], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Doctype, &methods_wxXmlDocument[3], &methods_wxXmlDocument[14], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxXmlDocument, "XmlDocument()\n"
"XmlDocument(doc)\n"
"XmlDocument(filename, encoding=\"UTF-8\")\n"
"XmlDocument(stream, encoding=\"UTF-8\")\n"
"\n"
"This class holds XML data/document as parsed by XML parser in the root\n"
"node.");


sipClassTypeDef sipTypeDef__xml_wxXmlDocument = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxXmlDocument,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_XmlDocument,
        {0, 0, 1},
        20, methods_wxXmlDocument,
        0, SIP_NULLPTR,
        7, variables_wxXmlDocument,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxXmlDocument,
    -1,
    -1,
    supers_wxXmlDocument,
    SIP_NULLPTR,
    init_type_wxXmlDocument,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxXmlDocument,
    assign_wxXmlDocument,
    array_wxXmlDocument,
    copy_wxXmlDocument,
    release_wxXmlDocument,
    cast_wxXmlDocument,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
