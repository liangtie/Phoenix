/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/filehistory.h>
        #include <wx/menu.h>
        #include <wx/config.h>
        
        typedef wxList wxFileHistoryMenuList;
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxFileHistory : public  ::wxFileHistory
{
public:
    sipwxFileHistory(size_t, ::wxWindowID);
    virtual ~sipwxFileHistory();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void UseMenu( ::wxMenu*) SIP_OVERRIDE;
    void Save( ::wxConfigBase&) SIP_OVERRIDE;
    void RemoveMenu( ::wxMenu*) SIP_OVERRIDE;
    void RemoveFileFromHistory(size_t) SIP_OVERRIDE;
    void Load(const  ::wxConfigBase&) SIP_OVERRIDE;
    int GetMaxFiles() const SIP_OVERRIDE;
     ::wxString GetHistoryFile(size_t) const SIP_OVERRIDE;
    size_t GetCount() const SIP_OVERRIDE;
    void AddFilesToMenu( ::wxMenu*) SIP_OVERRIDE;
    void AddFilesToMenu() SIP_OVERRIDE;
    void AddFileToHistory(const  ::wxString&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxFileHistory(const sipwxFileHistory &);
    sipwxFileHistory &operator = (const sipwxFileHistory &);

    char sipPyMethods[11];
};

sipwxFileHistory::sipwxFileHistory(size_t maxFiles, ::wxWindowID idBase):  ::wxFileHistory(maxFiles,idBase), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxFileHistory::~sipwxFileHistory()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxFileHistory::UseMenu( ::wxMenu*menu)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_UseMenu);

    if (!sipMeth)
    {
         ::wxFileHistory::UseMenu(menu);
        return;
    }

    extern void sipVH__core_237(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxMenu*);

    sipVH__core_237(sipGILState, 0, sipPySelf, sipMeth, menu);
}

void sipwxFileHistory::Save( ::wxConfigBase& config)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_Save);

    if (!sipMeth)
    {
         ::wxFileHistory::Save(config);
        return;
    }

    extern void sipVH__core_239(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxConfigBase&);

    sipVH__core_239(sipGILState, 0, sipPySelf, sipMeth, config);
}

void sipwxFileHistory::RemoveMenu( ::wxMenu*menu)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_RemoveMenu);

    if (!sipMeth)
    {
         ::wxFileHistory::RemoveMenu(menu);
        return;
    }

    extern void sipVH__core_237(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxMenu*);

    sipVH__core_237(sipGILState, 0, sipPySelf, sipMeth, menu);
}

void sipwxFileHistory::RemoveFileFromHistory(size_t i)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_RemoveFileFromHistory);

    if (!sipMeth)
    {
         ::wxFileHistory::RemoveFileFromHistory(i);
        return;
    }

    extern void sipVH__core_146(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, size_t);

    sipVH__core_146(sipGILState, 0, sipPySelf, sipMeth, i);
}

void sipwxFileHistory::Load(const  ::wxConfigBase& config)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[4], &sipPySelf, SIP_NULLPTR, sipName_Load);

    if (!sipMeth)
    {
         ::wxFileHistory::Load(config);
        return;
    }

    extern void sipVH__core_238(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxConfigBase&);

    sipVH__core_238(sipGILState, 0, sipPySelf, sipMeth, config);
}

int sipwxFileHistory::GetMaxFiles() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[5]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetMaxFiles);

    if (!sipMeth)
        return  ::wxFileHistory::GetMaxFiles();

    extern int sipVH__core_111(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_111(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxString sipwxFileHistory::GetHistoryFile(size_t index) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[6]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetHistoryFile);

    if (!sipMeth)
        return  ::wxFileHistory::GetHistoryFile(index);

    extern  ::wxString sipVH__core_157(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, size_t);

    return sipVH__core_157(sipGILState, 0, sipPySelf, sipMeth, index);
}

size_t sipwxFileHistory::GetCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[7]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetCount);

    if (!sipMeth)
        return  ::wxFileHistory::GetCount();

    extern size_t sipVH__core_74(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_74(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxFileHistory::AddFilesToMenu( ::wxMenu*menu)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[8], &sipPySelf, SIP_NULLPTR, sipName_AddFilesToMenu);

    if (!sipMeth)
    {
         ::wxFileHistory::AddFilesToMenu(menu);
        return;
    }

    extern void sipVH__core_237(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxMenu*);

    sipVH__core_237(sipGILState, 0, sipPySelf, sipMeth, menu);
}

void sipwxFileHistory::AddFilesToMenu()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[9], &sipPySelf, SIP_NULLPTR, sipName_AddFilesToMenu);

    if (!sipMeth)
    {
         ::wxFileHistory::AddFilesToMenu();
        return;
    }

    extern void sipVH__core_57(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_57(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxFileHistory::AddFileToHistory(const  ::wxString& filename)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[10], &sipPySelf, SIP_NULLPTR, sipName_AddFileToHistory);

    if (!sipMeth)
    {
         ::wxFileHistory::AddFileToHistory(filename);
        return;
    }

    extern void sipVH__core_60(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__core_60(sipGILState, 0, sipPySelf, sipMeth, filename);
}


PyDoc_STRVAR(doc_wxFileHistory_AddFileToHistory, "AddFileToHistory(filename)\n"
"\n"
"Adds a file to the file history list, if the object has a pointer to\n"
"an appropriate file menu.");

extern "C" {static PyObject *meth_wxFileHistory_AddFileToHistory(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_AddFileToHistory(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* filename;
        int filenameState = 0;
         ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_filename,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxFileHistory, &sipCpp, sipType_wxString, &filename, &filenameState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxFileHistory::AddFileToHistory(*filename) : sipCpp->AddFileToHistory(*filename));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(filename), sipType_wxString, filenameState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_AddFileToHistory, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_AddFilesToMenu, "AddFilesToMenu()\n"
"AddFilesToMenu(menu)\n"
"\n"
"Appends the files in the history list, to all menus managed by the\n"
"file history object.\n"
"");

extern "C" {static PyObject *meth_wxFileHistory_AddFilesToMenu(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_AddFilesToMenu(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxFileHistory *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "B", &sipSelf, sipType_wxFileHistory, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxFileHistory::AddFilesToMenu() : sipCpp->AddFilesToMenu());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::wxMenu* menu;
         ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_menu,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxFileHistory, &sipCpp, sipType_wxMenu, &menu))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxFileHistory::AddFilesToMenu(menu) : sipCpp->AddFilesToMenu(menu));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_AddFilesToMenu, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_GetBaseId, "GetBaseId() -> WindowID\n"
"\n"
"Returns the base identifier for the range used for appending items.");

extern "C" {static PyObject *meth_wxFileHistory_GetBaseId(PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_GetBaseId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFileHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFileHistory, &sipCpp))
        {
             ::wxWindowID sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetBaseId();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_GetBaseId, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_GetCount, "GetCount() -> size_t\n"
"\n"
"Returns the number of files currently stored in the file history.");

extern "C" {static PyObject *meth_wxFileHistory_GetCount(PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxFileHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFileHistory, &sipCpp))
        {
            size_t sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxFileHistory::GetCount() : sipCpp->GetCount());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_GetCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_GetHistoryFile, "GetHistoryFile(index) -> String\n"
"\n"
"Returns the file at this index (zero-based).");

extern "C" {static PyObject *meth_wxFileHistory_GetHistoryFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_GetHistoryFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        size_t index;
        const  ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_index,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxFileHistory, &sipCpp, &index))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxFileHistory::GetHistoryFile(index) : sipCpp->GetHistoryFile(index)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_GetHistoryFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_GetMaxFiles, "GetMaxFiles() -> int\n"
"\n"
"Returns the maximum number of files that can be stored.");

extern "C" {static PyObject *meth_wxFileHistory_GetMaxFiles(PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_GetMaxFiles(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxFileHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFileHistory, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxFileHistory::GetMaxFiles() : sipCpp->GetMaxFiles());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_GetMaxFiles, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_GetMenus, "GetMenus() -> FileHistoryMenuList\n"
"\n"
"Returns the list of menus that are managed by this file history\n"
"object.");

extern "C" {static PyObject *meth_wxFileHistory_GetMenus(PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_GetMenus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFileHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFileHistory, &sipCpp))
        {
            const  ::wxFileHistoryMenuList*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetMenus();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(const_cast< ::wxFileHistoryMenuList *>(sipRes),sipType_wxFileHistoryMenuList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_GetMenus, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_Load, "Load(config)\n"
"\n"
"Loads the file history from the given config object.");

extern "C" {static PyObject *meth_wxFileHistory_Load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_Load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxConfigBase* config;
         ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_config,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxFileHistory, &sipCpp, sipType_wxConfigBase, &config))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxFileHistory::Load(*config) : sipCpp->Load(*config));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_Load, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_RemoveFileFromHistory, "RemoveFileFromHistory(i)\n"
"\n"
"Removes the specified file from the history.");

extern "C" {static PyObject *meth_wxFileHistory_RemoveFileFromHistory(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_RemoveFileFromHistory(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        size_t i;
         ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_i,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxFileHistory, &sipCpp, &i))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxFileHistory::RemoveFileFromHistory(i) : sipCpp->RemoveFileFromHistory(i));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_RemoveFileFromHistory, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_RemoveMenu, "RemoveMenu(menu)\n"
"\n"
"Removes this menu from the list of those managed by this object.");

extern "C" {static PyObject *meth_wxFileHistory_RemoveMenu(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_RemoveMenu(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxMenu* menu;
         ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_menu,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxFileHistory, &sipCpp, sipType_wxMenu, &menu))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxFileHistory::RemoveMenu(menu) : sipCpp->RemoveMenu(menu));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_RemoveMenu, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_Save, "Save(config)\n"
"\n"
"Saves the file history into the given config object.");

extern "C" {static PyObject *meth_wxFileHistory_Save(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_Save(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxConfigBase* config;
         ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_config,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxFileHistory, &sipCpp, sipType_wxConfigBase, &config))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxFileHistory::Save(*config) : sipCpp->Save(*config));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_Save, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_SetBaseId, "SetBaseId(baseId)\n"
"\n"
"Sets the base identifier for the range used for appending items.");

extern "C" {static PyObject *meth_wxFileHistory_SetBaseId(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_SetBaseId(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxWindowID baseId;
         ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_baseId,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxFileHistory, &sipCpp, &baseId))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetBaseId(baseId);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_SetBaseId, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_UseMenu, "UseMenu(menu)\n"
"\n"
"Adds this menu to the list of those menus that are managed by this\n"
"file history object.");

extern "C" {static PyObject *meth_wxFileHistory_UseMenu(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_UseMenu(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxMenu* menu;
         ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_menu,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxFileHistory, &sipCpp, sipType_wxMenu, &menu))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxFileHistory::UseMenu(menu) : sipCpp->UseMenu(menu));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_UseMenu, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_SetMenuPathStyle, "SetMenuPathStyle(style)\n"
"\n"
"Set the style of the menu item labels.");

extern "C" {static PyObject *meth_wxFileHistory_SetMenuPathStyle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_SetMenuPathStyle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxFileHistoryMenuPathStyle style;
         ::wxFileHistory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxFileHistory, &sipCpp, sipType_wxFileHistoryMenuPathStyle, &style))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetMenuPathStyle(style);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_SetMenuPathStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFileHistory_GetMenuPathStyle, "GetMenuPathStyle() -> FileHistoryMenuPathStyle\n"
"\n"
"Get the current style of the menu item labels.");

extern "C" {static PyObject *meth_wxFileHistory_GetMenuPathStyle(PyObject *, PyObject *);}
static PyObject *meth_wxFileHistory_GetMenuPathStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFileHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFileHistory, &sipCpp))
        {
             ::wxFileHistoryMenuPathStyle sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetMenuPathStyle();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxFileHistoryMenuPathStyle);
        }
    }

    sipNoMethod(sipParseErr, sipName_FileHistory, sipName_GetMenuPathStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxFileHistory(void *, const sipTypeDef *);}
static void *cast_wxFileHistory(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxFileHistory *sipCpp = reinterpret_cast< ::wxFileHistory *>(sipCppV);

    if (targetType == sipType_wxFileHistory)
        return sipCppV;

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxFileHistory(void *, int);}
static void release_wxFileHistory(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxFileHistory *>(sipCppV);
    else
        delete reinterpret_cast< ::wxFileHistory *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxFileHistory(Py_ssize_t);}
static void *array_wxFileHistory(Py_ssize_t sipNrElem)
{
    return new  ::wxFileHistory[sipNrElem];
}


extern "C" {static void dealloc_wxFileHistory(sipSimpleWrapper *);}
static void dealloc_wxFileHistory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxFileHistory *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxFileHistory(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxFileHistory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxFileHistory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxFileHistory *sipCpp = SIP_NULLPTR;

    {
        size_t maxFiles = 9;
         ::wxWindowID idBase = wxID_FILE1;

        static const char *sipKwdList[] = {
            sipName_maxFiles,
            sipName_idBase,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|=i", &maxFiles, &idBase))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxFileHistory(maxFiles,idBase);
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
static sipEncodedTypeDef supers_wxFileHistory[] = {{392, 255, 1}};


static PyMethodDef methods_wxFileHistory[] = {
    {sipName_AddFileToHistory, SIP_MLMETH_CAST(meth_wxFileHistory_AddFileToHistory), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_AddFileToHistory},
    {sipName_AddFilesToMenu, SIP_MLMETH_CAST(meth_wxFileHistory_AddFilesToMenu), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_AddFilesToMenu},
    {sipName_GetBaseId, meth_wxFileHistory_GetBaseId, METH_VARARGS, doc_wxFileHistory_GetBaseId},
    {sipName_GetCount, meth_wxFileHistory_GetCount, METH_VARARGS, doc_wxFileHistory_GetCount},
    {sipName_GetHistoryFile, SIP_MLMETH_CAST(meth_wxFileHistory_GetHistoryFile), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_GetHistoryFile},
    {sipName_GetMaxFiles, meth_wxFileHistory_GetMaxFiles, METH_VARARGS, doc_wxFileHistory_GetMaxFiles},
    {sipName_GetMenuPathStyle, meth_wxFileHistory_GetMenuPathStyle, METH_VARARGS, doc_wxFileHistory_GetMenuPathStyle},
    {sipName_GetMenus, meth_wxFileHistory_GetMenus, METH_VARARGS, doc_wxFileHistory_GetMenus},
    {sipName_Load, SIP_MLMETH_CAST(meth_wxFileHistory_Load), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_Load},
    {sipName_RemoveFileFromHistory, SIP_MLMETH_CAST(meth_wxFileHistory_RemoveFileFromHistory), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_RemoveFileFromHistory},
    {sipName_RemoveMenu, SIP_MLMETH_CAST(meth_wxFileHistory_RemoveMenu), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_RemoveMenu},
    {sipName_Save, SIP_MLMETH_CAST(meth_wxFileHistory_Save), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_Save},
    {sipName_SetBaseId, SIP_MLMETH_CAST(meth_wxFileHistory_SetBaseId), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_SetBaseId},
    {sipName_SetMenuPathStyle, SIP_MLMETH_CAST(meth_wxFileHistory_SetMenuPathStyle), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_SetMenuPathStyle},
    {sipName_UseMenu, SIP_MLMETH_CAST(meth_wxFileHistory_UseMenu), METH_VARARGS|METH_KEYWORDS, doc_wxFileHistory_UseMenu}
};

sipVariableDef variables_wxFileHistory[] = {
    {PropertyVariable, sipName_Menus, &methods_wxFileHistory[7], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_MenuPathStyle, &methods_wxFileHistory[6], &methods_wxFileHistory[13], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_MaxFiles, &methods_wxFileHistory[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Count, &methods_wxFileHistory[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_BaseId, &methods_wxFileHistory[2], &methods_wxFileHistory[12], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxFileHistory, "FileHistory(maxFiles=9, idBase=ID_FILE1)\n"
"\n"
"The wxFileHistory encapsulates a user interface convenience, the list\n"
"of most recently visited files as shown on a menu (usually the File\n"
"menu).");


sipClassTypeDef sipTypeDef__core_wxFileHistory = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxFileHistory,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FileHistory,
        {0, 0, 1},
        15, methods_wxFileHistory,
        0, SIP_NULLPTR,
        5, variables_wxFileHistory,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxFileHistory,
    -1,
    -1,
    supers_wxFileHistory,
    SIP_NULLPTR,
    init_type_wxFileHistory,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxFileHistory,
    SIP_NULLPTR,
    array_wxFileHistory,
    SIP_NULLPTR,
    release_wxFileHistory,
    cast_wxFileHistory,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
