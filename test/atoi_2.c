#include <ctype.h>
#include <stdio.h>

int atoi_2 ( char s [] );
void getline_my ( char line [] );
void clean_text ( char text [] );
void clean_array ( int array [] );
void shellsort ( int v [], int n );
int getarray_sort ( int sort [], char line [] );


void main ()
{

    char line [ 100 ];
    int digit = 0;
    int len = 0;
    int i = 0;
    char choise = 0;
    int sort [ 100 ];
    char exit = 0;

    printf ( "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" );
    printf ( "Chase please what you want to do:\n" );
    printf ( "Variants :\n" );
    printf ( "1. Convert from char to integer.\n" );
    printf ( "2. Shellsorting.\n" );

    exit = 0;
    while ( exit == 0 ){
        getline_my ( line );
        choise = line [ 0 ];
        switch (choise) {
        case '1' :
            clean_text ( line );
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
                printf ( "        befire j = %d; v [ j = %d ] = %d; v [ ( j + gap ) = %d ] = %d;\n", j, j, v [ j ], j + gap, v [ j + gap ] );
                temp = v [ j ];
                v [ j ] = v [ j + gap ];
                v [ j + gap ] = temp;
                printf ( "         after j = %d; v [ j = %d ] = %d; v [ ( j + gap ) = %d ] = %d;\n", j, j, v [ j ], j + gap, v [ j + gap ] );
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
    clean_text ( line );
    getline_my ( line );
    len = atoi_2 ( line );
    clean_array ( sort );

    printf ( "And now please input elements of array split them by \"Enter\". Size of array = %d;\n", len );
    for ( i = 0; i < len; ++i ){
        printf ( "Input please %d-th element of array:", i );
        clean_text ( line );
        getline_my ( line );
        sort [ i ] = atoi_2 ( line );
    };
    
    for ( i = 0; i < len; ++i ){
        printf ( "sort [ %d ] = %d;\n", i, sort [ i ] );
    };
 
    return len;

}


