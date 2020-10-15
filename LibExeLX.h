#pragma once

#ifndef __LIBEXELX__
#define __LIBEXELX__

#ifndef __LIBEXETYPES__
#include "LibExeTypes.h"
#endif

#define OSF_FLAT_RESERVED 20

struct _EXE_HEADER_LX {
    WORD     signature;
    BYTE      byte_order;     /* the byte ordering of the .exe */
    BYTE      word_order;     /* the word ordering of the .exe */
    DWORD     level;          /* the exe format level */
    WORD     cpu_type;       /* the cpu type */
    WORD     os_type;        /* the operating system type */
    DWORD     version;        /* .exe version */
    DWORD     flags;          /* .exe flags */
    DWORD     num_pages;      /* # of pages in .exe */
    DWORD     start_obj;      /* starting object number */
    DWORD     eip;            /* starting value of eip */
    DWORD     stack_obj;      /* object # for stack pointer */
    DWORD     esp;            /* starting value of esp */
    DWORD     page_size;      /* .exe page size */
    union {
        DWORD     last_page;      /* size of last page - LE */
        DWORD     page_shift;     /* left shift for page offsets - LX */
    } l;
    DWORD     fixup_size;     /* fixup section size */
    DWORD     fixup_cksum;    /* fixup section checksum */
    DWORD     loader_size;    /* loader section size */
    DWORD     loader_cksum;   /* loader section checksum */
    DWORD     objtab_off;     /* object table offset */
    DWORD     num_objects;    /* number of objects in .exe */
    DWORD     objmap_off;     /* object page map offset */
    DWORD     idmap_off;      /* iterated data map offset */
    DWORD     rsrc_off;       /* offset of resource table */
    DWORD     num_rsrcs;      /* number of resource entries */
    DWORD     resname_off;    /* offset of resident names table */
    DWORD     entry_off;      /* offset of entry table */
    DWORD     moddir_off;     /* offset of module directives table */
    DWORD     num_moddirs;    /* number of module directives */
    DWORD     fixpage_off;    /* offset of fixup page table */
    DWORD     fixrec_off;     /* offset of fixup record table */
    DWORD     impmod_off;     /* offset of import module name table */
    DWORD     num_impmods;    /* # of entries in import mod name tbl */
    DWORD     impproc_off;    /* offset of import procedure name table */
    DWORD     cksum_off;      /* offset of per-page checksum table */
    DWORD     page_off;       /* offset of enumerated data pages */
    DWORD     num_preload;    /* number of preload pages */
    DWORD     nonres_off;     /* offset of non-resident names table */
    DWORD     nonres_size;    /* size of non-resident names table */
    DWORD     nonres_cksum;   /* non-resident name table checksum */
    DWORD     autodata_obj;   /* object # of autodata segment */
    DWORD     debug_off;      /* offset of the debugging information */
    DWORD     debug_len;      /* length of the debugging info */
    DWORD     num_inst_preload;   /* # of instance pages in preload sect*/
    DWORD     num_inst_demand;    /*# instance pages in demand load sect*/
    DWORD     heapsize;       /* size of heap - for 16-bit apps */
    DWORD     stacksize;      /* size of stack OS/2 only */
    union {                         /* pad to 196 bytes. */
        BYTE      reserved[OSF_FLAT_RESERVED];
        struct {
            BYTE      reserved1[8];   /* +0xB0 */
            DWORD     winresoff;        /* +0xB8 Windows VxD version info resource offset */
            DWORD     winreslen;        /* +0xBC Windows VxD version info resource lenght */
            WORD     device_ID;        /* +0xC0 Windows VxD device ID */
            WORD     DDK_version;      /* +0xC2 Windows VxD DDK version (0x030A) */
        } vxd;
    } r;
};
typedef _EXE_HEADER_LX EXE_HEADER_LX;

#endif  // __LIBEXELX__
