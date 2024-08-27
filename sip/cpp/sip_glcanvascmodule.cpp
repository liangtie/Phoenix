/*
 * Module code.
 *
 * Generated by SIP 6.7.9
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_glcanvas.h"
        #include <wx/object.h>
        #include <wx/glcanvas.h>
        #include <wx/gdicmn.h>
        #include <wx/window.h>
        #include <wx/validate.h>
        #include <wx/gdicmn.h>
        #include <wx/event.h>
        #include <wx/glcanvas.h>
        #include <wx/glcanvas.h>
        #include <wx/glcanvas.h>

/* Define the strings used by this module. */
const char sipStrings__glcanvas[] = {
    'G', 'e', 't', 'M', 'a', 'i', 'n', 'W', 'i', 'n', 'd', 'o', 'w', 'O', 'f', 'C', 'o', 'm', 'p', 'o', 's', 'i', 't', 'e', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'G', 'e', 't', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'o', 'r', 'd', 'e', 'r', 'F', 'o', 'r', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'G', 'e', 't', 'C', 'l', 'a', 's', 's', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 0,
    'A', 'c', 'c', 'e', 'p', 't', 's', 'F', 'o', 'c', 'u', 's', 'F', 'r', 'o', 'm', 'K', 'e', 'y', 'b', 'o', 'a', 'r', 'd', 0,
    'H', 'a', 's', 'T', 'r', 'a', 'n', 's', 'p', 'a', 'r', 'e', 'n', 't', 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u', 'n', 'd', 0,
    'A', 'c', 'c', 'e', 'p', 't', 's', 'F', 'o', 'c', 'u', 's', 'R', 'e', 'c', 'u', 'r', 's', 'i', 'v', 'e', 'l', 'y', 0,
    'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'D', 'a', 't', 'a', 'F', 'r', 'o', 'm', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'W', 'X', '_', 'G', 'L', '_', 'F', 'R', 'A', 'M', 'E', 'B', 'U', 'F', 'F', 'E', 'R', '_', 'S', 'R', 'G', 'B', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'I', 'N', '_', 'A', 'C', 'C', 'U', 'M', '_', 'A', 'L', 'P', 'H', 'A', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'I', 'N', '_', 'A', 'C', 'C', 'U', 'M', '_', 'G', 'R', 'E', 'E', 'N', 0,
    'W', 'X', '_', 'G', 'L', '_', 'N', 'O', '_', 'R', 'E', 'S', 'E', 'T', '_', 'N', 'O', 'T', 'I', 'F', 'Y', 0,
    'W', 'X', '_', 'G', 'L', '_', 'R', 'E', 'S', 'E', 'T', '_', 'I', 'S', 'O', 'L', 'A', 'T', 'I', 'O', 'N', 0,
    'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y', 'P', 'r', 'o', 'f', 'i', 'l', 'e', 0,
    'I', 'n', 'f', 'o', 'r', 'm', 'F', 'i', 'r', 's', 't', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'I', 's', 'E', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 0,
    'S', 'h', 'o', 'u', 'l', 'd', 'I', 'n', 'h', 'e', 'r', 'i', 't', 'C', 'o', 'l', 'o', 'u', 'r', 's', 0,
    'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'D', 'a', 't', 'a', 'T', 'o', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'W', 'X', '_', 'G', 'L', '_', 'F', 'O', 'R', 'W', 'A', 'R', 'D', '_', 'C', 'O', 'M', 'P', 'A', 'T', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'I', 'N', '_', 'A', 'C', 'C', 'U', 'M', '_', 'B', 'L', 'U', 'E', 0,
    'W', 'X', '_', 'G', 'L', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'B', 'U', 'F', 'F', 'E', 'R', 'S', 0,
    'D', 'o', 'G', 'e', 't', 'B', 'e', 's', 't', 'C', 'l', 'i', 'e', 'n', 't', 'S', 'i', 'z', 'e', 0,
    'G', 'e', 't', 'C', 'l', 'i', 'e', 'n', 't', 'A', 'r', 'e', 'a', 'O', 'r', 'i', 'g', 'i', 'n', 0,
    'W', 'X', '_', 'G', 'L', '_', 'L', 'O', 'S', 'E', '_', 'O', 'N', '_', 'R', 'E', 'S', 'E', 'T', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'A', 'J', 'O', 'R', '_', 'V', 'E', 'R', 'S', 'I', 'O', 'N', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'I', 'N', 'O', 'R', '_', 'V', 'E', 'R', 'S', 'I', 'O', 'N', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'I', 'N', '_', 'A', 'C', 'C', 'U', 'M', '_', 'R', 'E', 'D', 0,
    'W', 'X', '_', 'G', 'L', '_', 'R', 'E', 'L', 'E', 'A', 'S', 'E', '_', 'F', 'L', 'U', 'S', 'H', 0,
    'W', 'X', '_', 'G', 'L', '_', 'R', 'O', 'B', 'U', 'S', 'T', '_', 'A', 'C', 'C', 'E', 'S', 'S', 0,
    'D', 'o', 'S', 'e', 't', 'W', 'i', 'n', 'd', 'o', 'w', 'V', 'a', 'r', 'i', 'a', 'n', 't', 0,
    'E', 'n', 'a', 'b', 'l', 'e', 'V', 'i', 's', 'i', 'b', 'l', 'e', 'F', 'o', 'c', 'u', 's', 0,
    'I', 's', 'D', 'i', 's', 'p', 'l', 'a', 'y', 'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 0,
    'W', 'X', '_', 'G', 'L', '_', 'C', 'O', 'R', 'E', '_', 'P', 'R', 'O', 'F', 'I', 'L', 'E', 0,
    'W', 'X', '_', 'G', 'L', '_', 'D', 'O', 'U', 'B', 'L', 'E', 'B', 'U', 'F', 'F', 'E', 'R', 0,
    'W', 'X', '_', 'G', 'L', '_', 'R', 'E', 'L', 'E', 'A', 'S', 'E', '_', 'N', 'O', 'N', 'E', 0,
    'W', 'X', '_', 'G', 'L', '_', 'S', 'T', 'E', 'N', 'C', 'I', 'L', '_', 'S', 'I', 'Z', 'E', 0,
    '_', 'G', 'L', '_', 'C', 'O', 'M', 'P', 'A', 'T', '_', 'P', 'R', 'O', 'F', 'I', 'L', 'E', 0,
    'F', 'o', 'r', 'w', 'a', 'r', 'd', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e', 0,
    'I', 'n', 'h', 'e', 'r', 'i', 't', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 0,
    'W', 'X', '_', 'G', 'L', '_', 'A', 'U', 'X', '_', 'B', 'U', 'F', 'F', 'E', 'R', 'S', 0,
    'W', 'X', '_', 'G', 'L', '_', 'B', 'U', 'F', 'F', 'E', 'R', '_', 'S', 'I', 'Z', 'E', 0,
    'a', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e', 'O', 't', 'h', 'e', 'r', 'D', 'i', 'r', 0,
    'G', 'e', 't', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'o', 'r', 'd', 'e', 'r', 0,
    'P', 'l', 'a', 't', 'f', 'o', 'r', 'm', 'D', 'e', 'f', 'a', 'u', 'l', 't', 's', 0,
    'S', 'e', 'n', 'd', 'D', 'e', 's', 't', 'r', 'o', 'y', 'E', 'v', 'e', 'n', 't', 0,
    'W', 'X', '_', 'G', 'L', '_', 'D', 'E', 'P', 'T', 'H', '_', 'S', 'I', 'Z', 'E', 0,
    'w', 'x', 'G', 'L', 'C', 'o', 'n', 't', 'e', 'x', 't', 'A', 't', 't', 'r', 's', 0,
    'D', 'o', 'G', 'e', 't', 'C', 'l', 'i', 'e', 'n', 't', 'S', 'i', 'z', 'e', 0,
    'D', 'o', 'S', 'e', 't', 'C', 'l', 'i', 'e', 'n', 't', 'S', 'i', 'z', 'e', 0,
    'F', 'r', 'a', 'm', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 's', 'R', 'G', 'B', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'I', 'N', '_', 'A', 'L', 'P', 'H', 'A', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'I', 'N', '_', 'G', 'R', 'E', 'E', 'N', 0,
    'w', 'x', 'G', 'L', 'A', 't', 't', 'r', 'i', 'b', 's', 'B', 'a', 's', 'e', 0,
    'D', 'o', 'S', 'e', 't', 'S', 'i', 'z', 'e', 'H', 'i', 'n', 't', 's', 0,
    'O', 'n', 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', 'I', 'd', 'l', 'e', 0,
    'R', 'e', 's', 'e', 't', 'I', 's', 'o', 'l', 'a', 't', 'i', 'o', 'n', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'I', 'N', '_', 'B', 'L', 'U', 'E', 0,
    'w', 'x', 'G', 'L', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 0,
    'A', 'd', 'd', 'A', 't', 't', 'r', 'i', 'b', 'B', 'i', 't', 's', 0,
    'D', 'o', 'G', 'e', 't', 'B', 'e', 's', 't', 'S', 'i', 'z', 'e', 0,
    'D', 'o', 'G', 'e', 't', 'P', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'N', 'o', 'R', 'e', 's', 'e', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'S', 'a', 'm', 'p', 'l', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 's', 0,
    'W', 'X', '_', 'G', 'L', '_', 'M', 'I', 'N', '_', 'R', 'E', 'D', 0,
    'W', 'X', '_', 'G', 'L', '_', 'S', 'A', 'M', 'P', 'L', 'E', 'S', 0,
    'A', 'c', 'c', 'e', 'p', 't', 's', 'F', 'o', 'c', 'u', 's', 0,
    'A', 'd', 'd', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 0,
    'D', 'o', 'M', 'o', 'v', 'e', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'D', 'o', 'u', 'b', 'l', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 0,
    'G', 'e', 't', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'o', 'r', 0,
    'M', 'a', 'j', 'o', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', 0,
    'M', 'i', 'n', 'o', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', 0,
    'P', 'r', 'o', 'c', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'R', 'e', 'l', 'e', 'a', 's', 'e', 'F', 'l', 'u', 's', 'h', 0,
    'S', 'e', 't', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'o', 'r', 0,
    'U', 'S', 'E', '_', 'G', 'L', 'C', 'A', 'N', 'V', 'A', 'S', 0,
    'W', 'X', '_', 'G', 'L', '_', 'S', 'T', 'E', 'R', 'E', 'O', 0,
    'w', 'x', '.', '_', 'g', 'l', 'c', 'a', 'n', 'v', 'a', 's', 0,
    'C', 'o', 'r', 'e', 'P', 'r', 'o', 'f', 'i', 'l', 'e', 0,
    'L', 'o', 's', 'e', 'O', 'n', 'R', 'e', 's', 'e', 't', 0,
    'M', 'i', 'n', 'A', 'c', 'u', 'm', 'R', 'G', 'B', 'A', 0,
    'R', 'e', 'm', 'o', 'v', 'e', 'C', 'h', 'i', 'l', 'd', 0,
    'S', 'e', 't', 'C', 'a', 'n', 'F', 'o', 'c', 'u', 's', 0,
    'S', 'e', 't', 'N', 'e', 'e', 'd', 's', 'A', 'R', 'B', 0,
    'S', 'w', 'a', 'p', 'B', 'u', 'f', 'f', 'e', 'r', 's', 0,
    'W', 'X', '_', 'G', 'L', '_', 'D', 'E', 'B', 'U', 'G', 0,
    'W', 'X', '_', 'G', 'L', '_', 'L', 'E', 'V', 'E', 'L', 0,
    'w', 'x', 'G', 'L', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'A', 'u', 'x', 'B', 'u', 'f', 'f', 'e', 'r', 's', 0,
    'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'I', 'n', 'i', 't', 'D', 'i', 'a', 'l', 'o', 'g', 0,
    'O', 'G', 'L', 'V', 'e', 'r', 's', 'i', 'o', 'n', 0,
    'S', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 0,
    'W', 'X', '_', 'G', 'L', '_', 'R', 'G', 'B', 'A', 0,
    'a', 't', 't', 'r', 'i', 'b', 'L', 'i', 's', 't', 0,
    'c', 'o', 'm', 'b', 'i', 'n', 'e', 'V', 'a', 'l', 0,
    'w', 'i', 'd', 't', 'h', 'T', 'i', 't', 'l', 'e', 0,
    'w', 'x', 'G', 'L', 'C', 'a', 'n', 'v', 'a', 's', 0,
    'D', 'o', 'G', 'e', 't', 'S', 'i', 'z', 'e', 0,
    'D', 'o', 'S', 'e', 't', 'S', 'i', 'z', 'e', 0,
    'S', 'e', 't', 'C', 'o', 'l', 'o', 'u', 'r', 0,
    'T', 'r', 'y', 'B', 'e', 'f', 'o', 'r', 'e', 0,
    'W', 'X', '_', 'G', 'L', '_', 'E', 'S', '2', 0,
    'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 'M', 'a', 'x', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 'M', 'i', 'n', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'd', 'i', 's', 'p', 'A', 't', 't', 'r', 's', 0,
    'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 0,
    's', 'e', 'a', 'r', 'c', 'h', 'V', 'a', 'l', 0,
    's', 'i', 'z', 'e', 'F', 'l', 'a', 'g', 's', 0,
    'v', 'a', 'l', 'i', 'd', 'a', 't', 'o', 'r', 0,
    'A', 'd', 'd', 'C', 'h', 'i', 'l', 'd', 0,
    'D', 'e', 'b', 'u', 'g', 'C', 't', 'x', 0,
    'D', 'o', 'E', 'n', 'a', 'b', 'l', 'e', 0,
    'D', 'o', 'F', 'r', 'e', 'e', 'z', 'e', 0,
    'S', 'a', 'm', 'p', 'l', 'e', 'r', 's', 0,
    'T', 'r', 'y', 'A', 'f', 't', 'e', 'r', 0,
    'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 0,
    'c', 'a', 'n', 'F', 'o', 'c', 'u', 's', 0,
    'c', 't', 'x', 'A', 't', 't', 'r', 's', 0,
    'l', 'o', 'c', 'a', 't', 'i', 'o', 'n', 0,
    'n', 'e', 'e', 'd', 's', 'A', 'R', 'B', 0,
    'D', 'e', 's', 't', 'r', 'o', 'y', 0,
    'E', 'n', 'd', 'L', 'i', 's', 't', 0,
    'M', 'i', 'n', 'R', 'G', 'B', 'A', 0,
    'S', 't', 'e', 'n', 'c', 'i', 'l', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'p', 'a', 'l', 'e', 't', 't', 'e', 0,
    'u', 'n', 'i', 't', 'M', 'a', 'x', 0,
    'u', 'n', 'i', 't', 'M', 'i', 'n', 0,
    'v', 'a', 'r', 'i', 'a', 'n', 't', 0,
    'D', 'o', 'T', 'h', 'a', 'w', 0,
    'R', 'o', 'b', 'u', 's', 't', 0,
    'S', 't', 'e', 'r', 'e', 'o', 0,
    'c', 'l', 'i', 'e', 'n', 't', 0,
    'c', 'o', 'l', 'o', 'u', 'r', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'd', 'i', 'a', 'l', 'o', 'g', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 0,
    'h', 'e', 'i', 'g', 'h', 't', 0,
    'm', 'A', 'l', 'p', 'h', 'a', 0,
    'm', 'G', 'r', 'e', 'e', 'n', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'r', 'o', 'w', 'M', 'a', 'x', 0,
    'r', 'o', 'w', 'M', 'i', 'n', 0,
    's', 't', 'r', 'e', 'a', 'm', 0,
    'v', 'm', 'a', 'y', 'o', 'r', 0,
    'v', 'm', 'i', 'n', 'o', 'r', 0,
    'D', 'e', 'p', 't', 'h', 0,
    'L', 'e', 'v', 'e', 'l', 0,
    'c', 'h', 'i', 'l', 'd', 0,
    'c', 'o', 'u', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'l', 'e', 'v', 'e', 'l', 0,
    'm', 'B', 'l', 'u', 'e', 0,
    'o', 't', 'h', 'e', 'r', 0,
    'p', 'o', 'p', 'u', 'p', 0,
    's', 'c', 'a', 'l', 'e', 0,
    's', 'i', 'z', 'e', 'r', 0,
    's', 't', 'y', 'l', 'e', 0,
    'w', 'i', 'd', 't', 'h', 0,
    'I', 's', 'O', 'K', 0,
    'i', 'n', 'c', 'H', 0,
    'i', 'n', 'c', 'W', 0,
    'i', 'n', 'f', 'o', 0,
    'i', 't', 'e', 'm', 0,
    'm', 'R', 'e', 'd', 0,
    'm', 'a', 'x', 'H', 0,
    'm', 'a', 'x', 'W', 0,
    'm', 'i', 'n', 'H', 0,
    'm', 'i', 'n', 'W', 0,
    'n', 'a', 'm', 'e', 0,
    'r', 'e', 'c', 't', 0,
    's', 'h', 'o', 'w', 0,
    's', 'i', 'z', 'e', 0,
    't', 'i', 'm', 'e', 0,
    'u', 'n', 'i', 't', 0,
    'i', 'd', 'x', 0,
    'm', 's', 'g', 0,
    'p', 'o', 's', 0,
    'r', 'o', 'w', 0,
    'v', 'a', 'l', 0,
    'w', 'i', 'n', 0,
    'd', 'c', 0,
    'i', 'd', 0,
};

void sipVH__glcanvas_18(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::wxWindowBase*child)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", child, sipType_wxWindowBase, SIP_NULLPTR);
}

bool sipVH__glcanvas_17(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::wxEvent& event)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "D", &event, sipType_wxEvent, SIP_NULLPTR);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

bool sipVH__glcanvas_16(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int direction,int size,int availableOtherDir)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "iii", direction, size, availableOtherDir);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

 ::wxPoint sipVH__glcanvas_15(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxPoint sipRes;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_wxPoint, &sipRes);

    return sipRes;
}

 ::wxValidator* sipVH__glcanvas_14(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxValidator* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_wxValidator, &sipRes);

    return sipRes;
}

void sipVH__glcanvas_13(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const  ::wxValidator& validator)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", const_cast< ::wxValidator *>(&validator), sipType_wxValidator, SIP_NULLPTR);
}

bool sipVH__glcanvas_12(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

 ::wxWindow* sipVH__glcanvas_11(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxWindow* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_wxWindow, &sipRes);

    return sipRes;
}

void sipVH__glcanvas_10(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, bool enable)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "b", enable);
}

void sipVH__glcanvas_9(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int*width,int*height)
{
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "(ii)", width, height);
}

void sipVH__glcanvas_8(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int x,int y,int width,int height,int sizeFlags)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "iiiii", x, y, width, height, sizeFlags);
}

void sipVH__glcanvas_7(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int width,int height)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "ii", width, height);
}

void sipVH__glcanvas_6(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int minW,int minH,int maxW,int maxH,int incW,int incH)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "iiiiii", minW, minH, maxW, maxH, incW, incH);
}

void sipVH__glcanvas_5(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int x,int y,int width,int height)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "iiii", x, y, width, height);
}

void sipVH__glcanvas_4(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::wxWindowVariant variant)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "F", variant, sipType_wxWindowVariant);
}

 ::wxBorder sipVH__glcanvas_3(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxBorder sipRes = ::wxBORDER_DEFAULT;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "F", sipType_wxBorder, &sipRes);

    return sipRes;
}

void sipVH__glcanvas_2(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "");
}

 ::wxSize sipVH__glcanvas_1(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxSize sipRes;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_wxSize, &sipRes);

    return sipRes;
}

bool sipVH__glcanvas_0(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const  ::wxGLCanvas& win)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "D", const_cast< ::wxGLCanvas *>(&win), sipType_wxGLCanvas, SIP_NULLPTR);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}


/*
 * This defines each type in this module.
 */
sipTypeDef *sipExportedTypes__glcanvas[] = {
    &sipTypeDef__glcanvas_wxGLAttribsBase.ctd_base,
    &sipTypeDef__glcanvas_wxGLAttributes.ctd_base,
    &sipTypeDef__glcanvas_wxGLCanvas.ctd_base,
    &sipTypeDef__glcanvas_wxGLContext.ctd_base,
    &sipTypeDef__glcanvas_wxGLContextAttrs.ctd_base,
};


/* This defines the types that this module needs to import from _core. */
sipImportedTypeDef sipImportedTypes__glcanvas__core[] = {
    {"wxArrayInt"},
    {"wxBorder"},
    {"wxEvent"},
    {"wxEvtHandler"},
    {"wxObject"},
    {"wxPalette"},
    {"wxPoint"},
    {"wxSize"},
    {"wxString"},
    {"wxTrackable"},
    {"wxValidator"},
    {"wxVisualAttributes"},
    {"wxWindow"},
    {"wxWindowBase"},
    {"wxWindowVariant"},
    {SIP_NULLPTR}
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"wx._core", sipImportedTypes__glcanvas__core, SIP_NULLPTR, SIP_NULLPTR},
    {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR}
};


/* Define the enum members and ints to be added to this module. */
static sipIntInstanceDef intInstances[] = {
    {sipName_USE_GLCANVAS, wxUSE_GLCANVAS},
    {sipName_WX_GL_RGBA, static_cast<int>(::WX_GL_RGBA)},
    {sipName_WX_GL_BUFFER_SIZE, static_cast<int>(::WX_GL_BUFFER_SIZE)},
    {sipName_WX_GL_LEVEL, static_cast<int>(::WX_GL_LEVEL)},
    {sipName_WX_GL_DOUBLEBUFFER, static_cast<int>(::WX_GL_DOUBLEBUFFER)},
    {sipName_WX_GL_STEREO, static_cast<int>(::WX_GL_STEREO)},
    {sipName_WX_GL_AUX_BUFFERS, static_cast<int>(::WX_GL_AUX_BUFFERS)},
    {sipName_WX_GL_MIN_RED, static_cast<int>(::WX_GL_MIN_RED)},
    {sipName_WX_GL_MIN_GREEN, static_cast<int>(::WX_GL_MIN_GREEN)},
    {sipName_WX_GL_MIN_BLUE, static_cast<int>(::WX_GL_MIN_BLUE)},
    {sipName_WX_GL_MIN_ALPHA, static_cast<int>(::WX_GL_MIN_ALPHA)},
    {sipName_WX_GL_DEPTH_SIZE, static_cast<int>(::WX_GL_DEPTH_SIZE)},
    {sipName_WX_GL_STENCIL_SIZE, static_cast<int>(::WX_GL_STENCIL_SIZE)},
    {sipName_WX_GL_MIN_ACCUM_RED, static_cast<int>(::WX_GL_MIN_ACCUM_RED)},
    {sipName_WX_GL_MIN_ACCUM_GREEN, static_cast<int>(::WX_GL_MIN_ACCUM_GREEN)},
    {sipName_WX_GL_MIN_ACCUM_BLUE, static_cast<int>(::WX_GL_MIN_ACCUM_BLUE)},
    {sipName_WX_GL_MIN_ACCUM_ALPHA, static_cast<int>(::WX_GL_MIN_ACCUM_ALPHA)},
    {sipName_WX_GL_SAMPLE_BUFFERS, static_cast<int>(::WX_GL_SAMPLE_BUFFERS)},
    {sipName_WX_GL_SAMPLES, static_cast<int>(::WX_GL_SAMPLES)},
    {sipName_WX_GL_FRAMEBUFFER_SRGB, static_cast<int>(::WX_GL_FRAMEBUFFER_SRGB)},
    {sipName_WX_GL_MAJOR_VERSION, static_cast<int>(::WX_GL_MAJOR_VERSION)},
    {sipName_WX_GL_MINOR_VERSION, static_cast<int>(::WX_GL_MINOR_VERSION)},
    {sipName_WX_GL_CORE_PROFILE, static_cast<int>(::WX_GL_CORE_PROFILE)},
    {sipName__GL_COMPAT_PROFILE, static_cast<int>(::wx_GL_COMPAT_PROFILE)},
    {sipName_WX_GL_FORWARD_COMPAT, static_cast<int>(::WX_GL_FORWARD_COMPAT)},
    {sipName_WX_GL_ES2, static_cast<int>(::WX_GL_ES2)},
    {sipName_WX_GL_DEBUG, static_cast<int>(::WX_GL_DEBUG)},
    {sipName_WX_GL_ROBUST_ACCESS, static_cast<int>(::WX_GL_ROBUST_ACCESS)},
    {sipName_WX_GL_NO_RESET_NOTIFY, static_cast<int>(::WX_GL_NO_RESET_NOTIFY)},
    {sipName_WX_GL_LOSE_ON_RESET, static_cast<int>(::WX_GL_LOSE_ON_RESET)},
    {sipName_WX_GL_RESET_ISOLATION, static_cast<int>(::WX_GL_RESET_ISOLATION)},
    {sipName_WX_GL_RELEASE_FLUSH, static_cast<int>(::WX_GL_RELEASE_FLUSH)},
    {sipName_WX_GL_RELEASE_NONE, static_cast<int>(::WX_GL_RELEASE_NONE)},
    {0, 0}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI__glcanvas = {
    SIP_NULLPTR,
    8,
    sipNameNr_wx__glcanvas,
    0,
    sipStrings__glcanvas,
    importsTable,
    SIP_NULLPTR,
    5,
    sipExportedTypes__glcanvas,
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI__glcanvas;


/* The Python module initialisation function. */
#if defined(SIP_STATIC_MODULE)
extern "C" PyObject *PyInit__glcanvas()
#else
PyMODINIT_FUNC PyInit__glcanvas()
#endif
{
    static PyMethodDef sip_methods[] = {
        {SIP_NULLPTR, SIP_NULLPTR, 0, SIP_NULLPTR}
    };

    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "wx._glcanvas",
        SIP_NULLPTR,
        -1,
        sip_methods,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_NULLPTR
    };

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
    if ((sipModule = PyModule_Create(&sip_module_def)) == SIP_NULLPTR)
        return SIP_NULLPTR;

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
    if ((sip_sipmod = PyImport_ImportModule("wx.siplib")) == SIP_NULLPTR)
    {
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

    if (sip_capiobj == SIP_NULLPTR || !PyCapsule_CheckExact(sip_capiobj))
    {
        PyErr_SetString(PyExc_AttributeError, "wx.siplib._C_API is missing or has the wrong type");
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }

    sipAPI__glcanvas = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, "wx.siplib._C_API"));

    if (sipAPI__glcanvas == SIP_NULLPTR)
    {
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI__glcanvas, 12, 8, 0) < 0)
    {
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }
    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI__glcanvas,sipModuleDict) < 0)
    {
        Py_DECREF(sipModule);
        return SIP_NULLPTR;
    }

    return sipModule;
}
