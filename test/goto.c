#include <stdio.h>

void main ()

{
    int j = 0;
    int i = 0;

    short int a [ 100 ];
    short int b [ 100 ];

    for ( i = 0; i < 10; ++i ) {
        for ( j = 0; j < 10; ++j ){
            printf ( "%3d;", i * 10 + j );
            if ( ( i * 10 + j ) == 82 )
                goto link1;
        }

        printf ( "\n" );
    }
    
link1:
    printf ( "-82-\n" );


}