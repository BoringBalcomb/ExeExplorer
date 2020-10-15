#include <iostream>

void get_file_size_from_fseek(FILE* ptrStreamFileIn, int& file_size_from_fseek)
{
    int tempPosStreamFileIn;
    tempPosStreamFileIn = ftell(ptrStreamFileIn);
    fseek(ptrStreamFileIn, 0, SEEK_END);
    file_size_from_fseek = ftell(ptrStreamFileIn);
    fseek(ptrStreamFileIn, tempPosStreamFileIn, SEEK_SET);
}
