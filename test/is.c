#include <stdio.h>
#include <string.h>

void getline_my ( char line [] );
void clean_text ( char text [] );
void is_digit_print ( char s [] );
void is_space_print ( char s [] );

void main ()
{
    char s [ 100 ];
    short int i = 0;
    
    clean_text ( s );
    
    getline_my ( s );
    
    is_space_print ( s );
    printf ( "\n\n---------------\n\n" );
    is_digit_print ( s );
    
    printf ( "\n-----------------\n" );
    for ( i = 0; isspace ( s [ i ] ); ++i  ){
        printf ( "s [ %d ] = %c;\n", i, s [ i ] );
    };
    printf ( "123\f123" );

}
void getline_my ( char line [] )

{
    int i = 0;
    int c = 0;

    printf ( "Please input line:\n" );
    for ( i = 0; ( ( c = getchar () ) != EOF ) && c != '\n'; ++i ){
        line [ i ] = c;
//        printf ( "line[%d] = %c; i = %d;\n", i, line[i], i );
    };
}

void clean_text ( char text [] )

{
    short int i = 0;
    short int len = 0;

    len = strlen ( text );

    for ( i = 0; i < len; ++i ){
        text [ i ] = 0;    
    };


}

void is_digit_print ( char s [] )

{

    short int i = 0;
    
    for ( i = 0; i < ( strlen ( s ) ) ; ++i ){
        if ( isdigit ( s [ i ] ) )
            printf ( "s [ %d ] = \'%c\' is digit;\n", i, s [ i ] );
        else 
            printf ( "s [%d ] = \'%c\' is NOT digit;\n", i , s [ i ] );
    };
}

void is_space_print ( char s [] )
 
{
    short int i = 0;
    
    for ( i = 0; i < ( strlen ( s ) ) ; ++i ){
        if ( isspace ( s [ i ] ) )
            printf ( "s [ %d ] = \'%c\' is space;\n", i, s [ i ] );
        else 
            printf ( "s [%d ] = \'%c\' is NOT space;\n", i , s [ i ] );
/*        if ( ( i % 5 ) == 0 ) {
            getchar ();
        };*/
    }

}

