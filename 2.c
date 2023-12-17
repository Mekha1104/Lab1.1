#include <stdio.h>

int main() {
    int n = 0 ;  //ตัวเเปรเก็บค่าจากผู้ใช้
    char runagain ;  //ตัวเเปรเก็บ Y เพื่อรันโปรเเกรมอีกครั้ง
    char mode ;  //ตัวเเปรเก็บค่าการเลือกโหมด เลขคี่ เลขคู่ หรือเลขปกติ
    char sort ;  //ตัวเเปรเก็บค่า เพื่อเรียงเลข น้อยไปมาก/มากไปน้อย

    //loop runagain 
    do {
        printf( "User input max number : " ) ;   //เเสดงให้ผู้กรอกค่าตัวเลขที่มากที่สุด
        scanf( "%d" , &n ) ;

        printf( "----| Normal Series : " ) ;    //เเสดงค่าตัวเลขที่ผู้ใช้กรอกเข้ามาทุกค่าจนถึงค่าที่มากที่สุด
        for ( int i = 1 ; i <= n ; i++ ) {
            printf( "%d " , i ) ;
        }//end for
        printf( "\n" ) ;

        do {
            printf( "Display Odd/Even/Normal? (o/e/n) : " ) ;   //เเสดงว่าผู้ใช้ต้องการเลข คี่/คู่/ปกติ
            scanf( " %c", &mode ) ;
            
            if ( mode == 'o' ) {
                printf( "----| Odd Series : " ) ;
                for ( int i = 1 ; i <= n ; i++ ) {
                    if ( i % 2 != 0 ) {
                        printf( "%d " , i ) ;
                    }//end if
                }//end for
                break ;
            } else if ( mode == 'e' ) {
                printf( "----| Even Series : " ) ;
                for ( int i = 1 ; i <= n ; i++ ) {
                    if( i % 2 == 0 ) {
                        printf( "%d " , i ) ;
                    }//end if
                }//end for
                break ;
            } else if ( mode == 'n' ) {
                printf( "----| Normal Series : " ) ;
                for ( int i = 1 ; i <= n ; i++ ) {
                    printf( "%d " , i ) ;
                }//end for
                break ;
            }//end if
        } while (mode != 'o' && mode != 'e' && mode != 'n') ;//ถ้าผู้ใช้กรอกไม่ตรงตามที่โปรเเกรมกำหนดไว้ก็จะทำการวนถามจนกว่าจะเข้าโหมดที่โปรเเกรมกำหนดไว้
         
        printf( "\n" ) ;
        do {
            printf( "Display a-z / z-a? (a/z) : " ) ;//เเสดงว่าผู้ใช้ต้องการเรียงเลขจาก a-z / z-a
            scanf( " %c" , &sort ) ;

            switch ( sort ) {
                case 'a':
                if ( mode == 'o' ) {
                    printf( "----| " ) ;
                        for ( int i = 1 ; i <= n ; i++ ) {
                            if ( i % 2 != 0 ) {
                                printf( "%d " , i ) ;
                            }//end if
                        }//end for   
                    break ;
                } else if ( mode == 'e' ) {
                    printf( "----| " ) ;
                        for ( int i = 1 ; i <= n ; i++ ){
                            if( i % 2 == 0 ) {
                                printf( "%d " , i) ;
                            }//end if
                        }//end for
                    break ;
                } else if ( mode == 'n' ) {
                    printf( "----| " ) ;
                        for ( int i = 1 ; i <= n ; i++ ) {
                            printf( "%d " , i) ;
                        }//end for
                    break ;
                }   case 'z':
                if ( mode == 'o' ) {
                    printf( "----| " ) ;
                        for ( int i = n ; i >= 1 ; i-- ) {
                            if ( i % 2 != 0 ) {
                                printf( "%d " , i) ;
                            }//end if
                        }//end for 
                    break ;
                } else if ( mode == 'e' ) {
                    printf( "----| " ) ;
                        for ( int i = n ; i >= 1 ; i-- ){
                            if( i % 2 == 0 ) {
                                printf( "%d " , i) ;
                            }//end if
                        }//end for
                    break ;
                } else if ( mode == 'n' ) {
                    printf( "----| " ) ;
                        for ( int i = n ; i >= 1 ; i-- ) {
                            printf( "%d " , i ) ;
                        }//end for
                    break ;
                }
            }
        } while ( sort != 'a' && sort != 'z' ) ;//ถ้าผู้ใช้กรอกไม่ตรงตามที่โปรเเกรมกำหนดไว้ก็จะทำการวนถามจนกว่าจะเข้าโหมดที่โปรเเกรมกำหนดไว้

        printf( "\nDo you want to run again? (y/n): " ) ;   //เเสดงว่าต้องการรันโปรเเกรมอีกครั้งไหม
        scanf( " %c" , &runagain ) ;

    } while ( runagain == 'y' || runagain == 'Y' ) ;

    printf( "END" ) ;

    return 0;
}//end function
