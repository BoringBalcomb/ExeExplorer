#include <iostream>   // std::cerr, cin, cout, endl
#include <string>     // std::string // overload for << that supports std::cout << "Some String: " << std::string strSearchPath = "" << std::endl;
#include <string.h>   // strcpy_s, strcat_s
#include <windows.h>  // CP_ACP, HANDLE, INVALID_HANDLE_VALUE, WIN32_FIND_DATA, FindFirstFile, FindNextFile, WideCharToMultiByte

#include "ExeExplorer.h"



void display_program_usage_help()
{
	if (DEBUG_MODE) std::cout << "DEBUG: display_program_usage_help()" << std::endl;

	const char* program_usage_help_text = "Usage: ExeExplore.exe -f <file_path_and_name>\n";
	std::cout << program_usage_help_text << std::endl;

	exit(1);
}

int process_command_line_arguments(int argc, char* argv[], char* env[])
{
	if (DEBUG_MODE) std::cout << "DEBUG: command_line_arguments()" << std::endl;

	if (DEBUG_VERBOSE_MODE)
	{
		for (int i = 0; i < argc; ++i)
		{
			std::cout << "DEBUG: argv[" << i << "]: " << argv[i] << std::endl;
		}
	}

	if (argc < 1)
	{
		if (DEBUG_MODE) std::cout << "if (argc < 1)" << std::endl;
		display_program_usage_help();
	}

	if (argc != 3)
	{
		if (DEBUG_MODE) std::cout << "DEBUG: if (argc != 3)" << std::endl;
		display_program_usage_help();
	}

	if (strcmp(argv[1], "-d") == 0)
	{
		if (DEBUG_MODE) std::cout << "DEBUG: if (strcmp(argv[1], \" -d\") == 0)" << std::endl;
		program_operational_parameters.directory_path = argv[2];
		return DIRECTORY_MODE;
	}
	else if (strcmp(argv[1], "-f") == 0)
	{
		if (DEBUG_MODE) std::cout << "DEBUG: if (strcmp(argv[1], \" -f\") == 0)" << std::endl;
		program_operational_parameters.file_path_and_name = argv[2];
		if (DEBUG_MODE) std::cout << "DEBUG: program_operational_parameters.file_path_and_name: " << program_operational_parameters.file_path_and_name << std::endl;
		return FILE_MODE;
	}
	else if (strcmp(argv[1], "-m") == 0)
	{
		return MENU_MODE;
	}
	else
	{
		display_program_usage_help();
	}

	return 0;

}
