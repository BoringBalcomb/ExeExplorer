#pragma once

#ifndef __EXEEXPLORER_CMDLNARGS__

#define __EXEEXPLORER_CMDLNARGS__

void display_program_usage_help();
int process_command_line_arguments(int argc, char* argv[], char* env[]);

#endif  // __EXEEXPLORER_CMDLNARGS__
