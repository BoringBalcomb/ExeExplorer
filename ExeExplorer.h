#pragma once

#ifndef __EXEEXPLORERDEBUG__
#include "ExeExplorerDebug.h"
#endif

#ifndef __LIBEXEOE32__
#include "LibExeOE32.h"
#endif

#ifndef __LIBEXENE__
#include "LibExeNE.h"
#endif

#ifndef __LIBEXELE__
#include "LibExeLE.h"
#endif

#ifndef __LIBEXELX__
#include "LibExeLX.h"
#endif

#ifndef __LIBEXEPE__
#include "LibExePE.h"
#endif

extern unsigned char DEBUG_MODE;
extern unsigned char DEBUG_VERBOSE_MODE;

/* BCpp30: .\BORLANDC\INCLUDE\DIR.H */
#define MAXDIR 66

/* VCpp12: C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include\stdlib.h */
/* Definition of the argument values for the exit() function */
// #define EXIT_SUCCESS    0
// #define EXIT_FAILURE    1

enum operation_mode
{
	DIRECTORY_MODE = 1,
	FILE_MODE = 2,
	ENTRY_MODE = 3,
	MENU_MODE = 4
};

struct _PROGRAM_OPERATIONAL_PARAMETERS
{
	bool DEBUG_MODE;
	char current_working_directory[255];
	int operation_mode;
	char* directory_path;
	char* file_path_and_name;
};
typedef struct _PROGRAM_OPERATIONAL_PARAMETERS PROGRAM_OPERATIONAL_PARAMETERS;
extern PROGRAM_OPERATIONAL_PARAMETERS program_operational_parameters;

extern const char* data_directory_path;
extern const char* directory_path;
extern const char* file_name;
extern char file_path_name[];

extern FILE* ptrStreamFileIn;
extern int posStreamFileIn;

extern char exe_file_debug_buffer[];
extern EXE_FILE_DEBUG* exe_file_debug;
extern int sizeof__exe_file_debug;

extern char exe_header_oe_buffer[];
extern EXE_HEADER_OE_32* exe_header_oe;
extern int sizeof__exe_header_oe;

extern char exe_header_ne_buffer[];
extern EXE_HEADER_NE* exe_header_ne;
extern int sizeof__exe_header_ne;

extern WORD exe_ee_signature;

extern char exe_header_le_buffer[];
extern EXE_HEADER_LE* exe_header_le;
extern int sizeof__exe_header_le;

extern char exe_header_lx_buffer[];
extern EXE_HEADER_LX* exe_header_lx;
extern int sizeof__exe_header_lx;

extern char exe_header_pe_buffer[];
extern EXE_HEADER_PE* exe_header_pe;
extern int sizeof__exe_header_pe;
