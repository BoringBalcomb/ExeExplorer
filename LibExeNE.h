#pragma once

#ifndef __LIBEXENE__
#define __LIBEXENE__

#ifndef __LIBEXETYPES__
#include "LibExeTypes.h"
#endif

/* element names are as seen in the 'winnt.h' */
/* descriptions are as seen in the 'winnt.h' */
/*
Microsoft Programmer’s Library 1.3 CD-ROM (1988)
The MS-DOS Encyclopedia
Appendix K: Segmented (New) .EXE File Header Format
*/
struct _EXE_HEADER_NE {
    WORD   e_magic;                     // Magic number
    WORD   e_cblp;                      // Bytes on last page of file
    WORD   e_cp;                        // Pages in file
    WORD   e_crlc;                      // Relocations
    WORD   e_cparhdr;                   // Size of header in paragraphs
    WORD   e_minalloc;                  // Minimum extra paragraphs needed
    WORD   e_maxalloc;                  // Maximum extra paragraphs needed
    WORD   e_ss;                        // Initial (relative) SS value
    WORD   e_sp;                        // Initial SP value
    WORD   e_csum;                      // Checksum
    WORD   e_ip;                        // Initial IP value
    WORD   e_cs;                        // Initial (relative) CS value
    WORD   e_lfarlc;                    // File address of relocation table
    WORD   e_ovno;                      // Overlay number
    WORD   e_res[4];                    // Reserved words
    WORD   e_oemid;                     // OEM identifier (for e_oeminfo)
    WORD   e_oeminfo;                   // OEM information; e_oemid specific
    WORD   e_res2[10];                  // Reserved words
    LONG   e_lfanew;                    // File address of new exe header
};
typedef _EXE_HEADER_NE EXE_HEADER_NE;
extern EXE_HEADER_NE* exe_header_ne;

#endif  // __LIBEXENE__
