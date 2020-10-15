#pragma once

#ifndef __LIBEXEOE__
#define __LIBEXEOE__

#ifndef __LIBEXETYPES__
#include "LibExeTypes.h"
#endif

/* element names are as seen in the 'Microsoft MS-DOS Version 3.3 Programmer's Reference' */
/* descriptions are as seen in the 'Microsoft MS-DOS Version 3.3 Programmer's Reference', 'MS-DOS Encyclopedia', and 'winnt.h' */

/*
e_magic
    // Must contain 4DH, 5AH.
    00-01H (.EXE Signature)
    // Magic number

e_cblp
    // Number of bytes contained in last page; useful for reading overlays.
    02-03H (Last Page Size)
    // Bytes on last page of file

e_cp
    // Size of the file in 512-byte pages, including the header.
    04-05H (File Pages)
    // Pages in file

e_crlc
    // Number of relocation entries in table.
    06-07H (Relocation Items)
    // Relocations

e_cparhdr
    // Size of the header in 16-byte paragraphs. Used to locate the beginning of the load module in the file.
    08-09H (Header Paragraphs)
    // Size of header in paragraphs

e_minalloc
    // Minimum number of 16-byte paragraphs required above the end of the loaded program.
    0A-OBH (MINALLOC)
    // Minimum extra paragraphs needed

e_maxalloc
    // Maximum number of 16-byte paragraphs required above the end of the loaded program. If both minalloc and maxalloc are 0, the program is loaded as high as possible.
    0C-ODH (MAXALLOC)
    // Maximum extra paragraphs needed

e_ss
    // Initial value to be loaded into stack segment before starting program execution. Must be adjusted by relocation.
    OE-OFH (Initial SS Value)
    // Initial (relative) SS value

e_sp
    // Value to be loaded into the SP register before starting program execution.
    10-11H (Initial SP Value)
    // Initial SP value

e_csum
    // Negative sum of all the words in the file.
    12-13H (Complemented Checksum)
    // Checksum

e_ip
    // Initial value to be loaded into the IP register before starting program execution.
    14-15H (Initial IP Value)
    // Initial IP value

e_cs
    // Initial value to be loaded into the CS register before starting program execution. Must be adjusted by relocation.
    16-17H (Pre-Relocated Initial CS Value)
    // Initial (relative) CS value

e_lfarlc
    // Relative byte offset from beginning of run file to relocation table.
    18-19H (Relocation Table Offset)
    // File address of relocation table

e_ovno
    // The number of the overlay as generated by link.
    14-1BH (Overlay Number)
    // Overlay number

*/

struct _EXE_HEADER_OE {
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
};
typedef _EXE_HEADER_OE EXE_HEADER_OE;
extern EXE_HEADER_OE* exe_header_oe;

#endif  // __LIBEXEOE__