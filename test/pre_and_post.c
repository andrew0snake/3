#include <stdio.h>

void main ()

{
    int i = 0;
    int tmp = 0;
    int pre = 0;
    int post = 0;
    int pre_arr [ 4 ];
    int post_arr [ 4 ];

    for ( i = 0; i < 4; ++i ){
        pre = 0;
        post = 0;
    };

    for ( i = 0; i < 3; ++i ){
        pre = i;
        printf ( "pre at step %d = %d;\n", i, pre );
    };

    printf ( "\n" );

    for ( i = 0; i < 3; i++ ){
        post = i;
        printf ( "post at step %d = %d;\n", i, post );
    };

    printf ( "\n" );
    i = 0;
    tmp = 0;
    do {
        tmp += 1;
        pre_arr [ ++i ] = tmp;
        printf ( "tmp = %d; pre_arr [ i = %d ] = %d;\n", tmp, i, pre_arr [ i ] );
    } while ( i < 3 );

    printf ( "\n" );

    i = 0;
    tmp = 0;
    do {
        tmp += 1;
        post_arr [ i++ ] = tmp;
        printf ( "tmp = %d; post_arr [ i = %d ] = %8d;post_arr [ i - 1 = %d ] = %2d;\n", tmp, i, post_arr [ i ], ( i - 1 ), post_arr [ i - 1 ] );
    } while ( i < 3 );


}