/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html.h"
        #include <wx/html/htmlpars.h>
        #include <wx/html/htmltag.h>
        #include <wx/filesys.h>
        #include <wx/html/htmlpars.h>
        #include <wx/object.h>
        #include <wx/filesys.h>


PyDoc_STRVAR(doc_wxHtmlParser_AddTagHandler, "AddTagHandler(handler)\n"
"\n"
"Adds handler to the internal list ( hash table) of handlers.");

extern "C" {static PyObject *meth_wxHtmlParser_AddTagHandler(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_AddTagHandler(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxHtmlTagHandler* handler;
         ::wxHtmlParser *sipCpp;

        static const char *sipKwdList[] = {
            sipName_handler,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxHtmlParser, &sipCpp, sipType_wxHtmlTagHandler, &handler))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxHtmlParser::AddTagHandler(handler) : sipCpp->AddTagHandler(handler));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_AddTagHandler, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_DoParsing, "DoParsing()\n"
"\n"
"Parses the whole m_Source.");

extern "C" {static PyObject *meth_wxHtmlParser_DoParsing(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_DoParsing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHtmlParser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlParser, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->DoParsing();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_DoParsing, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_DoneParser, "DoneParser()\n"
"\n"
"This must be called after DoParsing().");

extern "C" {static PyObject *meth_wxHtmlParser_DoneParser(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_DoneParser(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxHtmlParser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlParser, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxHtmlParser::DoneParser() : sipCpp->DoneParser());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_DoneParser, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_GetFS, "GetFS() -> wx.FileSystem\n"
"\n"
"Returns pointer to the file system.");

extern "C" {static PyObject *meth_wxHtmlParser_GetFS(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_GetFS(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlParser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlParser, &sipCpp))
        {
             ::wxFileSystem*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetFS();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxFileSystem,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_GetFS, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_GetProduct, "GetProduct() -> wx.Object\n"
"\n"
"Returns product of parsing.");

extern "C" {static PyObject *meth_wxHtmlParser_GetProduct(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_GetProduct(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxHtmlParser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlParser, &sipCpp))
        {
             ::wxObject*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_HtmlParser, sipName_GetProduct);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetProduct();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxObject,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_GetProduct, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_GetSource, "GetSource() -> String\n"
"\n"
"Returns pointer to the source being parsed.");

extern "C" {static PyObject *meth_wxHtmlParser_GetSource(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_GetSource(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHtmlParser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlParser, &sipCpp))
        {
            const  ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetSource();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(const_cast< ::wxString *>(sipRes),sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_GetSource, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_InitParser, "InitParser(source)\n"
"\n"
"Setups the parser for parsing the source string.");

extern "C" {static PyObject *meth_wxHtmlParser_InitParser(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_InitParser(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* source;
        int sourceState = 0;
         ::wxHtmlParser *sipCpp;

        static const char *sipKwdList[] = {
            sipName_source,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlParser, &sipCpp, sipType_wxString, &source, &sourceState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxHtmlParser::InitParser(*source) : sipCpp->InitParser(*source));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(source), sipType_wxString, sourceState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_InitParser, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_OpenURL, "OpenURL(type, url) -> wx.FSFile\n"
"\n"
"Opens given URL and returns wxFSFile object that can be used to read\n"
"data from it.");

extern "C" {static PyObject *meth_wxHtmlParser_OpenURL(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_OpenURL(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxHtmlURLType type;
        const  ::wxString* url;
        int urlState = 0;
        const  ::wxHtmlParser *sipCpp;

        static const char *sipKwdList[] = {
            sipName_type,
            sipName_url,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BEJ1", &sipSelf, sipType_wxHtmlParser, &sipCpp, sipType_wxHtmlURLType, &type, sipType_wxString, &url, &urlState))
        {
             ::wxFSFile*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxHtmlParser::OpenURL(type,*url) : sipCpp->OpenURL(type,*url));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(url), sipType_wxString, urlState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxFSFile,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_OpenURL, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_Parse, "Parse(source) -> wx.Object\n"
"\n"
"Proceeds parsing of the document.");

extern "C" {static PyObject *meth_wxHtmlParser_Parse(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_Parse(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* source;
        int sourceState = 0;
         ::wxHtmlParser *sipCpp;

        static const char *sipKwdList[] = {
            sipName_source,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlParser, &sipCpp, sipType_wxString, &source, &sourceState))
        {
             ::wxObject*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Parse(*source);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(source), sipType_wxString, sourceState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxObject,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_Parse, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_PopTagHandler, "PopTagHandler()\n"
"\n"
"Restores parser's state before last call to PushTagHandler().");

extern "C" {static PyObject *meth_wxHtmlParser_PopTagHandler(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_PopTagHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHtmlParser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlParser, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->PopTagHandler();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_PopTagHandler, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_PushTagHandler, "PushTagHandler(handler, tags)\n"
"\n"
"Forces the handler to handle additional tags (not returned by\n"
"wxHtmlTagHandler::GetSupportedTags).");

extern "C" {static PyObject *meth_wxHtmlParser_PushTagHandler(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_PushTagHandler(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHtmlTagHandler* handler;
        const  ::wxString* tags;
        int tagsState = 0;
         ::wxHtmlParser *sipCpp;

        static const char *sipKwdList[] = {
            sipName_handler,
            sipName_tags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1", &sipSelf, sipType_wxHtmlParser, &sipCpp, sipType_wxHtmlTagHandler, &handler, sipType_wxString, &tags, &tagsState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->PushTagHandler(handler,*tags);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(tags), sipType_wxString, tagsState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_PushTagHandler, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_SetFS, "SetFS(fs)\n"
"\n"
"Sets the virtual file system that will be used to request additional\n"
"files.");

extern "C" {static PyObject *meth_wxHtmlParser_SetFS(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_SetFS(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxFileSystem* fs;
         ::wxHtmlParser *sipCpp;

        static const char *sipKwdList[] = {
            sipName_fs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxHtmlParser, &sipCpp, sipType_wxFileSystem, &fs))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFS(fs);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_SetFS, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlParser_StopParsing, "StopParsing()\n"
"\n"
"Call this function to interrupt parsing from a tag handler.");

extern "C" {static PyObject *meth_wxHtmlParser_StopParsing(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlParser_StopParsing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxHtmlParser *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlParser, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxHtmlParser::StopParsing() : sipCpp->StopParsing());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlParser, sipName_StopParsing, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHtmlParser(void *, int);}
static void release_wxHtmlParser(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxHtmlParser *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxHtmlParser(sipSimpleWrapper *);}
static void dealloc_wxHtmlParser(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHtmlParser(sipGetAddress(sipSelf), 0);
    }
}


static PyMethodDef methods_wxHtmlParser[] = {
    {sipName_AddTagHandler, SIP_MLMETH_CAST(meth_wxHtmlParser_AddTagHandler), METH_VARARGS|METH_KEYWORDS, doc_wxHtmlParser_AddTagHandler},
    {sipName_DoParsing, meth_wxHtmlParser_DoParsing, METH_VARARGS, doc_wxHtmlParser_DoParsing},
    {sipName_DoneParser, meth_wxHtmlParser_DoneParser, METH_VARARGS, doc_wxHtmlParser_DoneParser},
    {sipName_GetFS, meth_wxHtmlParser_GetFS, METH_VARARGS, doc_wxHtmlParser_GetFS},
    {sipName_GetProduct, meth_wxHtmlParser_GetProduct, METH_VARARGS, doc_wxHtmlParser_GetProduct},
    {sipName_GetSource, meth_wxHtmlParser_GetSource, METH_VARARGS, doc_wxHtmlParser_GetSource},
    {sipName_InitParser, SIP_MLMETH_CAST(meth_wxHtmlParser_InitParser), METH_VARARGS|METH_KEYWORDS, doc_wxHtmlParser_InitParser},
    {sipName_OpenURL, SIP_MLMETH_CAST(meth_wxHtmlParser_OpenURL), METH_VARARGS|METH_KEYWORDS, doc_wxHtmlParser_OpenURL},
    {sipName_Parse, SIP_MLMETH_CAST(meth_wxHtmlParser_Parse), METH_VARARGS|METH_KEYWORDS, doc_wxHtmlParser_Parse},
    {sipName_PopTagHandler, meth_wxHtmlParser_PopTagHandler, METH_VARARGS, doc_wxHtmlParser_PopTagHandler},
    {sipName_PushTagHandler, SIP_MLMETH_CAST(meth_wxHtmlParser_PushTagHandler), METH_VARARGS|METH_KEYWORDS, doc_wxHtmlParser_PushTagHandler},
    {sipName_SetFS, SIP_MLMETH_CAST(meth_wxHtmlParser_SetFS), METH_VARARGS|METH_KEYWORDS, doc_wxHtmlParser_SetFS},
    {sipName_StopParsing, meth_wxHtmlParser_StopParsing, METH_VARARGS, doc_wxHtmlParser_StopParsing}
};

sipVariableDef variables_wxHtmlParser[] = {
    {PropertyVariable, sipName_Source, &methods_wxHtmlParser[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Product, &methods_wxHtmlParser[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FS, &methods_wxHtmlParser[3], &methods_wxHtmlParser[11], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHtmlParser, "HtmlParser()\n"
"\n"
"Classes derived from this handle the generic parsing of HTML\n"
"documents: it scans the document and divide it into blocks of tags\n"
"(where one block consists of beginning and ending tag and of text\n"
"between these two tags).");


sipClassTypeDef sipTypeDef__html_wxHtmlParser = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxHtmlParser,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_HtmlParser,
        {0, 0, 1},
        13, methods_wxHtmlParser,
        0, SIP_NULLPTR,
        3, variables_wxHtmlParser,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHtmlParser,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxHtmlParser,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxHtmlParser,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
