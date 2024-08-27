/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        
        
        class wxSizerItemList_iterator {
        public:
            wxSizerItemList_iterator(wxSizerItemList::compatibility_iterator start)
                : m_node(start) {}

            wxSizerItem* __next__() {
                wxSizerItem* obj = NULL;
                if (m_node) {
                    obj = (wxSizerItem*) m_node->GetData();
                    m_node = m_node->GetNext();
                }
                else {
                    PyErr_SetString(PyExc_StopIteration, "");
                }
                return (wxSizerItem*)obj;
            }
        private:
            wxSizerItemList::compatibility_iterator m_node;
        };
        #include <wx/sizer.h>


extern "C" {static PyObject *slot_wxSizerItemList_iterator___next__(PyObject *);}
static PyObject *slot_wxSizerItemList_iterator___next__(PyObject *sipSelf)
{
     ::wxSizerItemList_iterator *sipCpp = reinterpret_cast< ::wxSizerItemList_iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxSizerItemList_iterator));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::wxSizerItem*sipRes = 0;
        sipRes = sipCpp->__next__();
        if (PyErr_Occurred())
            return NULL;

            return sipConvertFromType(sipRes,sipType_wxSizerItem,SIP_NULLPTR);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxSizerItemList_iterator(void *, int);}
static void release_wxSizerItemList_iterator(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxSizerItemList_iterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxSizerItemList_iterator(sipSimpleWrapper *);}
static void dealloc_wxSizerItemList_iterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxSizerItemList_iterator(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxSizerItemList_iterator[] = {
    {(void *)slot_wxSizerItemList_iterator___next__, next_slot},
    {0, (sipPySlotType)0}
};


sipClassTypeDef sipTypeDef__core_wxSizerItemList_iterator = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxSizerItemList_iterator,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_SizerItemList_iterator,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxSizerItemList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxSizerItemList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxSizerItemList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
