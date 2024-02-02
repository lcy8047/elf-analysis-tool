#include <stdint.h>

typedef struct BinaryInfo
{
    uint8_t *_binary_data;
    uint64_t _size;
} BinaryInfo;

void LoadBinaryFile( BinaryInfo *bin_info, char *bin_file_path );
void PrintBinary( BinaryInfo *bin_info );
