#include <stdio.h>

void escape ( char to [ 200 ], char from [100] );
void escape_rev ( char to [ 200 ], char from [200] );
void gettext_my ( char text [ 100 ] );
void clean_text ( char text [] );


void main ()

{
    char text [ 100 ];
    char text_copy [ 200 ];
    char text_rev [ 200 ];
    int i = 0;
    
    clean_text ( text );
    clean_text ( text_copy );

    printf ( "Input please text for configure:\n" );
    gettext_my ( text ); 
    printf ( "Getted text :\n%s\n\n", text );
    
    escape ( text_copy, text );
    printf ( "Formated text seems so:%s;\n", text_copy );

    printf ( "Input please text, that needs to be reversly formated:\n" );
    gettext_my ( text_rev );
    clean_text ( text_copy );
    escape_rev ( text_copy, text_rev );
    printf ( "Reverse formatted text seems so:\n%s", text_copy );
 
};


void escape ( char to [ 200 ], char from [ 100 ] )

{

    int i = 0;
    int j = 0;

    while ( from [ i ] != EOF ){
        switch ( from [ i ] ){
            case '\t':
                to [ j ] = '\\';
                ++j;
                to [ j ] = 't';
                ++j;
                ++i;
                break;
            case '\n':
                to [ j ] = '\\';
                ++j;
                to [ j ] = 'n';
                ++j;
                ++i;
                break;
            default:
                to [ j ] = from [ i ];
                ++i;
                ++j;
                break;
        }
    }

} 

void escape_rev ( char to [ 200 ], char from [ 100 ] )

{

    int i = 0;
    int j = 0;

    while ( from [ i ] != EOF ){
        switch ( from [ i ] ){
            case '\\':
                switch ( from [ i + 1 ] ){
                    case 't':
                        to [ j ] = '\t';
                        ++j;
                        i+=2;
                        break;
                    case 'n':
                        to [ j ] = '\n';
                        ++j;
                        i+=2;
                        break;
                    default:
                        break;
                } 
            default:
                to [ j ] = from [ i ];
                ++i;
                ++j;
                break;
        }
    }

} 

void gettext_my ( char text [ 100 ] )

{
    int i = 0;
    int c = 0;

    while ( (c = getchar() ) != EOF ){
        text [ i ] = c;
        ++i;
    };
    ++i;
    text [ i ] = EOF;

}

void clean_text ( char text [] )

{
    short int i = 0;
    short int len = 0;

    len = strlen ( text);

    for ( i = 0; i < len; ++i ){
        text [ i ] = 0;    
    }


}

