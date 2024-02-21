#ifndef ELFANALYSIS_H_
#define ELFANALYSIS_H_

#include "types.h"

int CheckELFSignature( BinaryInfo *bin_info );
char* GetISA( BinaryInfo *bin_info );

#endif /* ELFANALYSIS */
