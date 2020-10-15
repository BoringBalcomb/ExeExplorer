#pragma once

#ifndef __LIBEXETYPES__
#include "LibExeTypes.h"
#endif



/*

Old Executable
16-bit

PC DOS
DR DOS
MS-DOS
1, 2, 3, 4, ... ?6, ..., 6.22, ..., 7, ...? ~= Windows 95 - 1, ..., 2, 2.5 ~= Windows 95 A, B, C, OSR2, ... ?

Authoritative Reference(s)
?The MS-DOS Encyclopedia 1?
?The MS-DOS Encyclopedia 2?
The MS-DOS Encyclopedia 3
The MS-DOS Encyclopedia 4

New Executable

Portable Executable
...
PE32
PE32+
...
32-bit
64-bit
...


...
"This application must be run from Windows"
This Prgram cannot be run under...
...cannot run 16-bit applications...


.text
.data
.rdata
.reloc
?IATs?
?.bss?

*/

// stdint.h
typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

// minwindef.h
typedef unsigned long       DWORD;
typedef int                 BOOL;
typedef unsigned char       BYTE;
typedef unsigned short      WORD;

// winnt.h
typedef char CHAR;
typedef short SHORT;
typedef long LONG;

// // winnt.h
// #define MINCHAR     0x80        
// #define MAXCHAR     0x7f        
// #define MINSHORT    0x8000      
// #define MAXSHORT    0x7fff      
// #define MINLONG     0x80000000  
// #define MAXLONG     0x7fffffff  
// #define MAXBYTE     0xff        
// #define MAXWORD     0xffff      
// #define MAXDWORD    0xffffffff  



// IMAGE_DOS_HEADER image_dos_header;
// IMAGE_OS2_HEADER image_os2_header;
// IMAGE_VXD_HEADER image_vxd_header;
// IMAGE_FILE_HEADER image_file_header;
// IMAGE_OPTIONAL_HEADER32 image_optional_header32;
// IMAGE_OPTIONAL_HEADER64 image_optional_header64;

/* Page, Paragraph, Block, Segment */
#define SIZE_OF_PARAGRAPH 16  // 16-byte 'paragraph' (0x10) (0x10)
#define SIZE_OF_PAGE 512  // 512-byte 'page' (0x200) (0x0200)
#define SIZE_OF_BLOCK 512  // 512-byte 'block' (0x200) (0x0200)
#define SIZE_OF_RECORD 512  // 512-byte 'record' (0x200) (0x0200)
#define SIZE_OF_SEGMENT 65536  // 65536-byte 'segment' (64 KB) (0x10000) (0x00010000)

#define SIZE_OF_CHUNK 32768  // 32768-byte 'chunks' (32 KB) (0x8000) (0x8000)

#define EXE_HEADER_LENGTH 512

#define EXE_SEGMENT_COUNT_MAXIMUM 256

#define EXE_RELOCATION_POINTER_TABLE_LENGTH_MAXIMUM 1024  // 256 * (2 + 2) ... max(WORD) * (sizeof(WORD) + sizeof(WORD)

#define COM_SIZE_MAXIMUM 65536  // 65,536 B (64KB)

#define EXE_HEADER_SIZE_DEFAULT 512  // (0x200, 0x0200, 200h)

#define OFFSET_TO_EXE_OE_HEADER       0x00
#define OFFSET_TO_EXE_NE_HEADER       0x00

#define SIZEOF_TO_EXE_OE_HEADER       32
#define SIZEOF_TO_EXE_NE_HEADER       64
#define SIZEOF_TO_EXE_EE_HEADER       512

#define OFFSET_TO_EXE_SIGNATURE       0x00    // e_magic;   WORD @ Byte  0
#define OFFSET_TO_RPT_OFFSET          0x18    // e_lfarlc;  WORD @ Byte 24 ["Relative byte offset from beginning of run file to relocation table."]
#define OFFSET_TO_EXE_EE_SIGNATURE    0x3C    // e_lfanew; DWORD @ Byte 60; [NOTE: "EE" ~= "Expanded EXE"/"Extended EXE"]

#define EXE_RPT_OFFSET_DEFAULT_OE_28     28      // (0x1C, 0x001C, 1Ch)
#define EXE_OE1_RPT_OFFSET_DEFAULT       28      // (0x1C, 0x001C, 1Ch)
#define EXE_OE2_RPT_OFFSET_DEFAULT       32      // (0x20, 0x0020, 20h)
#define EXE_EE_RPT_OFFSET_DEFAULT        64      // (0x40, 0x0040, 40h)
#define EXE_NE_RPT_OFFSET_DEFAULT        64      // (0x40, 0x0040, 40h)
#define EXE_OS2_RPT_OFFSET_DEFAULT       64      // (0x40, 0x0040, 40h)
#define EXE_PE_RPT_OFFSET_DEFAULT        64      // (0x40, 0x0040, 40h)



/*
ExeExplorerHeaders.ods; WKS: MagSig
M	Z	77	90	4D	5A	0x5A4D
Z	M	90	77	5A	4D	0x4D5A
N	E	78	69	4E	45	0x454E
L	E	76	69	4C	45	0x454C
L	X	76	88	4C	58	0x584C
P	E	80	69	50	45	0x4550
*/
#define EXE_TYPE_SIGNATURE_MZ       0x5A4D     // "MZ"
#define EXE_TYPE_SIGNATURE_ZM       0x4D5A     // "ZM"  [SEE: RBIL (Table 01593) "...used by some very early DOS linkers ... supported as an alternate ... by MS-DOS, PC DOS, PTS-DOS, and S/DOS"]
// DNE!! #define EXE_TYPE_SIGNATURE_OE
#define EXE_TYPE_SIGNATURE_NE       0x454E     // "NE"
#define EXE_TYPE_SIGNATURE_LE       0x454C     // "LE"
#define EXE_TYPE_SIGNATURE_LX       0x584C     // "LX"
#define EXE_TYPE_SIGNATURE_PE       0x4550     // "PE" // [SEE: docs.microsoft.com pe-format "Signature (Image Only) ...is a 4-byte signature ... "PE\0\0" (the letters "P" and "E" followed by two null bytes)"
#define EXE_TYPE_SIGNATURE_PE32     0x10b
#define EXE_TYPE_SIGNATURE_PE64     0x20b       // exe_header_pe->OptionalHeader.Magic

// // winnt.h
// #ifndef _MAC
// #define IMAGE_SEPARATE_DEBUG_SIGNATURE 0x4944
// #define NON_PAGED_DEBUG_SIGNATURE      0x494E
// #else
// #define IMAGE_SEPARATE_DEBUG_SIGNATURE 0x4449  // DI
// #define NON_PAGED_DEBUG_SIGNATURE      0x4E49  // NI
// #endif

// // winnt.h
// #define IMAGE_ARCHIVE_START                  "!<arch>\n"


// // ~= \Microsoft Programmers Library 1.3 (March 1991)\SAMPCODE\MSJ\MSJV4_4\OVERLAYS\EXEHDR.H
// struct _RELOCATION_TABLE__ENTRY {
//     WORD offset;
//     WORD segment;
// } RELOCATION_TABLE__ENTRY;
// typedef _RELOCATION_TABLE__ENTRY RELOCATION_TABLE__ENTRY;
// extern RELOCATION_TABLE__ENTRY* relocation_table__entry;

struct _EXE_HEADER_RELOCATION_TABLE_ENTRY {
    WORD offset;
    WORD segment;
} ;
typedef _EXE_HEADER_RELOCATION_TABLE_ENTRY EXE_HEADER_RELOCATION_TABLE_ENTRY;
extern EXE_HEADER_RELOCATION_TABLE_ENTRY* exe_header_relocation_table_entry;

struct _EXE_HEADER_RELOCATION_TABLE {
    int relocation_table_entry_count;
    EXE_HEADER_RELOCATION_TABLE_ENTRY* exe_header_relocation_table_entry;
};
typedef _EXE_HEADER_RELOCATION_TABLE EXE_HEADER_RELOCATION_TABLE;
extern EXE_HEADER_RELOCATION_TABLE* exe_header_relocation_table;


// // winnt.h ... "// Image Format"
// // typedef struct _IMAGE_DOS_HEADER { ... } IMAGE_DOS_HEADER, * PIMAGE_DOS_HEADER;
// // Microsoft MS-DOS Version 3.3 Programmer's Reference Chapter 6 EXE File Structure and Loading
// typedef struct _EXE_HEADER_OE {      // DOS .EXE header
//     WORD   e_magic;                     // Must contain 4DH, 5AH.
//     WORD   e_cblp;                      // Number of bytes contained in last page; useful for reading overlays.
//     WORD   e_cp;                        // Size of the file in 512-byte pages, including the header.
//     WORD   e_crlc;                      // Number of relocation entries in table.
//     WORD   e_cparhdr;                   // Size of the header in 16-byte paragraphs. Used to locate the beginning of the load module in the file.
//     WORD   e_minalloc;                  // Minimum number of 16-byte paragraphs required above the end of the loaded program.
//     WORD   e_maxalloc;                  // Maximum number of 16-byte paragraphs required above the end of the loaded program. If both minalloc and maxalloc are 0, the program is loaded as high as possible.
//     WORD   e_ss;                        // Initial value to be loaded into stack segment before starting program execution. Must be adjusted by relocation.
//     WORD   e_sp;                        // Value to be loaded into the SP register before starting program execution.
//     WORD   e_csum;                      // Negative sum of all the words in the file.
//     WORD   e_ip;                        // Initial value to be loaded into the IP register before starting program execution.
//     WORD   e_cs;                        // Initial value to be loaded into the CS register before starting program execution. Must be adjusted by relocation.
//     WORD   e_lfarlc;                    // Relative byte offset from beginning of run file to relocation table.
//     WORD   e_ovno;                      // The number of the overlay as generated by link.
// } EXE_HEADER_OE, * PTR_EXE_HEADER_OE;
// 
// // winnt.h
// // typedef struct _IMAGE_DOS_HEADER { ... } IMAGE_DOS_HEADER, * PIMAGE_DOS_HEADER;
// typedef struct _EXE_HEADER_NE {      // DOS .EXE header
//     WORD   e_magic;                     // Magic number
//     WORD   e_cblp;                      // Bytes on last page of file
//     WORD   e_cp;                        // Pages in file
//     WORD   e_crlc;                      // Relocations
//     WORD   e_cparhdr;                   // Size of header in paragraphs
//     WORD   e_minalloc;                  // Minimum extra paragraphs needed
//     WORD   e_maxalloc;                  // Maximum extra paragraphs needed
//     WORD   e_ss;                        // Initial (relative) SS value
//     WORD   e_sp;                        // Initial SP value
//     WORD   e_csum;                      // Checksum
//     WORD   e_ip;                        // Initial IP value
//     WORD   e_cs;                        // Initial (relative) CS value
//     WORD   e_lfarlc;                    // File address of relocation table
//     WORD   e_ovno;                      // Overlay number
//     WORD   e_res[4];                    // Reserved words
//     WORD   e_oemid;                     // OEM identifier (for e_oeminfo)
//     WORD   e_oeminfo;                   // OEM information; e_oemid specific
//     WORD   e_res2[10];                  // Reserved words
//     LONG   e_lfanew;                    // File address of new exe header
// } EXE_HEADER_NE, * PTR_EXE_HEADER_NE;

// // winnt.h
// #ifndef _MAC
// #include "pshpack4.h"                   // 4 byte packing is the default
// #define IMAGE_DOS_SIGNATURE                 0x5A4D      // MZ
// #define IMAGE_OS2_SIGNATURE                 0x454E      // NE
// #define IMAGE_OS2_SIGNATURE_LE              0x454C      // LE
// #define IMAGE_VXD_SIGNATURE                 0x454C      // LE
// #define IMAGE_NT_SIGNATURE                  0x00004550  // PE00
// #include "pshpack2.h"                   // 16 bit headers are 2 byte packed
// #else
// #include "pshpack1.h"
// #define IMAGE_DOS_SIGNATURE                 0x4D5A      // MZ
// #define IMAGE_OS2_SIGNATURE                 0x4E45      // NE
// #define IMAGE_OS2_SIGNATURE_LE              0x4C45      // LE
// #define IMAGE_NT_SIGNATURE                  0x50450000  // PE00
// #endif

// // winnt.h
// #define IMAGE_NT_OPTIONAL_HDR32_MAGIC      0x10b
// #define IMAGE_NT_OPTIONAL_HDR64_MAGIC      0x20b
// #define IMAGE_ROM_OPTIONAL_HDR_MAGIC       0x107

void get_file_size_from_fseek(FILE* ptrStreamFileIn, int& file_size_from_fseek);
