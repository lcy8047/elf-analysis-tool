#include <string.h>

#include "LoadBinaryFile.h"

int CheckELFSignature( BinaryInfo *bin_info )
{
    return !memcmp( bin_info->_binary_data, "\x7f""ELF", 4 );
}

char* GetISA( BinaryInfo *bin_info )
{
    switch( bin_info->_binary_data[0x12] )
    {
        case 0x00:
            return "NONE";
        case 0x02:
            return "SPARC";
        case 0x03:
            return "x86";
        case 0x08:
            return "MIPS";
        case 0x14:
            return "PowerPC";
        case 0x28:
            return "AArch32";
        case 0x2a:
            return "SuperH";
        case 0x32:
            return "IA-64";
        case 0x3e:
            return "AMD x86-64";
        case 0xb7:
            return "AArch64";
        default:
            return "NOT Implemented";
    }
}
