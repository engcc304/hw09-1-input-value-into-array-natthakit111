/*
    จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8

*/
#include <stdio.h>

int main() {
    int N ;
    printf( "Enter your number: " ) ;
    scanf( "%d", &N ) ; 
    int arr[N] ;
    printf( "Enter -1 to stop: \n" ) ;
    int i = 0 ;
    while ( i < N ) {
        int p ;
        scanf( "%d", &p ) ;
        if ( p == -1 ) {
            break ;
        }//end if
        arr[i] = p ;
        i++ ;
    }//end while
    printf( "Index = " ) ;
    for ( int j = 0 ; j < i ; j++ ) {
        printf( "%d ", j ) ;
    }//end for
    printf( "\nArray = " ) ;
    for ( int j = 0 ; j < i ; j++ ) {
        printf( "%d ", arr[j] ) ;
    }//end for
    
    return 0 ; 
}//end function
