#include <stdio.h>

int binsearch_orig ( int x, int v [], int n );

int binsearch_my ( int x, int v [], int n );

void main ()

{

    int i = 0;
    int arr [ 1000 ];
    int place = 0;
    int x = 0;
    int size = 0;
    
    for ( i = 0; i < 1000; ++i ){
        arr [ i ] = i;
    }
    
    size = 1000;
    
    printf ( "Input please number you want find:" );
    scanf ( "%d", &x );

    place = binsearch_orig ( x, arr , size );
    
    printf ( "\nWe found you number in %d.\n", place );

} 


int binsearch_orig ( int x, int v [], int n )

{

    int low =0;
    int high = 0;
    int mid = 0;
    
    high = n - 1;
    
    while ( low <= high ) {
        mid = ( low + high ) / 2;
        if ( x < v [ mid ] )
            high = mid - 1;
        else if ( x > v [ mid ] )
            low = mid + 1; 
             else /* found match */
                 return mid;
    
    }

    return ( -1 ); /* no matches */
    
}


int binsearch_my ( int x, int v [], int n )

{
    
    int low = 0;
    int mid = 0;
    int high = 0;
    
    high = n - 1;
    
    while ( low <= high ){
        
        
        
    ]


}
