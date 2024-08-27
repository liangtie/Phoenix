/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html.h"
        #include <wx/html/htmlwin.h>
        #include <wx/html/htmlcell.h>
        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxHtmlLinkEvent : public  ::wxHtmlLinkEvent
{
public:
    sipwxHtmlLinkEvent(int,const  ::wxHtmlLinkInfo&);
    sipwxHtmlLinkEvent(const  ::wxHtmlLinkEvent&);
    virtual ~sipwxHtmlLinkEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxEventCategory GetEventCategory() const SIP_OVERRIDE;
     ::wxEvent* Clone() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxHtmlLinkEvent(const sipwxHtmlLinkEvent &);
    sipwxHtmlLinkEvent &operator = (const sipwxHtmlLinkEvent &);

    char sipPyMethods[2];
};

sipwxHtmlLinkEvent::sipwxHtmlLinkEvent(int id,const  ::wxHtmlLinkInfo& linkinfo):  ::wxHtmlLinkEvent(id,linkinfo), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxHtmlLinkEvent::sipwxHtmlLinkEvent(const  ::wxHtmlLinkEvent& a0):  ::wxHtmlLinkEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxHtmlLinkEvent::~sipwxHtmlLinkEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEventCategory sipwxHtmlLinkEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxHtmlLinkEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__html_55(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__html_55(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxHtmlLinkEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::wxHtmlLinkEvent::Clone();

    extern  ::wxEvent* sipVH__html_54(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__html_54(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxHtmlLinkEvent_GetLinkInfo, "GetLinkInfo() -> HtmlLinkInfo\n"
"\n"
"Returns the wxHtmlLinkInfo which contains info about the cell clicked\n"
"and the hyperlink it contains.");

extern "C" {static PyObject *meth_wxHtmlLinkEvent_GetLinkInfo(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlLinkEvent_GetLinkInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlLinkEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlLinkEvent, &sipCpp))
        {
             ::wxHtmlLinkInfo*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxHtmlLinkInfo(sipCpp->GetLinkInfo());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxHtmlLinkInfo,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlLinkEvent, sipName_GetLinkInfo, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlLinkEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxHtmlLinkEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlLinkEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxHtmlLinkEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlLinkEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxHtmlLinkEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_HtmlLinkEvent, sipName_Clone, doc_wxHtmlLinkEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxHtmlLinkEvent(void *, const sipTypeDef *);}
static void *cast_wxHtmlLinkEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxHtmlLinkEvent *sipCpp = reinterpret_cast< ::wxHtmlLinkEvent *>(sipCppV);

    if (targetType == sipType_wxHtmlLinkEvent)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxCommandEvent)->ctd_cast(static_cast< ::wxCommandEvent *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHtmlLinkEvent(void *, int);}
static void release_wxHtmlLinkEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxHtmlLinkEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxHtmlLinkEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxHtmlLinkEvent(sipSimpleWrapper *);}
static void dealloc_wxHtmlLinkEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxHtmlLinkEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHtmlLinkEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxHtmlLinkEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxHtmlLinkEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxHtmlLinkEvent *sipCpp = SIP_NULLPTR;

    {
        int id;
        const  ::wxHtmlLinkInfo* linkinfo;

        static const char *sipKwdList[] = {
            sipName_id,
            sipName_linkinfo,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iJ9", &id, sipType_wxHtmlLinkInfo, &linkinfo))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxHtmlLinkEvent(id,*linkinfo);
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
        const  ::wxHtmlLinkEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxHtmlLinkEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxHtmlLinkEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxHtmlLinkEvent[] = {{6, 0, 1}};


static PyMethodDef methods_wxHtmlLinkEvent[] = {
    {sipName_Clone, meth_wxHtmlLinkEvent_Clone, METH_VARARGS, doc_wxHtmlLinkEvent_Clone},
    {sipName_GetLinkInfo, meth_wxHtmlLinkEvent_GetLinkInfo, METH_VARARGS, doc_wxHtmlLinkEvent_GetLinkInfo}
};

sipVariableDef variables_wxHtmlLinkEvent[] = {
    {PropertyVariable, sipName_LinkInfo, &methods_wxHtmlLinkEvent[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHtmlLinkEvent, "HtmlLinkEvent(id, linkinfo)\n"
"\n"
"This event class is used for the events generated by wxHtmlWindow.");


sipClassTypeDef sipTypeDef__html_wxHtmlLinkEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxHtmlLinkEvent,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_HtmlLinkEvent,
        {0, 0, 1},
        2, methods_wxHtmlLinkEvent,
        0, SIP_NULLPTR,
        1, variables_wxHtmlLinkEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHtmlLinkEvent,
    -1,
    -1,
    supers_wxHtmlLinkEvent,
    SIP_NULLPTR,
    init_type_wxHtmlLinkEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxHtmlLinkEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxHtmlLinkEvent,
    cast_wxHtmlLinkEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
