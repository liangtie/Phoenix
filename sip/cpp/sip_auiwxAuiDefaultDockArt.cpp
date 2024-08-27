/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_aui.h"
        #include <wx/aui/dockart.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/aui/framemanager.h>
        #include <wx/window.h>
        #include <wx/font.h>
        #include <wx/colour.h>
        #include <wx/aui/dockart.h>


class sipwxAuiDefaultDockArt : public  ::wxAuiDefaultDockArt
{
public:
    sipwxAuiDefaultDockArt();
    sipwxAuiDefaultDockArt(const  ::wxAuiDefaultDockArt&);
    virtual ~sipwxAuiDefaultDockArt();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxAuiDockArt* Clone() SIP_OVERRIDE;
    void DrawBackground( ::wxDC&, ::wxWindow*,int,const  ::wxRect&) SIP_OVERRIDE;
    void DrawBorder( ::wxDC&, ::wxWindow*,const  ::wxRect&, ::wxAuiPaneInfo&) SIP_OVERRIDE;
    void DrawCaption( ::wxDC&, ::wxWindow*,const  ::wxString&,const  ::wxRect&, ::wxAuiPaneInfo&) SIP_OVERRIDE;
    void DrawGripper( ::wxDC&, ::wxWindow*,const  ::wxRect&, ::wxAuiPaneInfo&) SIP_OVERRIDE;
    void DrawPaneButton( ::wxDC&, ::wxWindow*,int,int,const  ::wxRect&, ::wxAuiPaneInfo&) SIP_OVERRIDE;
    void DrawSash( ::wxDC&, ::wxWindow*,int,const  ::wxRect&) SIP_OVERRIDE;
     ::wxColour GetColour(int) SIP_OVERRIDE;
     ::wxFont GetFont(int) SIP_OVERRIDE;
    int GetMetric(int) SIP_OVERRIDE;
    void SetColour(int,const  ::wxColour&) SIP_OVERRIDE;
    void SetFont(int,const  ::wxFont&) SIP_OVERRIDE;
    void SetMetric(int,int) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxAuiDefaultDockArt(const sipwxAuiDefaultDockArt &);
    sipwxAuiDefaultDockArt &operator = (const sipwxAuiDefaultDockArt &);

    char sipPyMethods[13];
};

sipwxAuiDefaultDockArt::sipwxAuiDefaultDockArt():  ::wxAuiDefaultDockArt(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxAuiDefaultDockArt::sipwxAuiDefaultDockArt(const  ::wxAuiDefaultDockArt& a0):  ::wxAuiDefaultDockArt(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxAuiDefaultDockArt::~sipwxAuiDefaultDockArt()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxAuiDockArt* sipwxAuiDefaultDockArt::Clone()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::wxAuiDefaultDockArt::Clone();

    extern  ::wxAuiDockArt* sipVH__aui_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__aui_27(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxAuiDefaultDockArt::DrawBackground( ::wxDC& dc, ::wxWindow*window,int orientation,const  ::wxRect& rect)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_DrawBackground);

    if (!sipMeth)
    {
         ::wxAuiDefaultDockArt::DrawBackground(dc,window,orientation,rect);
        return;
    }

    extern void sipVH__aui_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&, ::wxWindow*,int,const  ::wxRect&);

    sipVH__aui_28(sipGILState, 0, sipPySelf, sipMeth, dc, window, orientation, rect);
}

void sipwxAuiDefaultDockArt::DrawBorder( ::wxDC& dc, ::wxWindow*window,const  ::wxRect& rect, ::wxAuiPaneInfo& pane)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_DrawBorder);

    if (!sipMeth)
    {
         ::wxAuiDefaultDockArt::DrawBorder(dc,window,rect,pane);
        return;
    }

    extern void sipVH__aui_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&, ::wxWindow*,const  ::wxRect&, ::wxAuiPaneInfo&);

    sipVH__aui_29(sipGILState, 0, sipPySelf, sipMeth, dc, window, rect, pane);
}

void sipwxAuiDefaultDockArt::DrawCaption( ::wxDC& dc, ::wxWindow*window,const  ::wxString& text,const  ::wxRect& rect, ::wxAuiPaneInfo& pane)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_DrawCaption);

    if (!sipMeth)
    {
         ::wxAuiDefaultDockArt::DrawCaption(dc,window,text,rect,pane);
        return;
    }

    extern void sipVH__aui_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&, ::wxWindow*,const  ::wxString&,const  ::wxRect&, ::wxAuiPaneInfo&);

    sipVH__aui_30(sipGILState, 0, sipPySelf, sipMeth, dc, window, text, rect, pane);
}

void sipwxAuiDefaultDockArt::DrawGripper( ::wxDC& dc, ::wxWindow*window,const  ::wxRect& rect, ::wxAuiPaneInfo& pane)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[4], &sipPySelf, SIP_NULLPTR, sipName_DrawGripper);

    if (!sipMeth)
    {
         ::wxAuiDefaultDockArt::DrawGripper(dc,window,rect,pane);
        return;
    }

    extern void sipVH__aui_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&, ::wxWindow*,const  ::wxRect&, ::wxAuiPaneInfo&);

    sipVH__aui_29(sipGILState, 0, sipPySelf, sipMeth, dc, window, rect, pane);
}

void sipwxAuiDefaultDockArt::DrawPaneButton( ::wxDC& dc, ::wxWindow*window,int button,int button_state,const  ::wxRect& rect, ::wxAuiPaneInfo& pane)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[5], &sipPySelf, SIP_NULLPTR, sipName_DrawPaneButton);

    if (!sipMeth)
    {
         ::wxAuiDefaultDockArt::DrawPaneButton(dc,window,button,button_state,rect,pane);
        return;
    }

    extern void sipVH__aui_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&, ::wxWindow*,int,int,const  ::wxRect&, ::wxAuiPaneInfo&);

    sipVH__aui_31(sipGILState, 0, sipPySelf, sipMeth, dc, window, button, button_state, rect, pane);
}

void sipwxAuiDefaultDockArt::DrawSash( ::wxDC& dc, ::wxWindow*window,int orientation,const  ::wxRect& rect)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[6], &sipPySelf, SIP_NULLPTR, sipName_DrawSash);

    if (!sipMeth)
    {
         ::wxAuiDefaultDockArt::DrawSash(dc,window,orientation,rect);
        return;
    }

    extern void sipVH__aui_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&, ::wxWindow*,int,const  ::wxRect&);

    sipVH__aui_28(sipGILState, 0, sipPySelf, sipMeth, dc, window, orientation, rect);
}

 ::wxColour sipwxAuiDefaultDockArt::GetColour(int id)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[7], &sipPySelf, SIP_NULLPTR, sipName_GetColour);

    if (!sipMeth)
        return  ::wxAuiDefaultDockArt::GetColour(id);

    extern  ::wxColour sipVH__aui_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__aui_32(sipGILState, 0, sipPySelf, sipMeth, id);
}

 ::wxFont sipwxAuiDefaultDockArt::GetFont(int id)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[8], &sipPySelf, SIP_NULLPTR, sipName_GetFont);

    if (!sipMeth)
        return  ::wxAuiDefaultDockArt::GetFont(id);

    extern  ::wxFont sipVH__aui_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__aui_33(sipGILState, 0, sipPySelf, sipMeth, id);
}

int sipwxAuiDefaultDockArt::GetMetric(int id)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[9], &sipPySelf, SIP_NULLPTR, sipName_GetMetric);

    if (!sipMeth)
        return  ::wxAuiDefaultDockArt::GetMetric(id);

    extern int sipVH__aui_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__aui_34(sipGILState, 0, sipPySelf, sipMeth, id);
}

void sipwxAuiDefaultDockArt::SetColour(int id,const  ::wxColour& colour)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[10], &sipPySelf, SIP_NULLPTR, sipName_SetColour);

    if (!sipMeth)
    {
         ::wxAuiDefaultDockArt::SetColour(id,colour);
        return;
    }

    extern void sipVH__aui_35(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const  ::wxColour&);

    sipVH__aui_35(sipGILState, 0, sipPySelf, sipMeth, id, colour);
}

void sipwxAuiDefaultDockArt::SetFont(int id,const  ::wxFont& font)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[11], &sipPySelf, SIP_NULLPTR, sipName_SetFont);

    if (!sipMeth)
    {
         ::wxAuiDefaultDockArt::SetFont(id,font);
        return;
    }

    extern void sipVH__aui_36(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const  ::wxFont&);

    sipVH__aui_36(sipGILState, 0, sipPySelf, sipMeth, id, font);
}

void sipwxAuiDefaultDockArt::SetMetric(int id,int new_val)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[12], &sipPySelf, SIP_NULLPTR, sipName_SetMetric);

    if (!sipMeth)
    {
         ::wxAuiDefaultDockArt::SetMetric(id,new_val);
        return;
    }

    extern void sipVH__aui_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,int);

    sipVH__aui_21(sipGILState, 0, sipPySelf, sipMeth, id, new_val);
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_Clone, "Clone() -> AuiDockArt\n"
"\n"
"Create a copy of this wxAuiDockArt instance.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxAuiDefaultDockArt *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp))
        {
             ::wxAuiDockArt*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxAuiDockArt,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_Clone, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_GetMetric, "GetMetric(id) -> int\n"
"\n"
"Get the value of a certain setting.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_GetMetric(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_GetMetric(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int id;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_id,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, &id))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::GetMetric(id) : sipCpp->GetMetric(id));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_GetMetric, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_SetMetric, "SetMetric(id, new_val)\n"
"\n"
"Set a certain setting with the value new_val.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_SetMetric(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_SetMetric(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int id;
        int new_val;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_id,
            sipName_new_val,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bii", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, &id, &new_val))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::SetMetric(id,new_val) : sipCpp->SetMetric(id,new_val));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_SetMetric, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_GetColour, "GetColour(id) -> wx.Colour\n"
"\n"
"Get the colour of a certain setting.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_GetColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_GetColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int id;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_id,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, &id))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour((sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::GetColour(id) : sipCpp->GetColour(id)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_GetColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_SetColour, "SetColour(id, colour)\n"
"\n"
"Set a certain setting with the value colour.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_SetColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_SetColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int id;
        const  ::wxColour* colour;
        int colourState = 0;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_id,
            sipName_colour,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiJ1", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, &id, sipType_wxColour, &colour, &colourState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::SetColour(id,*colour) : sipCpp->SetColour(id,*colour));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colour), sipType_wxColour, colourState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_SetColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_SetFont, "SetFont(id, font)\n"
"\n"
"Set a font setting.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_SetFont(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_SetFont(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int id;
        const  ::wxFont* font;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_id,
            sipName_font,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiJ9", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, &id, sipType_wxFont, &font))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::SetFont(id,*font) : sipCpp->SetFont(id,*font));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_SetFont, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_GetFont, "GetFont(id) -> wx.Font\n"
"\n"
"Get a font setting.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_GetFont(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_GetFont(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int id;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_id,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, &id))
        {
             ::wxFont*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxFont((sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::GetFont(id) : sipCpp->GetFont(id)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxFont,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_GetFont, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_DrawSash, "DrawSash(dc, window, orientation, rect)\n"
"\n"
"Draws a sash between two windows.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_DrawSash(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_DrawSash(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
         ::wxWindow* window;
        int orientation;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_window,
            sipName_orientation,
            sipName_rect,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J8iJ1", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, sipType_wxDC, &dc, sipType_wxWindow, &window, &orientation, sipType_wxRect, &rect, &rectState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::DrawSash(*dc,window,orientation,*rect) : sipCpp->DrawSash(*dc,window,orientation,*rect));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect), sipType_wxRect, rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_DrawSash, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_DrawBackground, "DrawBackground(dc, window, orientation, rect)\n"
"\n"
"Draws a background.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_DrawBackground(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_DrawBackground(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
         ::wxWindow* window;
        int orientation;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_window,
            sipName_orientation,
            sipName_rect,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J8iJ1", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, sipType_wxDC, &dc, sipType_wxWindow, &window, &orientation, sipType_wxRect, &rect, &rectState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::DrawBackground(*dc,window,orientation,*rect) : sipCpp->DrawBackground(*dc,window,orientation,*rect));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect), sipType_wxRect, rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_DrawBackground, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_DrawCaption, "DrawCaption(dc, window, text, rect, pane)\n"
"\n"
"Draws a caption.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_DrawCaption(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_DrawCaption(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
         ::wxWindow* window;
        const  ::wxString* text;
        int textState = 0;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxAuiPaneInfo* pane;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_window,
            sipName_text,
            sipName_rect,
            sipName_pane,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J8J1J1J9", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, sipType_wxDC, &dc, sipType_wxWindow, &window, sipType_wxString, &text, &textState, sipType_wxRect, &rect, &rectState, sipType_wxAuiPaneInfo, &pane))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::DrawCaption(*dc,window,*text,*rect,*pane) : sipCpp->DrawCaption(*dc,window,*text,*rect,*pane));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text), sipType_wxString, textState);
            sipReleaseType(const_cast< ::wxRect *>(rect), sipType_wxRect, rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_DrawCaption, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_DrawGripper, "DrawGripper(dc, window, rect, pane)\n"
"\n"
"Draws a gripper.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_DrawGripper(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_DrawGripper(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
         ::wxWindow* window;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxAuiPaneInfo* pane;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_window,
            sipName_rect,
            sipName_pane,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J8J1J9", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, sipType_wxDC, &dc, sipType_wxWindow, &window, sipType_wxRect, &rect, &rectState, sipType_wxAuiPaneInfo, &pane))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::DrawGripper(*dc,window,*rect,*pane) : sipCpp->DrawGripper(*dc,window,*rect,*pane));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect), sipType_wxRect, rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_DrawGripper, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_DrawBorder, "DrawBorder(dc, window, rect, pane)\n"
"\n"
"Draws a border.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_DrawBorder(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_DrawBorder(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
         ::wxWindow* window;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxAuiPaneInfo* pane;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_window,
            sipName_rect,
            sipName_pane,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J8J1J9", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, sipType_wxDC, &dc, sipType_wxWindow, &window, sipType_wxRect, &rect, &rectState, sipType_wxAuiPaneInfo, &pane))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::DrawBorder(*dc,window,*rect,*pane) : sipCpp->DrawBorder(*dc,window,*rect,*pane));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect), sipType_wxRect, rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_DrawBorder, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_DrawPaneButton, "DrawPaneButton(dc, window, button, button_state, rect, pane)\n"
"\n"
"Draws a button in the pane's title bar.");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_DrawPaneButton(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_DrawPaneButton(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
         ::wxWindow* window;
        int button;
        int button_state;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxAuiPaneInfo* pane;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_window,
            sipName_button,
            sipName_button_state,
            sipName_rect,
            sipName_pane,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J8iiJ1J9", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, sipType_wxDC, &dc, sipType_wxWindow, &window, &button, &button_state, sipType_wxRect, &rect, &rectState, sipType_wxAuiPaneInfo, &pane))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxAuiDefaultDockArt::DrawPaneButton(*dc,window,button,button_state,*rect,*pane) : sipCpp->DrawPaneButton(*dc,window,button,button_state,*rect,*pane));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect), sipType_wxRect, rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_DrawPaneButton, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDefaultDockArt_DrawIcon, "DrawIcon(dc, rect, pane)");

extern "C" {static PyObject *meth_wxAuiDefaultDockArt_DrawIcon(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDefaultDockArt_DrawIcon(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxAuiPaneInfo* pane;
         ::wxAuiDefaultDockArt *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_rect,
            sipName_pane,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J1J9", &sipSelf, sipType_wxAuiDefaultDockArt, &sipCpp, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, sipType_wxAuiPaneInfo, &pane))
        {
            if (sipDeprecated(sipName_AuiDefaultDockArt,sipName_DrawIcon) < 0)
                return SIP_NULLPTR;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->DrawIcon(*dc,*rect,*pane);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect), sipType_wxRect, rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_AuiDefaultDockArt, sipName_DrawIcon, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxAuiDefaultDockArt(void *, const sipTypeDef *);}
static void *cast_wxAuiDefaultDockArt(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxAuiDefaultDockArt *sipCpp = reinterpret_cast< ::wxAuiDefaultDockArt *>(sipCppV);

    if (targetType == sipType_wxAuiDefaultDockArt)
        return sipCppV;

    if (targetType == sipType_wxAuiDockArt)
        return static_cast< ::wxAuiDockArt *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxAuiDefaultDockArt(void *, int);}
static void release_wxAuiDefaultDockArt(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxAuiDefaultDockArt *>(sipCppV);
    else
        delete reinterpret_cast< ::wxAuiDefaultDockArt *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxAuiDefaultDockArt(Py_ssize_t);}
static void *array_wxAuiDefaultDockArt(Py_ssize_t sipNrElem)
{
    return new  ::wxAuiDefaultDockArt[sipNrElem];
}


extern "C" {static void assign_wxAuiDefaultDockArt(void *, Py_ssize_t, void *);}
static void assign_wxAuiDefaultDockArt(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxAuiDefaultDockArt *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxAuiDefaultDockArt *>(sipSrc);
}


extern "C" {static void *copy_wxAuiDefaultDockArt(const void *, Py_ssize_t);}
static void *copy_wxAuiDefaultDockArt(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxAuiDefaultDockArt(reinterpret_cast<const  ::wxAuiDefaultDockArt *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxAuiDefaultDockArt(sipSimpleWrapper *);}
static void dealloc_wxAuiDefaultDockArt(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxAuiDefaultDockArt *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAuiDefaultDockArt(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxAuiDefaultDockArt(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxAuiDefaultDockArt(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxAuiDefaultDockArt *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxAuiDefaultDockArt();
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
        const  ::wxAuiDefaultDockArt* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxAuiDefaultDockArt, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxAuiDefaultDockArt(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxAuiDefaultDockArt[] = {{4, 255, 1}};


static PyMethodDef methods_wxAuiDefaultDockArt[] = {
    {sipName_Clone, meth_wxAuiDefaultDockArt_Clone, METH_VARARGS, doc_wxAuiDefaultDockArt_Clone},
    {sipName_DrawBackground, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_DrawBackground), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_DrawBackground},
    {sipName_DrawBorder, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_DrawBorder), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_DrawBorder},
    {sipName_DrawCaption, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_DrawCaption), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_DrawCaption},
    {sipName_DrawGripper, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_DrawGripper), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_DrawGripper},
    {sipName_DrawIcon, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_DrawIcon), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_DrawIcon},
    {sipName_DrawPaneButton, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_DrawPaneButton), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_DrawPaneButton},
    {sipName_DrawSash, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_DrawSash), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_DrawSash},
    {sipName_GetColour, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_GetColour), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_GetColour},
    {sipName_GetFont, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_GetFont), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_GetFont},
    {sipName_GetMetric, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_GetMetric), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_GetMetric},
    {sipName_SetColour, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_SetColour), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_SetColour},
    {sipName_SetFont, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_SetFont), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_SetFont},
    {sipName_SetMetric, SIP_MLMETH_CAST(meth_wxAuiDefaultDockArt_SetMetric), METH_VARARGS|METH_KEYWORDS, doc_wxAuiDefaultDockArt_SetMetric}
};

PyDoc_STRVAR(doc_wxAuiDefaultDockArt, "AuiDefaultDockArt()\n"
"\n"
"This is the default art provider for wxAuiManager.");


sipClassTypeDef sipTypeDef__aui_wxAuiDefaultDockArt = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxAuiDefaultDockArt,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_AuiDefaultDockArt,
        {0, 0, 1},
        14, methods_wxAuiDefaultDockArt,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAuiDefaultDockArt,
    -1,
    -1,
    supers_wxAuiDefaultDockArt,
    SIP_NULLPTR,
    init_type_wxAuiDefaultDockArt,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxAuiDefaultDockArt,
    assign_wxAuiDefaultDockArt,
    array_wxAuiDefaultDockArt,
    copy_wxAuiDefaultDockArt,
    release_wxAuiDefaultDockArt,
    cast_wxAuiDefaultDockArt,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
