#include <stdio.h>

void main ()

{
    short int i = 0;
    char word = 0;
    float float_word = 0;
    double dword = 0;
    int two = 0;
    unsigned int utwo = 0;
    
    two = 1;
    utwo = 1;
    dword = 1;
    for ( i = 1; i <= 64; ++i ) {
        two *= 2;
        utwo *= 2;
        dword *= 2;
        printf ( "at step i = %12d ( two - 1 )= %12d; ( utwo - 1 ) = %.15u;     - ( utwo - 1 ) = %15d; dword = %22.22G;\n", i, two - 1, utwo - 1, - ( utwo - 1 ), dword );
//        printf ( "float_word = " );
    
    };
    

}