#include <iostream>  // cout, endl;

#include "ExeExplorer.h"  // DEBUG_MODE

#include "LibExe.h"  // EXE_TYPE_SIGNATURE_MZ
#include "LibExeOE32.h"  // EXE_HEADER_OE_32


void display_exe_header_oe()
{
    if (DEBUG_MODE) std::cout << "DEBUG: display_exe_header_oe()" << std::endl;

    std::cout << "exe_header_oe->e_magic: " << exe_header_oe->e_magic << std::endl;
    std::cout << "exe_header_oe->e_magic: " << "0x" << std::hex << exe_header_oe->e_magic << std::dec << std::endl;

    std::cout << "exe_header_oe->e_cblp: " << exe_header_oe->e_cblp << std::endl;
    std::cout << "exe_header_oe->e_cblp: " << "0x" << std::hex << exe_header_oe->e_cblp << std::dec << std::endl;

    std::cout << "exe_header_oe->e_cp: " << exe_header_oe->e_cp << std::endl;
    std::cout << "exe_header_oe->e_cp: " << "0x" << std::hex << exe_header_oe->e_cp << std::dec << std::endl;

    std::cout << "exe_header_oe->e_crlc: " << exe_header_oe->e_crlc << std::endl;
    std::cout << "exe_header_oe->e_crlc: " << "0x" << std::hex << exe_header_oe->e_crlc << std::dec << std::endl;

    std::cout << "exe_header_oe->e_cparhdr: " << exe_header_oe->e_cparhdr << std::endl;
    std::cout << "exe_header_oe->e_cparhdr: " << "0x" << std::hex << exe_header_oe->e_cparhdr << std::dec << std::endl;

    std::cout << "exe_header_oe->e_minalloc: " << exe_header_oe->e_minalloc << std::endl;
    std::cout << "exe_header_oe->e_minalloc: " << "0x" << std::hex << exe_header_oe->e_minalloc << std::dec << std::endl;

    std::cout << "exe_header_oe->e_maxalloc: " << exe_header_oe->e_maxalloc << std::endl;
    std::cout << "exe_header_oe->e_maxalloc: " << "0x" << std::hex << exe_header_oe->e_maxalloc << std::dec << std::endl;

    std::cout << "exe_header_oe->e_ss: " << exe_header_oe->e_ss << std::endl;
    std::cout << "exe_header_oe->e_ss: " << "0x" << std::hex << exe_header_oe->e_ss << std::dec << std::endl;

    std::cout << "exe_header_oe->e_sp: " << exe_header_oe->e_sp << std::endl;
    std::cout << "exe_header_oe->e_sp: " << "0x" << std::hex << exe_header_oe->e_sp << std::dec << std::endl;

    std::cout << "exe_header_oe->e_csum: " << exe_header_oe->e_csum << std::endl;
    std::cout << "exe_header_oe->e_csum: " << "0x" << std::hex << exe_header_oe->e_csum << std::dec << std::endl;

    std::cout << "exe_header_oe->e_ip: " << exe_header_oe->e_ip << std::endl;
    std::cout << "exe_header_oe->e_ip: " << "0x" << std::hex << exe_header_oe->e_ip << std::dec << std::endl;

    std::cout << "exe_header_oe->e_cs: " << exe_header_oe->e_cs << std::endl;
    std::cout << "exe_header_oe->e_cs: " << "0x" << std::hex << exe_header_oe->e_cs << std::dec << std::endl;

    std::cout << "exe_header_oe->e_lfarlc: " << exe_header_oe->e_lfarlc << std::endl;
    std::cout << "exe_header_oe->e_lfarlc: " << "0x" << std::hex << exe_header_oe->e_lfarlc << std::dec << std::endl;

    std::cout << "exe_header_oe->e_ovno: " << exe_header_oe->e_ovno << std::endl;
    std::cout << "exe_header_oe->e_ovno: " << "0x" << std::hex << exe_header_oe->e_ovno << std::dec << std::endl;

    std::cout << "exe_header_oe->e_opt[0]: " << exe_header_oe->e_opt[0] << std::endl;
    std::cout << "exe_header_oe->e_opt[0]: " << "0x" << std::hex << exe_header_oe->e_opt[0] << std::dec << std::endl;

    std::cout << "exe_header_oe->e_opt[1]: " << exe_header_oe->e_opt[1] << std::endl;
    std::cout << "exe_header_oe->e_opt[1]: " << "0x" << std::hex << exe_header_oe->e_opt[1] << std::dec << std::endl;

}

void display_exe_header_ne()
{
    if (DEBUG_MODE) std::cout << "DEBUG: display_exe_header_ne()" << std::endl;

    std::cout << "exe_header_ne->e_magic: " << exe_header_ne->e_magic << std::endl;
    std::cout << "exe_header_ne->e_magic: " << "0x" << std::hex << exe_header_ne->e_magic << std::dec << std::endl;

    std::cout << "exe_header_ne->e_cblp: " << exe_header_ne->e_cblp << std::endl;
    std::cout << "exe_header_ne->e_cblp: " << "0x" << std::hex << exe_header_ne->e_cblp << std::dec << std::endl;

    std::cout << "exe_header_ne->e_cp: " << exe_header_ne->e_cp << std::endl;
    std::cout << "exe_header_ne->e_cp: " << "0x" << std::hex << exe_header_ne->e_cp << std::dec << std::endl;

    std::cout << "exe_header_ne->e_crlc: " << exe_header_ne->e_crlc << std::endl;
    std::cout << "exe_header_ne->e_crlc: " << "0x" << std::hex << exe_header_ne->e_crlc << std::dec << std::endl;

    std::cout << "exe_header_ne->e_cparhdr: " << exe_header_ne->e_cparhdr << std::endl;
    std::cout << "exe_header_ne->e_cparhdr: " << "0x" << std::hex << exe_header_ne->e_cparhdr << std::dec << std::endl;

    std::cout << "exe_header_ne->e_minalloc: " << exe_header_ne->e_minalloc << std::endl;
    std::cout << "exe_header_ne->e_minalloc: " << "0x" << std::hex << exe_header_ne->e_minalloc << std::dec << std::endl;

    std::cout << "exe_header_ne->e_maxalloc: " << exe_header_ne->e_maxalloc << std::endl;
    std::cout << "exe_header_ne->e_maxalloc: " << "0x" << std::hex << exe_header_ne->e_maxalloc << std::dec << std::endl;

    std::cout << "exe_header_ne->e_ss: " << exe_header_ne->e_ss << std::endl;
    std::cout << "exe_header_ne->e_ss: " << "0x" << std::hex << exe_header_ne->e_ss << std::dec << std::endl;

    std::cout << "exe_header_ne->e_sp: " << exe_header_ne->e_sp << std::endl;
    std::cout << "exe_header_ne->e_sp: " << "0x" << std::hex << exe_header_ne->e_sp << std::dec << std::endl;

    std::cout << "exe_header_ne->e_csum: " << exe_header_ne->e_csum << std::endl;
    std::cout << "exe_header_ne->e_csum: " << "0x" << std::hex << exe_header_ne->e_csum << std::dec << std::endl;

    std::cout << "exe_header_ne->e_ip: " << exe_header_ne->e_ip << std::endl;
    std::cout << "exe_header_ne->e_ip: " << "0x" << std::hex << exe_header_ne->e_ip << std::dec << std::endl;

    std::cout << "exe_header_ne->e_cs: " << exe_header_ne->e_cs << std::endl;
    std::cout << "exe_header_ne->e_cs: " << "0x" << std::hex << exe_header_ne->e_cs << std::dec << std::endl;

    std::cout << "exe_header_ne->e_lfarlc: " << exe_header_ne->e_lfarlc << std::endl;
    std::cout << "exe_header_ne->e_lfarlc: " << "0x" << std::hex << exe_header_ne->e_lfarlc << std::dec << std::endl;

    std::cout << "exe_header_ne->e_ovno: " << exe_header_ne->e_ovno << std::endl;
    std::cout << "exe_header_ne->e_ovno: " << "0x" << std::hex << exe_header_ne->e_ovno << std::dec << std::endl;

    std::cout << "exe_header_ne->e_res[0]: " << exe_header_ne->e_res[0] << std::endl;
    std::cout << "exe_header_ne->e_res[0]: " << "0x" << std::hex << exe_header_ne->e_res[0] << std::dec << std::endl;

    std::cout << "exe_header_ne->e_oemid: " << exe_header_ne->e_oemid << std::endl;
    std::cout << "exe_header_ne->e_oemid: " << "0x" << std::hex << exe_header_ne->e_oemid << std::dec << std::endl;

    std::cout << "exe_header_ne->e_oeminfo: " << exe_header_ne->e_oeminfo << std::endl;
    std::cout << "exe_header_ne->e_oeminfo: " << "0x" << std::hex << exe_header_ne->e_oeminfo << std::dec << std::endl;

    std::cout << "exe_header_ne->e_res2[0]: " << exe_header_ne->e_res2[0] << std::endl;
    std::cout << "exe_header_ne->e_res2[0]: " << "0x" << std::hex << exe_header_ne->e_res2[0] << std::dec << std::endl;

    std::cout << "exe_header_ne->e_lfanew: " << exe_header_ne->e_lfanew << std::endl;
    std::cout << "exe_header_ne->e_lfanew: " << "0x" << std::hex << exe_header_ne->e_lfanew << std::dec << std::endl;

}

void deduce_executable_type()
{
    if (DEBUG_MODE) std::cout << "DEBUG: deduce_executable_type()" << std::endl;

    fseek(ptrStreamFileIn, 0, SEEK_SET);

    fread(exe_header_oe_buffer, 512, 1, ptrStreamFileIn);

    exe_header_oe = (EXE_HEADER_OE_32*)exe_header_oe_buffer;

    // display_exe_header_oe();

    if (DEBUG_MODE) std::cout << std::endl << "DEBUG: BEGIN: Executable Type Deduction" << std::endl << std::endl;

    if (DEBUG_MODE) std::cout << std::endl << "DEBUG: BEGIN: TEST: EXE MagSig" << std::endl << std::endl;

    // EXE_FILE_DEBUG* exe_file_debug = (EXE_FILE_DEBUG * )malloc(sizeof *exe_file_debug);
    exe_file_debug = (EXE_FILE_DEBUG*)exe_file_debug_buffer;

    /*
        TEST:
            Magic / File Type Signature
    */

    if (exe_header_oe->e_magic == EXE_TYPE_SIGNATURE_MZ)
    {
        exe_file_debug->is_EXE = 1;
        exe_file_debug->is_EXE_MZ = 1;
        exe_file_debug->is_EXE_ZM = 0;
        std::cout << "SUCESS: This file is a \"MZ\" Executable file!" << std::endl;
    }
    else if (exe_header_oe->e_magic == EXE_TYPE_SIGNATURE_ZM)
    {
        exe_file_debug->is_EXE = 1;
        exe_file_debug->is_EXE_MZ = 0;
        exe_file_debug->is_EXE_ZM = 1;
        std::cout << "SUCESS: This file is a \"ZM\" Executable file!" << std::endl;
    }
    else
    {
        std::cout << "FAILURE: This file is NOT an Executable file! (NOT an EXE, neither \"MZ\" nor \"ZM\")" << std::endl;
        return;
    }

    /*
        TEST:
            Offset to Relocation Pointer Table
    */

    if (exe_header_oe->e_lfarlc == 0x20)
    {
        exe_file_debug->is_EXE_OE = 1;
        std::cout << "SUCESS: This file is an 'OE' Executable file!" << std::endl;
    }
    else if (exe_header_oe->e_lfarlc >= 0x40)
    {
        exe_file_debug->is_EXE_EE = 1;
        std::cout << "SUCESS: This file is an /Extended Executable/ file!" << std::endl;
    }

    /*
        TEST:
            Offset to Relocation Pointer Table
    */

    fseek(ptrStreamFileIn, 0, SEEK_SET);

    fread(exe_header_ne_buffer, 512, 1, ptrStreamFileIn);

    exe_header_ne = (EXE_HEADER_NE*)exe_header_ne_buffer;

    // display_exe_header_ne();

    /*
        TEST:
            LE, LX, PE
    */

    fseek(ptrStreamFileIn, exe_header_ne->e_lfanew, SEEK_SET);

    fread(&exe_ee_signature, sizeof(exe_ee_signature), 1, ptrStreamFileIn);

    if (exe_ee_signature == EXE_TYPE_SIGNATURE_NE)
    {
        exe_file_debug->is_EXE_NE = 1;
        std::cout << "SUCESS: This file is a \"NE\" Executable file!" << std::endl;
    }
    else if (exe_ee_signature == EXE_TYPE_SIGNATURE_LE)
    {
        exe_file_debug->is_EXE_LE = 1;
        std::cout << "SUCESS: This file is a \"LE\" Executable file!" << std::endl;
    }
    else if (exe_ee_signature == EXE_TYPE_SIGNATURE_LX)
    {
        exe_file_debug->is_EXE_LX = 1;
        std::cout << "SUCESS: This file is a \"LX\" Executable file!" << std::endl;
    }
    else if (exe_ee_signature == EXE_TYPE_SIGNATURE_PE)
    {
        exe_file_debug->is_EXE_PE = 1;
        std::cout << "SUCESS: This file is a \"PE\" Executable file!" << std::endl;
    }
    else
    {
        exe_file_debug->is_EXE_NE = 0;
        exe_file_debug->is_EXE_LE = 0;
        exe_file_debug->is_EXE_LX = 0;
        exe_file_debug->is_EXE_PE = 0;
        // std::cout << "FAILURE: This file is NOT an /Extended Executable/ file! (NOT a \"NE\", \"LE\", \"LX\", or \"PE\")" << std::endl;
        // return;
        std::cout << "SUCESS: This file is an 'OE' Executable file!" << std::endl;
    }

    /*
    TEST:
        PE32, PE32+
    */

    if (exe_file_debug->is_EXE_PE == 1)
    {
        // ImageHdrOffset = (int)((ULONG *)lpFile)[15] + sizeof (ULONG);

        // if ( 0 == pImgFileHdr->SizeOfOptionalHeader )	// 0 optional header
        //     DumpObjFile(pImgFileHdr);					// means it's an OBJ

        fseek(ptrStreamFileIn, exe_header_ne->e_lfanew, SEEK_SET);

        fread(&exe_header_pe_buffer, 512, 1, ptrStreamFileIn);
    
        exe_header_pe = (EXE_HEADER_PE*)exe_header_pe_buffer;

        std::cout << "exe_header_pe->Signature: " << exe_header_pe->Signature << std::endl;
        std::cout << "exe_header_pe->Signature: " << "0x" << std::hex << exe_header_pe->Signature << std::dec << std::endl;

        std::cout << "exe_header_pe->FileHeader.Machine: " << exe_header_pe->FileHeader.Machine << std::endl;
        std::cout << "exe_header_pe->FileHeader.Machine: " << "0x" << std::hex << exe_header_pe->FileHeader.Machine << std::dec << std::endl;

        std::cout << "exe_header_pe->OptionalHeader.Magic: " << exe_header_pe->OptionalHeader.Magic << std::endl;
        std::cout << "exe_header_pe->OptionalHeader.Magic: " << "0x" << std::hex << exe_header_pe->OptionalHeader.Magic << std::dec << std::endl;

        if (exe_header_pe->OptionalHeader.Magic == EXE_TYPE_SIGNATURE_PE32)
        {
            exe_file_debug->is_EXE_PE32 = 1;
            std::cout << "SUCESS: This file is a \"PE32\" Executable file!" << std::endl;
        }
        else if (exe_header_pe->OptionalHeader.Magic == EXE_TYPE_SIGNATURE_PE64)
        {
            exe_file_debug->is_EXE_PE64 = 1;
            std::cout << "SUCESS: This file is a \"PE64\" Executable file!" << std::endl;
        }
        else
        {
            exe_file_debug->is_EXE_PE32 = 0;
            exe_file_debug->is_EXE_PE64 = 0;
            std::cout << "FAILURE: This file is NOT an 'PE' Executable file! (NOT a \"PE32\" or \"PE64\")" << std::endl;
        }

    }

    if (DEBUG_MODE) std::cout << std::endl << "DEBUG: END: TEST: EXE MagSig" << std::endl << std::endl;

    if (DEBUG_MODE) std::cout << std::endl << "DEBUG: END: Executable Type Deduction" << std::endl << std::endl;
    
}
