#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define SSIZE 30
#define LSIZE 300


int atoi_2 ( char s [] );
void getline_my ( char line [] );
void clean_text ( char text [], short int size );
void clean_array ( int array [] );
void shellsort ( int v [], int n );
int getarray_sort ( int sort [], char line [] );
void reverse_string ( char s [] );
void expand_my ( char short_line [], char long_line [] );


void main ()
{

    char line [ 100 ];
    char short_line [ 30 ];
    char long_line [ 300 ];
    int sort [ 100 ];
    int digit = 0;
    int len = 0;
    int i = 0;
    char choise = 0;
    char exit = 0;

    printf ( "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" );
    printf ( "Choose please what you want to do (press q to exit):\n" );
    printf ( "Variants :\n" );
    printf ( "1. Convert from char to integer.\n" );
    printf ( "2. Shellsorting.\n" );
    printf ( "3. Reverse string.\n" );
    printf ( "4. Expand string.\n" );

    exit = 0;
    while ( exit == 0 ){
        getline_my ( line );
        choise = line [ 0 ];
        switch (choise) {
        case '1' :
            clean_text ( line, 100 );
            printf ( "Input please chars to convert to integer:\n" );
            getline_my ( line );
            digit = atoi_2 ( line );
            printf ( "Getted digit from char = %d;\n", digit );
            exit = 1;
            break;
        case '2' :
            len = getarray_sort ( sort, line );
            shellsort ( sort, len );
            printf ( "After sorting array seems so:" );
            for ( i = 0; i < len; ++i ){
                printf ( "%d,", sort [ i ] );
            };
            printf ( "\n" );
            exit = 1;
            break;
        case '3':
            printf ( "Enter please line to reverse:\n" );
            clean_text ( line, 100 );
            getline_my ( line );
            reverse_string ( line );
            printf ( "After reverse string seens so:\n%s\n", line );
            exit = 1;
            break;
        case '4':
            printf ( "Enter please string:\n" );
            clean_text ( short_line, SSIZE );
            clean_text ( long_line, LSIZE );
            getline_my ( short_line );
            printf ( "\nlenght of short_line before expand = %d;\n", strlen ( short_line ) );
            for ( i = 0; i < strlen ( short_line ); ++i ){
                printf ( "short_line [ i = %d ] = %c = %d;\n", i, short_line [ i ], short_line [ i ] );
            };
            expand_my ( short_line, long_line );
            printf ( "After expand line seems so:%s\n", long_line );
            exit = 1;
            break;
        case 'q':
            exit = 1;
            break;
        default:
            printf ( "Wrong input, try again.\n" );
            break;
        };
    }
        
}


void getline_my ( char line [] )

{
    int i = 0;
    int c = 0;

    for ( i = 0; ( ( c = getchar () ) != EOF ) && c != '\n'; ++i ){
        line [ i ] = c;
        printf ( "line[%d] = %c; i = %d;\n", i, line[i], i );
    };
}

void clean_text ( char text [], short int size )

{
    short int i = 0;
    short int len = 0;

    len = strlen ( text );

    for ( i = 0; i < size; ++i ){
        text [ i ] = 0;
//        printf ( "cleaning text...step %d, text [ %d ] = %c = %d;\n", i, i, text [ i ], text [ i ] );    
    };


}

void clean_array ( int array [] )

{

    short int i = 0;
    short int len = 0;

    len = strlen ( array );
    
    for ( i = 0; i < len; ++i ){
        array [ i ] = 0;
    };

}



int atoi_2 ( char s [] )

{
    int i = 0;
    int n = 0;
    int sign = 0;

    for ( i = 0; isspace ( s [ i ] ); ++i )
        ;

    sign = ( s [ i ] == '-' ) ? ( -1 ) : 1;
    if ( s [ i ] == '+' || s [ i ] == '-' )
        ++i;
    for ( n = 0; isdigit ( s [ i ] ); ++i )
        n = n * 10 + ( s [ i ] - '0' );
    
    return sign * n;

}

void shellsort ( int v [], int n )

{
    int gap = 0;
    int i = 0;
    int j = 0;
    int temp = 0;

    for ( gap = n / 2; gap > 0; gap  /= 2 ) {
        printf ( "gap = %d; \n", gap );
        for ( i = gap; i < n; ++i ){
            printf ( "    i = %d;\n", i );
            for ( j = i - gap; j >= 0 && v [ j ] > v [ j + gap ]; j -= gap ) {
                printf ( "-----------------------------------------------------------\n" );
                printf ( "        before j = ( i - gap ) = %d; v [ j = %d ] = %d; v [ ( j + gap ) = %d ] = %d;\n", j, j, v [ j ], j + gap, v [ j + gap ] );
                temp = v [ j ];
                v [ j ] = v [ j + gap ];
                v [ j + gap ] = temp;
                printf ( "         after j = ( j - gap ) = %d; v [ j = %d ] = %d; v [ ( j + gap ) = %d ] = %d;\n", j, j, v [ j ], j + gap, v [ j + gap ] );
                printf ( "         Now array seems so:" );
                for ( temp = 0; temp < n; ++temp ){
                    printf ( "%d,", v [ temp ] );
                };
                printf ( "\n" );
            };
        };
    };
}


int getarray_sort ( int sort [], char line [] )

{
    short int len = 0;
    short int i = 0;

    printf ( "Input please lenght of array:" );
    clean_text ( line, 100 );
    getline_my ( line );
    len = atoi_2 ( line );
    clean_array ( sort );

    printf ( "And now please input elements of array split them by \"Enter\". Size of array = %d;\n", len );
    for ( i = 0; i < len; ++i ){
        printf ( "Input please %d-th element of array:", i );
        clean_text ( line, 100 );
        getline_my ( line );
        sort [ i ] = atoi_2 ( line );
    };
    
    for ( i = 0; i < len; ++i ){
        printf ( "sort [ %d ] = %d;\n", i, sort [ i ] );
    };
 
    return len;

}


void reverse_string ( char s [] )

{
    short int c = 0;
    short int i = 0;
    short int j = 0;

    for ( i = 0, j = ( strlen ( s ) - 1 ); i < j; ++i, --j ){
        c = s [ i ];
        s [ i ] = s [ j ];
        s [ j ] = c;
        printf ( "s [ i = %d ] = %c; s [ j = %d ] = %c;\n", i, s [ i ], j, s [ j ] );
    };
}

void expand_my ( char sl [], char ll [] )

{
    short int i = 0;
    short int j = 0;
    short int k = 0;
    short int per = 0;
    short int shlen = 0;

    ll [ 0 ] = sl [ 0 ];
/*    
    printf ( "\nlenght of sl = %3d; lenght of ll = %3d;\n\n", strlen ( sl ), strlen ( ll ) );
    for ( i = 1, j = 1; i < ( strlen ( sl ) - 1 ); ++i ){
        printf ( "\ni = %3d; j = %3d;\n\n", i , j );
        if ( sl [ i ] == '-' ) {
            if ( ( sl [ i - 1 ] >= 'a' ) && ( sl [ i + 1 ] <= 'z' ) ) {
                ll [ j - 1 ] = sl [ i - 1 ];

                printf ( "sl [ i - 1 = %d ] = %d = %c; ll [ j - 1 = %d ] = %c;\n", ( i - 1 ) , sl [ i - 1 ], sl [ i - 1 ], ( j - 1 ), ll [ j - 1 ] );

                for ( k = sl [ i - 1 ] + 1; k <= sl [ i + 1 ]; ++k ){
                    ll [ j ] = k;

                    printf ( "ll [ j = %3d ] = %c; k = %3d = %c; lenght of ll = %d\n", j, ll [ j ], k, k, strlen ( ll ) );

                    ++j;
                };
                ++j;
            };
/*            else {
                if () {
                };
                    else  
            }
        }        
        else {
            if ( ( sl [ i ] >= 'a' &&  sl [ i ] <= 'z' ) || (  sl [ i ] >='A' &&  sl [ i ] <= 'Z' ) \
            || (  sl [ i ] >= '0' &&  sl [ i ] <= '9' ) )
            ll [ j ] = sl [ i ];
            printf ( "easy add\nll [ j = %d ] = %c = %d; sl [ i = %d ] = %c = %d; lenght of ll = %d;\n", j, ll [ j ], ll [ j ], i, sl [ i ], sl [ i ], strlen ( ll ) );
            ++j, ++i;
        }

    };
    printf ( "lenght of ll = %3d;\n", strlen ( ll ) );
*/    
    shlen = strlen ( sl );
    printf ( "Lenght of short_line = %d; of long _line = %d;\n", shlen , strlen ( ll ) );

    for ( i = 1, j = 1; i <= shlen; ++i ) {
        if ( sl [ i ] == '-' ){
//            printf ( "sl [ i - 1 = %d ] = %c sl [ i + 1 = %d ] = %c;\n", i - 1, sl [ i - 1 ], i + 1, sl [ i + 1 ] );
            if ( ( ( sl [ i - 1 ] >= 'a' ) && ( sl [ i - 1 ] <= 'z' ) ) && ( ( sl [ i + 1 ] >= 'a' ) && ( sl [ i + 1 ] <= 'z' ) ) ) {
                printf ( "before minus j = %d;\n", j );
                --j;
                for ( k = sl [ i - 1 ]; k <= sl [ i + 1]; ++k, ++j ){
                    ll [ j ] = k;
                };
                ++j;
                ll [ j ] = sl [ i + 1 ];
            };

        };
    
    };
    
}


