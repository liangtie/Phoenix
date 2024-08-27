/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/dataobj.h>
        #include <wx/dataobj.h>
        #include <wx/dataobj.h>
    PyObject* _wxTextDataObject_GetAllFormats(const wxTextDataObject* self, wxDataObject::Direction dir)
    {
        size_t count = self->GetFormatCount(dir);
        wxDataFormat* formats = new wxDataFormat[count];
        self->GetAllFormats(formats, dir);
        wxPyThreadBlocker blocker;
        PyObject* list = PyList_New(count);
        for (size_t i=0; i<count; i++) {
            wxDataFormat* format = new wxDataFormat(formats[i]);
            PyObject* obj = wxPyConstructObject((void*)format, wxT("wxDataFormat"), true);
            PyList_SET_ITEM(list, i, obj); // PyList_SET_ITEM steals a reference
        }
        delete [] formats;
        return list;
    }
    bool _wxTextDataObject_SetData(wxTextDataObject* self, const wxDataFormat* format, wxPyBuffer* buf)
    {
        return self->SetData(*format, buf->m_len, buf->m_ptr);
    }


class sipwxTextDataObject : public  ::wxTextDataObject
{
public:
    sipwxTextDataObject(const  ::wxString&);
    virtual ~sipwxTextDataObject();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void SetText(const  ::wxString&) SIP_OVERRIDE;
    size_t GetTextLength() const SIP_OVERRIDE;
     ::wxString GetText() const SIP_OVERRIDE;
    bool SetData(const  ::wxDataFormat&,size_t,const void*) SIP_OVERRIDE;
     ::wxDataFormat GetPreferredFormat( ::wxDataObject::Direction) const SIP_OVERRIDE;
    size_t GetFormatCount( ::wxDataObject::Direction) const SIP_OVERRIDE;
    void GetAllFormats( ::wxDataFormat*, ::wxDataObject::Direction) const SIP_OVERRIDE;
    bool GetDataHere(void*) const SIP_OVERRIDE;
    size_t GetDataSize() const SIP_OVERRIDE;
    bool SetData(size_t,const void*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxTextDataObject(const sipwxTextDataObject &);
    sipwxTextDataObject &operator = (const sipwxTextDataObject &);

    char sipPyMethods[10];
};

sipwxTextDataObject::sipwxTextDataObject(const  ::wxString& text):  ::wxTextDataObject(text), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxTextDataObject::~sipwxTextDataObject()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxTextDataObject::SetText(const  ::wxString& strText)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_SetText);

    if (!sipMeth)
    {
         ::wxTextDataObject::SetText(strText);
        return;
    }

    extern void sipVH__core_60(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__core_60(sipGILState, 0, sipPySelf, sipMeth, strText);
}

size_t sipwxTextDataObject::GetTextLength() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetTextLength);

    if (!sipMeth)
        return  ::wxTextDataObject::GetTextLength();

    extern size_t sipVH__core_74(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_74(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxString sipwxTextDataObject::GetText() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetText);

    if (!sipMeth)
        return  ::wxTextDataObject::GetText();

    extern  ::wxString sipVH__core_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_11(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxTextDataObject::SetData(const  ::wxDataFormat& format,size_t len,const void*buf)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_SetData);

    if (!sipMeth)
        return  ::wxTextDataObject::SetData(format,len,buf);

    extern bool sipVH__core_82(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataFormat&,size_t,const void*);

    return sipVH__core_82(sipGILState, 0, sipPySelf, sipMeth, format, len, buf);
}

 ::wxDataFormat sipwxTextDataObject::GetPreferredFormat( ::wxDataObject::Direction dir) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[4]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetPreferredFormat);

    if (!sipMeth)
        return  ::wxTextDataObject::GetPreferredFormat(dir);

    extern  ::wxDataFormat sipVH__core_69(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDataObject::Direction);

    return sipVH__core_69(sipGILState, 0, sipPySelf, sipMeth, dir);
}

size_t sipwxTextDataObject::GetFormatCount( ::wxDataObject::Direction dir) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[5]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetFormatCount);

    if (!sipMeth)
        return  ::wxTextDataObject::GetFormatCount(dir);

    extern size_t sipVH__core_68(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDataObject::Direction);

    return sipVH__core_68(sipGILState, 0, sipPySelf, sipMeth, dir);
}

void sipwxTextDataObject::GetAllFormats( ::wxDataFormat*formats, ::wxDataObject::Direction dir) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[6]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetAllFormats);

    if (!sipMeth)
    {
         ::wxTextDataObject::GetAllFormats(formats,dir);
        return;
    }

    extern void sipVH__core_65(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDataFormat*, ::wxDataObject::Direction);

    sipVH__core_65(sipGILState, 0, sipPySelf, sipMeth, formats, dir);
}

bool sipwxTextDataObject::GetDataHere(void*buf) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[7]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetDataHere);

    if (!sipMeth)
        return  ::wxTextDataObject::GetDataHere(buf);

    extern bool sipVH__core_77(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, void*);

    return sipVH__core_77(sipGILState, 0, sipPySelf, sipMeth, buf);
}

size_t sipwxTextDataObject::GetDataSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[8]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetDataSize);

    if (!sipMeth)
        return  ::wxTextDataObject::GetDataSize();

    extern size_t sipVH__core_74(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_74(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxTextDataObject::SetData(size_t len,const void*buf)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[9], &sipPySelf, SIP_NULLPTR, sipName_SetData);

    if (!sipMeth)
        return  ::wxTextDataObject::SetData(len,buf);

    extern bool sipVH__core_76(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, size_t,const void*);

    return sipVH__core_76(sipGILState, 0, sipPySelf, sipMeth, len, buf);
}


PyDoc_STRVAR(doc_wxTextDataObject_GetText, "GetText() -> String\n"
"\n"
"Returns the text associated with the data object.");

extern "C" {static PyObject *meth_wxTextDataObject_GetText(PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_GetText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxTextDataObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextDataObject, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxTextDataObject::GetText() : sipCpp->GetText()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_GetText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDataObject_GetTextLength, "GetTextLength() -> size_t\n"
"\n"
"Returns the data size.");

extern "C" {static PyObject *meth_wxTextDataObject_GetTextLength(PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_GetTextLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxTextDataObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextDataObject, &sipCpp))
        {
            size_t sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTextDataObject::GetTextLength() : sipCpp->GetTextLength());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_GetTextLength, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDataObject_GetFormatCount, "GetFormatCount(dir=DataObject.Get) -> size_t\n"
"\n"
"Returns 2 under wxMac and wxGTK, where text data coming from the\n"
"clipboard may be provided as ANSI (wxDF_TEXT) or as Unicode text\n"
"(wxDF_UNICODETEXT, but only when wxUSE_UNICODE==1).");

extern "C" {static PyObject *meth_wxTextDataObject_GetFormatCount(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_GetFormatCount(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDataObject::Direction dir = wxDataObject::Get;
        const  ::wxTextDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_wxTextDataObject, &sipCpp, sipType_wxDataObject_Direction, &dir))
        {
            size_t sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTextDataObject::GetFormatCount(dir) : sipCpp->GetFormatCount(dir));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_GetFormatCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDataObject_GetFormat, "GetFormat() -> DataFormat\n"
"\n"
"Returns the preferred format supported by this object.");

extern "C" {static PyObject *meth_wxTextDataObject_GetFormat(PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_GetFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextDataObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextDataObject, &sipCpp))
        {
             ::wxDataFormat*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxDataFormat(sipCpp->GetFormat());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxDataFormat,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_GetFormat, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDataObject_GetAllFormats, "GetAllFormats(dir=DataObject.Get)\n"
"\n"
"Returns a list of wx.DataFormat objects which this data object\n"
"supports transferring in the given direction.");

extern "C" {static PyObject *meth_wxTextDataObject_GetAllFormats(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_GetAllFormats(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDataObject::Direction dir = wxDataObject::Get;
        const  ::wxTextDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_wxTextDataObject, &sipCpp, sipType_wxDataObject_Direction, &dir))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTextDataObject_GetAllFormats(sipCpp, dir);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_GetAllFormats, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDataObject_SetText, "SetText(strText)\n"
"\n"
"Sets the text associated with the data object.");

extern "C" {static PyObject *meth_wxTextDataObject_SetText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_SetText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* strText;
        int strTextState = 0;
         ::wxTextDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_strText,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxTextDataObject, &sipCpp, sipType_wxString, &strText, &strTextState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxTextDataObject::SetText(*strText) : sipCpp->SetText(*strText));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(strText), sipType_wxString, strTextState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_SetText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDataObject_SetData, "SetData(format, buf) -> bool\n"
"");

extern "C" {static PyObject *meth_wxTextDataObject_SetData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_SetData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxDataFormat* format;
         ::wxPyBuffer* buf;
        int bufState = 0;
         ::wxTextDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
            sipName_buf,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J0", &sipSelf, sipType_wxTextDataObject, &sipCpp, sipType_wxDataFormat, &format, sipType_wxPyBuffer, &buf, &bufState))
        {
            bool sipRes = 0;
            int sipIsErr = 0;
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTextDataObject_SetData(sipCpp, format, buf);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(buf, sipType_wxPyBuffer, bufState);

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
        size_t len;
        const void* buf;
         ::wxTextDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_len,
            sipName_buf,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=v", &sipSelf, sipType_wxTextDataObject, &sipCpp, &len, &buf))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTextDataObject::SetData(len,buf) : sipCpp->SetData(len,buf));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_SetData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDataObject_GetPreferredFormat, "GetPreferredFormat(self, dir: DataObject.Direction = wxDataObject.Get) -> DataFormat");

extern "C" {static PyObject *meth_wxTextDataObject_GetPreferredFormat(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_GetPreferredFormat(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDataObject::Direction dir =  ::wxDataObject::Get;
        const  ::wxTextDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_wxTextDataObject, &sipCpp, sipType_wxDataObject_Direction, &dir))
        {
             ::wxDataFormat*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxDataFormat((sipSelfWasArg ? sipCpp-> ::wxTextDataObject::GetPreferredFormat(dir) : sipCpp->GetPreferredFormat(dir)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxDataFormat,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_GetPreferredFormat, doc_wxTextDataObject_GetPreferredFormat);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDataObject_GetDataSize, "GetDataSize(self) -> int");

extern "C" {static PyObject *meth_wxTextDataObject_GetDataSize(PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_GetDataSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxTextDataObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextDataObject, &sipCpp))
        {
            size_t sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTextDataObject::GetDataSize() : sipCpp->GetDataSize());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_GetDataSize, doc_wxTextDataObject_GetDataSize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDataObject_GetDataHere, "GetDataHere(self, buf: wx.siplib.voidptr) -> bool");

extern "C" {static PyObject *meth_wxTextDataObject_GetDataHere(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextDataObject_GetDataHere(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        void* buf;
        const  ::wxTextDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_buf,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bv", &sipSelf, sipType_wxTextDataObject, &sipCpp, &buf))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTextDataObject::GetDataHere(buf) : sipCpp->GetDataHere(buf));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_TextDataObject, sipName_GetDataHere, doc_wxTextDataObject_GetDataHere);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxTextDataObject(void *, const sipTypeDef *);}
static void *cast_wxTextDataObject(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxTextDataObject *sipCpp = reinterpret_cast< ::wxTextDataObject *>(sipCppV);

    if (targetType == sipType_wxTextDataObject)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxDataObjectSimple)->ctd_cast(static_cast< ::wxDataObjectSimple *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTextDataObject(void *, int);}
static void release_wxTextDataObject(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxTextDataObject *>(sipCppV);
    else
        delete reinterpret_cast< ::wxTextDataObject *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxTextDataObject(Py_ssize_t);}
static void *array_wxTextDataObject(Py_ssize_t sipNrElem)
{
    return new  ::wxTextDataObject[sipNrElem];
}


extern "C" {static void dealloc_wxTextDataObject(sipSimpleWrapper *);}
static void dealloc_wxTextDataObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxTextDataObject *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTextDataObject(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxTextDataObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTextDataObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxTextDataObject *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString& textdef = wxEmptyString;
        const  ::wxString* text = &textdef;
        int textState = 0;

        static const char *sipKwdList[] = {
            sipName_text,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_wxString, &text, &textState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxTextDataObject(*text);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text), sipType_wxString, textState);

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
static sipEncodedTypeDef supers_wxTextDataObject[] = {{117, 255, 1}};


static PyMethodDef methods_wxTextDataObject[] = {
    {sipName_GetAllFormats, SIP_MLMETH_CAST(meth_wxTextDataObject_GetAllFormats), METH_VARARGS|METH_KEYWORDS, doc_wxTextDataObject_GetAllFormats},
    {sipName_GetDataHere, SIP_MLMETH_CAST(meth_wxTextDataObject_GetDataHere), METH_VARARGS|METH_KEYWORDS, doc_wxTextDataObject_GetDataHere},
    {sipName_GetDataSize, meth_wxTextDataObject_GetDataSize, METH_VARARGS, doc_wxTextDataObject_GetDataSize},
    {sipName_GetFormat, meth_wxTextDataObject_GetFormat, METH_VARARGS, doc_wxTextDataObject_GetFormat},
    {sipName_GetFormatCount, SIP_MLMETH_CAST(meth_wxTextDataObject_GetFormatCount), METH_VARARGS|METH_KEYWORDS, doc_wxTextDataObject_GetFormatCount},
    {sipName_GetPreferredFormat, SIP_MLMETH_CAST(meth_wxTextDataObject_GetPreferredFormat), METH_VARARGS|METH_KEYWORDS, doc_wxTextDataObject_GetPreferredFormat},
    {sipName_GetText, meth_wxTextDataObject_GetText, METH_VARARGS, doc_wxTextDataObject_GetText},
    {sipName_GetTextLength, meth_wxTextDataObject_GetTextLength, METH_VARARGS, doc_wxTextDataObject_GetTextLength},
    {sipName_SetData, SIP_MLMETH_CAST(meth_wxTextDataObject_SetData), METH_VARARGS|METH_KEYWORDS, doc_wxTextDataObject_SetData},
    {sipName_SetText, SIP_MLMETH_CAST(meth_wxTextDataObject_SetText), METH_VARARGS|METH_KEYWORDS, doc_wxTextDataObject_SetText}
};

sipVariableDef variables_wxTextDataObject[] = {
    {PropertyVariable, sipName_TextLength, &methods_wxTextDataObject[7], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Text, &methods_wxTextDataObject[6], &methods_wxTextDataObject[9], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FormatCount, &methods_wxTextDataObject[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Format, &methods_wxTextDataObject[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_AllFormats, &methods_wxTextDataObject[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxTextDataObject, "TextDataObject(text=EmptyString)\n"
"\n"
"wxTextDataObject is a specialization of wxDataObjectSimple for text\n"
"data.");


sipClassTypeDef sipTypeDef__core_wxTextDataObject = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxTextDataObject,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_TextDataObject,
        {0, 0, 1},
        10, methods_wxTextDataObject,
        0, SIP_NULLPTR,
        5, variables_wxTextDataObject,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTextDataObject,
    -1,
    -1,
    supers_wxTextDataObject,
    SIP_NULLPTR,
    init_type_wxTextDataObject,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxTextDataObject,
    SIP_NULLPTR,
    array_wxTextDataObject,
    SIP_NULLPTR,
    release_wxTextDataObject,
    cast_wxTextDataObject,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
