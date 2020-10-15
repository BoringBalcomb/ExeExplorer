#include <iostream>  // cout, endl;

#include "ExeExplorer.h"  // DEBUG_MODE
#include "ExeExplorerDeduce.h"  // deduce_executable_type()



void test_exe_files()
{
    if (DEBUG_MODE) std::cout << "DEBUG: test_exe_files()" << std::endl;

    std::cout << std::endl << "- ---  ---  ---  ---  ---  ---  ---  ---  ---  --- -" << std::endl << std::endl;

    std::cout << "File Path and Name: " << program_operational_parameters.file_path_and_name << std::endl;

    ptrStreamFileIn = fopen(program_operational_parameters.file_path_and_name, "rb");

    deduce_executable_type();

    fclose(ptrStreamFileIn);

    std::cout << std::endl << "- ---  ---  ---  ---  ---  ---  ---  ---  ---  --- -" << std::endl << std::endl;

}
