/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"
        #include <wx/graphics.h>
        #include <wx/graphics.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


PyDoc_STRVAR(doc_wxGraphicsMatrix_Concat, "Concat(t)\n"
"\n"
"Concatenates the matrix passed with the current matrix.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_Concat(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_Concat(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGraphicsMatrix* t;
         ::wxGraphicsMatrix *sipCpp;

        static const char *sipKwdList[] = {
            sipName_t,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp, sipType_wxGraphicsMatrix, &t))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Concat(t);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_Concat, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_Get, "Get() -> (a, b, c, d, tx, ty)\n"
"\n"
"Returns the component values of the matrix via the argument pointers.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_Get(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_Get(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDouble a;
         ::wxDouble b;
         ::wxDouble c;
         ::wxDouble d;
         ::wxDouble tx;
         ::wxDouble ty;
        const  ::wxGraphicsMatrix *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "B", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Get(&a,&b,&c,&d,&tx,&ty);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(dddddd)",a,b,c,d,tx,ty);
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_Get, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_GetNativeMatrix, "GetNativeMatrix() -> void\n"
"\n"
"Returns the native representation of the matrix.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_GetNativeMatrix(PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_GetNativeMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGraphicsMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp))
        {
            void*sipRes;
        if (sipCpp->IsNull()) {
            wxPyErr_SetString(PyExc_ValueError, "The GraphicsMatrix is not valid (likely an uninitialized or null instance)");
            return NULL;
        }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetNativeMatrix();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_GetNativeMatrix, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_Invert, "Invert()\n"
"\n"
"Inverts the matrix.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_Invert(PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_Invert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxGraphicsMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Invert();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_Invert, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_IsEqual, "IsEqual(t) -> bool\n"
"\n"
"Returns true if the elements of the transformation matrix are equal.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_IsEqual(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_IsEqual(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGraphicsMatrix* t;
        const  ::wxGraphicsMatrix *sipCpp;

        static const char *sipKwdList[] = {
            sipName_t,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp, sipType_wxGraphicsMatrix, &t))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsEqual(t);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_IsEqual, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_IsIdentity, "IsIdentity() -> bool\n"
"\n"
"Return true if this is the identity matrix.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_IsIdentity(PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_IsIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGraphicsMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsIdentity();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_IsIdentity, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_Rotate, "Rotate(angle)\n"
"\n"
"Rotates this matrix clockwise (in radians).");

extern "C" {static PyObject *meth_wxGraphicsMatrix_Rotate(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_Rotate(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDouble angle;
         ::wxGraphicsMatrix *sipCpp;

        static const char *sipKwdList[] = {
            sipName_angle,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bd", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp, &angle))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Rotate(angle);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_Rotate, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_Scale, "Scale(xScale, yScale)\n"
"\n"
"Scales this matrix.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_Scale(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_Scale(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDouble xScale;
         ::wxDouble yScale;
         ::wxGraphicsMatrix *sipCpp;

        static const char *sipKwdList[] = {
            sipName_xScale,
            sipName_yScale,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bdd", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp, &xScale, &yScale))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Scale(xScale,yScale);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_Scale, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_Set, "Set(a=1.0, b=0.0, c=0.0, d=1.0, tx=0.0, ty=0.0)\n"
"\n"
"Sets the matrix to the respective values (default values are the\n"
"identity matrix).");

extern "C" {static PyObject *meth_wxGraphicsMatrix_Set(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_Set(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDouble a = 1;
         ::wxDouble b = 0;
         ::wxDouble c = 0;
         ::wxDouble d = 1;
         ::wxDouble tx = 0;
         ::wxDouble ty = 0;
         ::wxGraphicsMatrix *sipCpp;

        static const char *sipKwdList[] = {
            sipName_a,
            sipName_b,
            sipName_c,
            sipName_d,
            sipName_tx,
            sipName_ty,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|dddddd", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp, &a, &b, &c, &d, &tx, &ty))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Set(a,b,c,d,tx,ty);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_Set, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_TransformDistance, "TransformDistance(dx, dy) -> (dx, dy)\n"
"\n"
"Applies this matrix to a distance (ie.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_TransformDistance(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_TransformDistance(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDouble dx;
         ::wxDouble dy;
        const  ::wxGraphicsMatrix *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dx,
            sipName_dy,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bdd", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp, &dx, &dy))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->TransformDistance(&dx,&dy);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(dd)",dx,dy);
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_TransformDistance, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_TransformPoint, "TransformPoint(x, y) -> (x, y)\n"
"\n"
"Applies this matrix to a point.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_TransformPoint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_TransformPoint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDouble x;
         ::wxDouble y;
        const  ::wxGraphicsMatrix *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bdd", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp, &x, &y))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->TransformPoint(&x,&y);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(dd)",x,y);
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_TransformPoint, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsMatrix_Translate, "Translate(dx, dy)\n"
"\n"
"Translates this matrix.");

extern "C" {static PyObject *meth_wxGraphicsMatrix_Translate(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsMatrix_Translate(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDouble dx;
         ::wxDouble dy;
         ::wxGraphicsMatrix *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dx,
            sipName_dy,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bdd", &sipSelf, sipType_wxGraphicsMatrix, &sipCpp, &dx, &dy))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Translate(dx,dy);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_GraphicsMatrix, sipName_Translate, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGraphicsMatrix(void *, const sipTypeDef *);}
static void *cast_wxGraphicsMatrix(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGraphicsMatrix *sipCpp = reinterpret_cast< ::wxGraphicsMatrix *>(sipCppV);

    if (targetType == sipType_wxGraphicsMatrix)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_wxGraphicsObject)->ctd_cast(static_cast< ::wxGraphicsObject *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGraphicsMatrix(void *, int);}
static void release_wxGraphicsMatrix(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGraphicsMatrix *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void *array_wxGraphicsMatrix(Py_ssize_t);}
static void *array_wxGraphicsMatrix(Py_ssize_t sipNrElem)
{
    return new  ::wxGraphicsMatrix[sipNrElem];
}


extern "C" {static void assign_wxGraphicsMatrix(void *, Py_ssize_t, void *);}
static void assign_wxGraphicsMatrix(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxGraphicsMatrix *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxGraphicsMatrix *>(sipSrc);
}


extern "C" {static void *copy_wxGraphicsMatrix(const void *, Py_ssize_t);}
static void *copy_wxGraphicsMatrix(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::wxGraphicsMatrix(reinterpret_cast<const  ::wxGraphicsMatrix *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxGraphicsMatrix(sipSimpleWrapper *);}
static void dealloc_wxGraphicsMatrix(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGraphicsMatrix(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGraphicsMatrix(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGraphicsMatrix(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGraphicsMatrix *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGraphicsMatrix();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxGraphicsMatrix* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxGraphicsMatrix, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGraphicsMatrix(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxGraphicsMatrix[] = {{246, 255, 1}};


static PyMethodDef methods_wxGraphicsMatrix[] = {
    {sipName_Concat, SIP_MLMETH_CAST(meth_wxGraphicsMatrix_Concat), METH_VARARGS|METH_KEYWORDS, doc_wxGraphicsMatrix_Concat},
    {sipName_Get, SIP_MLMETH_CAST(meth_wxGraphicsMatrix_Get), METH_VARARGS|METH_KEYWORDS, doc_wxGraphicsMatrix_Get},
    {sipName_GetNativeMatrix, meth_wxGraphicsMatrix_GetNativeMatrix, METH_VARARGS, doc_wxGraphicsMatrix_GetNativeMatrix},
    {sipName_Invert, meth_wxGraphicsMatrix_Invert, METH_VARARGS, doc_wxGraphicsMatrix_Invert},
    {sipName_IsEqual, SIP_MLMETH_CAST(meth_wxGraphicsMatrix_IsEqual), METH_VARARGS|METH_KEYWORDS, doc_wxGraphicsMatrix_IsEqual},
    {sipName_IsIdentity, meth_wxGraphicsMatrix_IsIdentity, METH_VARARGS, doc_wxGraphicsMatrix_IsIdentity},
    {sipName_Rotate, SIP_MLMETH_CAST(meth_wxGraphicsMatrix_Rotate), METH_VARARGS|METH_KEYWORDS, doc_wxGraphicsMatrix_Rotate},
    {sipName_Scale, SIP_MLMETH_CAST(meth_wxGraphicsMatrix_Scale), METH_VARARGS|METH_KEYWORDS, doc_wxGraphicsMatrix_Scale},
    {sipName_Set, SIP_MLMETH_CAST(meth_wxGraphicsMatrix_Set), METH_VARARGS|METH_KEYWORDS, doc_wxGraphicsMatrix_Set},
    {sipName_TransformDistance, SIP_MLMETH_CAST(meth_wxGraphicsMatrix_TransformDistance), METH_VARARGS|METH_KEYWORDS, doc_wxGraphicsMatrix_TransformDistance},
    {sipName_TransformPoint, SIP_MLMETH_CAST(meth_wxGraphicsMatrix_TransformPoint), METH_VARARGS|METH_KEYWORDS, doc_wxGraphicsMatrix_TransformPoint},
    {sipName_Translate, SIP_MLMETH_CAST(meth_wxGraphicsMatrix_Translate), METH_VARARGS|METH_KEYWORDS, doc_wxGraphicsMatrix_Translate}
};

sipVariableDef variables_wxGraphicsMatrix[] = {
    {PropertyVariable, sipName_NativeMatrix, &methods_wxGraphicsMatrix[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxGraphicsMatrix, "A wxGraphicsMatrix is a native representation of an affine matrix.");


sipClassTypeDef sipTypeDef__core_wxGraphicsMatrix = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxGraphicsMatrix,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_GraphicsMatrix,
        {0, 0, 1},
        12, methods_wxGraphicsMatrix,
        0, SIP_NULLPTR,
        1, variables_wxGraphicsMatrix,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGraphicsMatrix,
    -1,
    -1,
    supers_wxGraphicsMatrix,
    SIP_NULLPTR,
    init_type_wxGraphicsMatrix,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_wxGraphicsMatrix,
    assign_wxGraphicsMatrix,
    array_wxGraphicsMatrix,
    copy_wxGraphicsMatrix,
    release_wxGraphicsMatrix,
    cast_wxGraphicsMatrix,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
