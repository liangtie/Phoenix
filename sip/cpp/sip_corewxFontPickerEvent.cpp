/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/fontpicker.h>
        #include <wx/object.h>
        #include <wx/font.h>
        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxFontPickerEvent : public  ::wxFontPickerEvent
{
public:
    sipwxFontPickerEvent( ::wxObject*,int,const  ::wxFont&);
    sipwxFontPickerEvent(const  ::wxFontPickerEvent&);
    virtual ~sipwxFontPickerEvent();

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
    sipwxFontPickerEvent(const sipwxFontPickerEvent &);
    sipwxFontPickerEvent &operator = (const sipwxFontPickerEvent &);

    char sipPyMethods[2];
};

sipwxFontPickerEvent::sipwxFontPickerEvent( ::wxObject*generator,int id,const  ::wxFont& font):  ::wxFontPickerEvent(generator,id,font), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxFontPickerEvent::sipwxFontPickerEvent(const  ::wxFontPickerEvent& a0):  ::wxFontPickerEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxFontPickerEvent::~sipwxFontPickerEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEventCategory sipwxFontPickerEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxFontPickerEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_104(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_104(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxFontPickerEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::wxFontPickerEvent::Clone();

    extern  ::wxEvent* sipVH__core_103(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_103(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxFontPickerEvent_GetFont, "GetFont() -> Font\n"
"\n"
"Retrieve the font the user has just selected.");

extern "C" {static PyObject *meth_wxFontPickerEvent_GetFont(PyObject *, PyObject *);}
static PyObject *meth_wxFontPickerEvent_GetFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFontPickerEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFontPickerEvent, &sipCpp))
        {
             ::wxFont*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxFont(sipCpp->GetFont());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxFont,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FontPickerEvent, sipName_GetFont, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFontPickerEvent_SetFont, "SetFont(f)\n"
"\n"
"Set the font associated with the event.");

extern "C" {static PyObject *meth_wxFontPickerEvent_SetFont(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFontPickerEvent_SetFont(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFont* f;
         ::wxFontPickerEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_f,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxFontPickerEvent, &sipCpp, sipType_wxFont, &f))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFont(*f);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FontPickerEvent, sipName_SetFont, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFontPickerEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxFontPickerEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxFontPickerEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxFontPickerEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFontPickerEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxFontPickerEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FontPickerEvent, sipName_Clone, doc_wxFontPickerEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxFontPickerEvent(void *, const sipTypeDef *);}
static void *cast_wxFontPickerEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxFontPickerEvent *sipCpp = reinterpret_cast< ::wxFontPickerEvent *>(sipCppV);

    if (targetType == sipType_wxFontPickerEvent)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxCommandEvent)->ctd_cast(static_cast< ::wxCommandEvent *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxFontPickerEvent(void *, int);}
static void release_wxFontPickerEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxFontPickerEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxFontPickerEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxFontPickerEvent(sipSimpleWrapper *);}
static void dealloc_wxFontPickerEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxFontPickerEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxFontPickerEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxFontPickerEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxFontPickerEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxFontPickerEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxObject* generator;
        int id;
        const  ::wxFont* font;

        static const char *sipKwdList[] = {
            sipName_generator,
            sipName_id,
            sipName_font,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8iJ9", sipType_wxObject, &generator, &id, sipType_wxFont, &font))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxFontPickerEvent(generator,id,*font);
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
        const  ::wxFontPickerEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxFontPickerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxFontPickerEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxFontPickerEvent[] = {{84, 255, 1}};


static PyMethodDef methods_wxFontPickerEvent[] = {
    {sipName_Clone, meth_wxFontPickerEvent_Clone, METH_VARARGS, doc_wxFontPickerEvent_Clone},
    {sipName_GetFont, meth_wxFontPickerEvent_GetFont, METH_VARARGS, doc_wxFontPickerEvent_GetFont},
    {sipName_SetFont, SIP_MLMETH_CAST(meth_wxFontPickerEvent_SetFont), METH_VARARGS|METH_KEYWORDS, doc_wxFontPickerEvent_SetFont}
};

sipVariableDef variables_wxFontPickerEvent[] = {
    {PropertyVariable, sipName_Font, &methods_wxFontPickerEvent[1], &methods_wxFontPickerEvent[2], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxFontPickerEvent, "FontPickerEvent(generator, id, font)\n"
"\n"
"This event class is used for the events generated by wxFontPickerCtrl.");


sipClassTypeDef sipTypeDef__core_wxFontPickerEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxFontPickerEvent,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FontPickerEvent,
        {0, 0, 1},
        3, methods_wxFontPickerEvent,
        0, SIP_NULLPTR,
        1, variables_wxFontPickerEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxFontPickerEvent,
    -1,
    -1,
    supers_wxFontPickerEvent,
    SIP_NULLPTR,
    init_type_wxFontPickerEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxFontPickerEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxFontPickerEvent,
    cast_wxFontPickerEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
