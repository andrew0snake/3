# include <stdio.h>

void main () {

    int i = 0;
    int c = 0; 
    int nwhite = 0;
    int nother = 0;
    int ndigit [ 10 ];
    char hex [ 10 ];
    
    for ( i = 0; i < 10; ++i){
        ndigit [ i ] = 0; 
    };
    
    printf ( "A = %d;\nB = %d; \nC = %d;\nD = %d;\nE = %d;\n", 'A', 'B', 'C', 'D', 'E' );
    
    for ( i = 0; i < 10; i++ ){
        hex [ i ] = i + 10;
        printf ( "hex [ i = %d ] = %d = %c;\n", i, hex [ i ], hex [ i ] );
    };

    printf ( "--------------case---------------\n" );

    for ( i = 0; i < 10; ++i ){
        switch ( hex [ i ] ){
            case 11:
                hex [ i ] = 'A';
                printf ( "hex [ i = %d ] = %d = %c!\n", i, hex [ i ], hex [ i ] );
                break;
            case 12:
                hex [ i ] = 'B';
                printf ( "hex [ i = %d ] = %d = %c!\n", i, hex [ i ], hex [ i ] );
                break;
        
        }
    };
    
    printf ( "-------------case-----------------\n" );

    for ( i = 0; i < 10; i++ ){
        printf ( "hex [ i = %d] = %d = %c;\n", i, hex [ i ], hex [ i ] );
    
    };
    
    
    while ( ( c = getchar () ) != EOF ){
        switch (c) {
            case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
                ndigit [ c - '0' ] ++; 
                break;
            case ' ':
            case '\t':
            case '\n':
                nwhite++;
                break;
            default:
                nother++;
                break;           
        }
    }
    printf ( "Цифр = " );
    
    for ( i = 0; i < 10; ++i )
        printf ( " %d", ndigit [ i ] );
    
    printf ( ", символов-разделителей = %d; прочих = %d;\n", nwhite, nother );

//    return 0;
    
}