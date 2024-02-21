#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "LoadBinaryFile.h"
#include "ELFAnalysis.h"

void PrintMenu( void )
{
    printf( "0. Quit\n" );
    printf( "1. Print hex dump\n" );
    printf( "2. Print ELF header\n" );
}

int main( int argc, char *argv[] )
{
    char *bin_file_path = NULL;
    while ( 1 )
    {
        switch ( getopt( argc, argv, "f:" ) )
        {
            case 'f':
            {
                bin_file_path = ( char * ) malloc( strlen( optarg ) + 1 );
                strcpy( bin_file_path, optarg );
                continue;
            }
            default:
            {
                break;
            }
        }
        break;
    }

    BinaryInfo *bin_info = ( BinaryInfo * ) malloc( sizeof( BinaryInfo ) );
    LoadBinaryFile( bin_info, bin_file_path );

    while ( 1 )
    {
        int menu = -1;

        PrintMenu();
        printf( "> " );
        scanf( "%d", &menu );
        if ( menu == 0 )
        {
            break;
        }

        switch ( menu )
        {
            case 1:
            {
                PrintBinary( bin_info );
                break;
            }
            case 2:
            {
                printf( "Check ELF Sign : %d\n", CheckELFSignature( bin_info ) );
                printf( "ISA : %s\n", GetISA( bin_info ) );
                break;
            }
            default:
                while( getchar() != '\n' );
                printf( "Wrong menu\n" );
                break;
        }
    }

    free( bin_info->_binary_data );
    free( bin_info );
    free( bin_file_path );

    return 0;
}
