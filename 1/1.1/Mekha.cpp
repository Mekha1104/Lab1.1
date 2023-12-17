/*จงเขียนโปรแกรมแสดงคำว่า Hello World จำนวน n บรรทัด (โดย n คือตัวเลขที่รับมาจากผู้ใช้)*/

#include <stdio.h>
int main() {
    
    //กำหนดตัวเเปร เพื่อเก็บค่าจำนานจำนวน n บรรทัดจากผู้ใช้
    int n ;
    //เเสดง Input number ให้ผู้ใช้กรอกจำนวนตามต้องการ
    printf( "Input number : " ) ;
    //รับค่าจากผู้ใช้ เก็บในตัวเเปร n
    scanf( "%d" , &n ) ;
    // Loop เเสดงคำว่า Hello World จำนวน n บรรทัด
    for ( int i = 1 ; i <= n ; i++ ) {
        printf( "[%d] Hello world\n" , i ) ;
    }//end for
    return 0 ;
}//end main