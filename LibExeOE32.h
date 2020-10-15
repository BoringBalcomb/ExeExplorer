#pragma once

#ifndef __LIBEXEOE32__
#define __LIBEXEOE32__

#ifndef __LIBEXETYPES__
#include "LibExeTypes.h"
#endif

struct _EXE_HEADER_OE_32 {
    WORD   e_magic;
    WORD   e_cblp;
    WORD   e_cp;
    WORD   e_crlc;
    WORD   e_cparhdr;
    WORD   e_minalloc;
    WORD   e_maxalloc;
    WORD   e_ss;
    WORD   e_sp;
    WORD   e_csum;
    WORD   e_ip;
    WORD   e_cs;
    WORD   e_lfarlc;
    WORD   e_ovno;
    WORD   e_opt[2];  // NOT as per the original specification [NOTE(JWB): "e_opt" rather than "e_res" to avoid collision/confusion with 'NE' EXE specification.]
};
// // typedef _EXE_HEADER_OE_32 EXE_HEADER_OE_32;
// // extern EXE_HEADER_OE_32 exe_header_oe_32;
// extern _EXE_HEADER_OE_32 exe_header_oe_32;
typedef _EXE_HEADER_OE_32 EXE_HEADER_OE_32;

#endif  // __LIBEXEOE32__
