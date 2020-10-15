#include <iostream>  // cout, endl;

#include "ExeExplorer.h"
#include "ExeExplorer_CmdLnArgs.h"
#include "ExeExplorerDebug.h"
#include "ExeExplorerTest.h"

#include "LibExeOE32.h"  // EXE_HEADER_OE_32



unsigned char DEBUG_MODE = 1;
unsigned char DEBUG_VERBOSE_MODE = 0;
char current_working_directory[255];
PROGRAM_OPERATIONAL_PARAMETERS program_operational_parameters;

const char* data_directory_path;
const char* directory_path;
const char* file_name;
char file_path_name[1024];

FILE* ptrStreamFileIn;
int posStreamFileIn;

char exe_file_debug_buffer[512];
EXE_FILE_DEBUG* exe_file_debug;
int sizeof__exe_file_debug;

char exe_header_oe_buffer[512];
EXE_HEADER_OE_32* exe_header_oe;
int sizeof__exe_header_oe;

char exe_header_ne_buffer[512];
EXE_HEADER_NE* exe_header_ne;
int sizeof__exe_header_ne;

WORD exe_ee_signature;

char exe_header_le_buffer[512];
EXE_HEADER_LE* exe_header_le;
int sizeof__exe_header_le;

char exe_header_lx_buffer[512];
EXE_HEADER_LX* exe_header_lx;
int sizeof__exe_header_lx;

char exe_header_pe_buffer[512];
EXE_HEADER_PE* exe_header_pe;
int sizeof__exe_header_pe;



int main(int argc, char * argv[], char * env[])
{
    if (DEBUG_MODE) std::cout << "DEBUG: main()" <<std::endl;

    program_operational_parameters.operation_mode = process_command_line_arguments(argc, argv, env);

    data_directory_path = "D:\\devel_data\\RE_EXE\\";

    test_exe_files();

    return 0;
}
