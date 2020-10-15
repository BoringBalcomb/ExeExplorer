#pragma once

#include <winnt.h>

// NTIMAGE.H
// D:\RE-DOS_EXE\MsWin95c_Nt351SDK_VHD\mstools\h\NTIMAGE.H
// typedef struct _IMAGE_OS2_HEADER {      // OS/2 .EXE header
//     USHORT ne_magic;                    // Magic number
//     CHAR   ne_ver;                      // Version number
//     CHAR   ne_rev;                      // Revision number
//     USHORT ne_enttab;                   // Offset of Entry Table
//     USHORT ne_cbenttab;                 // Number of bytes in Entry Table
//     LONG   ne_crc;                      // Checksum of whole file
//     USHORT ne_flags;                    // Flag word
//     USHORT ne_autodata;                 // Automatic data segment number
//     USHORT ne_heap;                     // Initial heap allocation
//     USHORT ne_stack;                    // Initial stack allocation
//     LONG   ne_csip;                     // Initial CS:IP setting
//     LONG   ne_sssp;                     // Initial SS:SP setting
//     USHORT ne_cseg;                     // Count of file segments
//     USHORT ne_cmod;                     // Entries in Module Reference Table
//     USHORT ne_cbnrestab;                // Size of non-resident name table
//     USHORT ne_segtab;                   // Offset of Segment Table
//     USHORT ne_rsrctab;                  // Offset of Resource Table
//     USHORT ne_restab;                   // Offset of resident name table
//     USHORT ne_modtab;                   // Offset of Module Reference Table
//     USHORT ne_imptab;                   // Offset of Imported Names Table
//     LONG   ne_nrestab;                  // Offset of Non-resident Names Table
//     USHORT ne_cmovent;                  // Count of movable entries
//     USHORT ne_align;                    // Segment alignment shift count
//     USHORT ne_cres;                     // Count of resource segments
//     UCHAR  ne_exetyp;                   // Target Operating system
//     UCHAR  ne_flagsothers;              // Other .EXE flags
//     USHORT ne_pretthunks;               // offset to return thunks
//     USHORT ne_psegrefbytes;             // offset to segment ref. bytes
//     USHORT ne_swaparea;                 // Minimum code swap area size
//     USHORT ne_expver;                   // Expected Windows version number
// } IMAGE_OS2_HEADER, * PIMAGE_OS2_HEADER;

// // winnt.h
// // C:\Program Files (x86)\Windows Kits\10\Include\10.0.18362.0\um\winnt.h
// typedef struct _IMAGE_OS2_HEADER {      // OS/2 .EXE header
//     WORD   ne_magic;                    // Magic number
//     CHAR   ne_ver;                      // Version number
//     CHAR   ne_rev;                      // Revision number
//     WORD   ne_enttab;                   // Offset of Entry Table
//     WORD   ne_cbenttab;                 // Number of bytes in Entry Table
//     LONG   ne_crc;                      // Checksum of whole file
//     WORD   ne_flags;                    // Flag word
//     WORD   ne_autodata;                 // Automatic data segment number
//     WORD   ne_heap;                     // Initial heap allocation
//     WORD   ne_stack;                    // Initial stack allocation
//     LONG   ne_csip;                     // Initial CS:IP setting
//     LONG   ne_sssp;                     // Initial SS:SP setting
//     WORD   ne_cseg;                     // Count of file segments
//     WORD   ne_cmod;                     // Entries in Module Reference Table
//     WORD   ne_cbnrestab;                // Size of non-resident name table
//     WORD   ne_segtab;                   // Offset of Segment Table
//     WORD   ne_rsrctab;                  // Offset of Resource Table
//     WORD   ne_restab;                   // Offset of resident name table
//     WORD   ne_modtab;                   // Offset of Module Reference Table
//     WORD   ne_imptab;                   // Offset of Imported Names Table
//     LONG   ne_nrestab;                  // Offset of Non-resident Names Table
//     WORD   ne_cmovent;                  // Count of movable entries
//     WORD   ne_align;                    // Segment alignment shift count
//     WORD   ne_cres;                     // Count of resource segments
//     BYTE   ne_exetyp;                   // Target Operating system
//     BYTE   ne_flagsothers;              // Other .EXE flags
//     WORD   ne_pretthunks;               // offset to return thunks
//     WORD   ne_psegrefbytes;             // offset to segment ref. bytes
//     WORD   ne_swaparea;                 // Minimum code swap area size
//     WORD   ne_expver;                   // Expected Windows version number
// } IMAGE_OS2_HEADER, * PIMAGE_OS2_HEADER;
