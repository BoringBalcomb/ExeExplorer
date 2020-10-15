#pragma once

#ifndef __LIBEXEPE__
#define __LIBEXEPE__

#ifndef __LIBEXETYPES__
#include "LibExeTypes.h"
#endif

/*

https://docs.microsoft.com/en-us/windows/win32/debug/pe-format

...

Optional Header (Image Only)
Every image file has an optional header that provides information to the loader.
This header is optional in the sense that some files (specifically, object files) do not have it.
For image files, this header is required.
An object file can have an optional header, but generally this header has no function in an object file except to increase its size.

Note that the size of the optional header is not fixed.
The SizeOfOptionalHeader field in the COFF header must be used to validate that a probe into the file for a particular data directory does not go beyond SizeOfOptionalHeader.
For more information, see COFF File Header (Object and Image).
|-> https://docs.microsoft.com/en-us/windows/win32/debug/pe-format#coff-file-header-object-and-image

The NumberOfRvaAndSizes field of the optional header should also be used to ensure that no probe for a particular data directory entry goes beyond the optional header.
In addition, it is important to validate the optional header magic number for format compatibility.

The optional header magic number determines whether an image is a PE32 or PE32+ executable.

OPTIONAL HEADER (IMAGE ONLY)
Magic number	PE format
0x10b			PE32
0x20b			PE32+

PE32+ images allow for a 64-bit address space while limiting the image size to 2 gigabytes.
Other PE32+ modifications are addressed in their respective sections.

...

*/

// #include <winnt.h>
// _IMAGE_NT_HEADERS ->
//                      IMAGE_FILE_HEADER
//                      IMAGE_OPTIONAL_HEADER

struct _EXE_HEADER_PE_IMAGE_DATA_DIRECTORY {
    DWORD   VirtualAddress;
    DWORD   Size;
};
typedef _EXE_HEADER_PE_IMAGE_DATA_DIRECTORY EXE_HEADER_PE_IMAGE_DATA_DIRECTORY;

#define EXE_HEADER_PE_IMAGE_NUMBEROF_DIRECTORY_ENTRIES      16

#define EXE_HEADER_PE_IMAGE_SIZEOF_FILE_HEADER              20

struct _EXE_HEADER_PE_IMAGE_FILE_HEADER {
    WORD    Machine;
    WORD    NumberOfSections;
    DWORD   TimeDateStamp;
    DWORD   PointerToSymbolTable;
    DWORD   NumberOfSymbols;
    WORD    SizeOfOptionalHeader;
    WORD    Characteristics;
};
typedef _EXE_HEADER_PE_IMAGE_FILE_HEADER EXE_HEADER_PE_IMAGE_FILE_HEADER;

struct _EXE_HEADER_PE_IMAGE_OPTIONAL_HEADER {
    // Standard fields
    WORD    Magic;
    BYTE    MajorLinkerVersion;
    BYTE    MinorLinkerVersion;
    DWORD   SizeOfCode;
    DWORD   SizeOfInitializedData;
    DWORD   SizeOfUninitializedData;
    DWORD   AddressOfEntryPoint;
    DWORD   BaseOfCode;
    DWORD   BaseOfData;
    // NT additional fields
    DWORD   ImageBase;
    DWORD   SectionAlignment;
    DWORD   FileAlignment;
    WORD    MajorOperatingSystemVersion;
    WORD    MinorOperatingSystemVersion;
    WORD    MajorImageVersion;
    WORD    MinorImageVersion;
    WORD    MajorSubsystemVersion;
    WORD    MinorSubsystemVersion;
    DWORD   Win32VersionValue;
    DWORD   SizeOfImage;
    DWORD   SizeOfHeaders;
    DWORD   CheckSum;
    WORD    Subsystem;
    WORD    DllCharacteristics;
    DWORD   SizeOfStackReserve;
    DWORD   SizeOfStackCommit;
    DWORD   SizeOfHeapReserve;
    DWORD   SizeOfHeapCommit;
    DWORD   LoaderFlags;
    DWORD   NumberOfRvaAndSizes;
    EXE_HEADER_PE_IMAGE_DATA_DIRECTORY DataDirectory[EXE_HEADER_PE_IMAGE_NUMBEROF_DIRECTORY_ENTRIES];
};
typedef _EXE_HEADER_PE_IMAGE_OPTIONAL_HEADER EXE_HEADER_PE_IMAGE_OPTIONAL_HEADER;

// struct _IMAGE_NT_HEADERS {
struct _EXE_HEADER_PE {
    DWORD Signature;
    EXE_HEADER_PE_IMAGE_FILE_HEADER FileHeader;
    EXE_HEADER_PE_IMAGE_OPTIONAL_HEADER OptionalHeader;
};
// typedef _IMAGE_NT_HEADERS IMAGE_NT_HEADERS32;
typedef _EXE_HEADER_PE EXE_HEADER_PE;

#endif  // __libexepe__
