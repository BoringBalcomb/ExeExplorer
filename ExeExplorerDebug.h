#pragma once

#ifndef __EXEEXPLORERDEBUG__
#define __EXEEXPLORERDEBUG__

#ifndef __LIBEXEYPES__
#include "LibExeTypes.h"
#endif

struct _EXE_FILE_DEBUG {

	int is_COM;
	int is_EXE;

	int is_COFF;
	int is_DLL;
	int is_ELF;
	int is_LIB;
	int is_OBJ;
	int is_VXD;
	int is_WIN386;

	int is_EXE_MZ;
	int is_EXE_ZM;
	int is_EXE_OE;
	int is_EXE_NE;
	int is_EXE_EE;
	int is_EXE_LE;
	int is_EXE_LX;
	int is_EXE_OS2;
	int is_EXE_PE;
	int is_EXE_EPE;
	int is_EXE_PE32;
	int is_EXE_PE64;

	int is_EXE_Dos16;
	int is_EXE_Os2;
	int is_EXE_Win16;
	int is_EXE_Win32;
	int is_EXE_Win64;

	WORD file_address_of_new_exe_header;

	int has_default_header_size;
	int has_space_between_hdr_and_rpt;
	int has_space_between_rpt_and_img;

	int has_rpt_offset_at_28;
	int has_rpt_offset_at_32;
	int has_rpt_offset_at_64;
	int has_rpt_offset_at_lte_28;
	int has_rpt_offset_at_lte_32;
	int has_rpt_offset_at_lte_64;
	int has_rpt_offset_at_gt_28;
	int has_rpt_offset_at_gt_32;
	int has_rpt_offset_at_gt_64;
	int has_rpt_offset_at_gt_28_lte_32;
	int has_rpt_offset_at_gt_32_lte_64;

};
typedef _EXE_FILE_DEBUG EXE_FILE_DEBUG;
// extern EXE_FILE_DEBUG exe_file_debug;

#endif  // __EXEEXPLORERDEBUG__
