#include <stdio.h>

void escape ( int to [ 200 ], int from [100] );
void gettext ( int text [ 100 ] );


void main ()

{
    int text [ 100 ];
    int i = 0;
    
    for ( i = 0; i < 100; ++i){
        text [ i ] = 0;    
    };

    gettext ( text ); 

    printf ( "getted text : %s;\n\n", text );

    for ( i = 0; i < 100; ++i){
//        printf ( " text [ %d ] = %d;\n ", i, text [ i ] ) ;    
        printf ( "%c", text [ i ] ) ;    
    };


};


void escape ( int to [ 200 ], int from [ 100 ] )

{






} 

void gettext ( text [ 100 ] )

{
    int i = 0;
    int c = 0;
    
    while ( (c = getchar() ) != EOF ){
        text [ i ] = c;
        printf ( "text [ %d ] = %c;\n", i, text [ i ] );
        ++i;
    };

    printf ( "getted text : %s;\n", text );

}