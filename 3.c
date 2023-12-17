#include <stdio.h>
#include <string.h>

struct Human {
    char Name[ 50 ] ;
    int Age ;
};


void PrintfHuman(struct Human Arr[] , int N ) ;
void PrintfAboveAvg(struct Human Arr[] , int N , float Avg ) ;
void Sort( struct Human Arr[] ,  int N , int Mode ) ;
float AverageAge( struct Human Arr[] , int N ) ;


int main(){
    
    int N = 7 ;

    // กำหนดค่าเริ่มต้นของอาเรย์โครงสร้าง Human
    struct Human Person[ 7 ] ;
    // (กำหนดค่าเริ่มต้นของชื่อและอายุของแต่ละบุคคล)
    strcpy ( Person[ 0 ] .Name, "Parp" ) ;
    strcpy ( Person[ 1 ] .Name, "Pop"  ) ;
    strcpy ( Person[ 2 ] .Name, "Pap"  ) ;
    strcpy ( Person[ 3 ] .Name, "Pup"  ) ; 
    strcpy ( Person[ 4 ] .Name, "Poom" ) ;
    strcpy ( Person[ 5 ] .Name, "Pun"  ) ;
    strcpy ( Person[ 6 ] .Name, "Puk"  ) ;.

    Person[ 0 ] .Age = 18 ;
    Person[ 1 ] .Age = 19 ;
    Person[ 2 ] .Age = 22 ;
    Person[ 3 ] .Age = 20 ;
    Person[ 4 ] .Age = 17 ;
    Person[ 5 ] .Age = 21 ;
    Person[ 6 ] .Age = 18 ;

    // แสดงข้อมูลของอาเรย์ก่อนเรียงลำดับ
    PrintfHuman( Person , N ) ;
    // เรียงลำดับและแสดงในลำดับน้อยไปหามาก
    Sort( Person , N , 1 ) ; 
    PrintfHuman( Person , N ) ;     
    // เรียงลำดับและแสดงในลำดับมากไปหาน้อย
    Sort( Person , N , 2 ) ;
    PrintfHuman( Person , N ) ;
    // คำนวณและแสดงอายุเฉลี่ย
    float AVG = AverageAge( Person , N ) ;
    printf( "\nAverageAge = %.2f\n" , AVG ) ;
    // แสดงบุคคลที่มีอายุมากกว่าค่าเฉลี่ย
    PrintfAboveAvg(Person , N , AVG ) ;

    return 0 ;
}//end function main

// แสดงชื่อและอายุของบุคคลในอาเรย์
void PrintfHuman(struct Human Arr[] , int N ) {
    int i = 0 ;
     printf( "-- |Human : \n" ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        printf( "%s (%d) " , Arr[ i ].Name , Arr[ i ].Age ) ; 
    }
    printf( "\n" ) ;
}//end function

//  แสดงชื่อและอายุของบุคคลที่มีอายุมากกว่าค่าเฉลี่ย
void PrintfAboveAvg(struct Human Arr[] , int N , float Avg ) {
    int i = 0 ;
     printf( "-- |Human : \n" ) ;
    for ( int i = 0 ; i < N ; i++ ) 
    if ( Arr[ i ].Age > Avg){
       printf( "%s (%d) " , Arr[ i ].Name , Arr[ i ].Age ) ; 
    }
    printf( "\n" ) ;
}//end function
/*
    Mode = 1    0-9
    Mode = 2    9-0
*/
void Sort( struct Human Arr[] ,  int N , int Mode ) {
    int i = 0 ;
    int j = 0 ;
    struct Human hold ;
    for ( int i = 0 ; i < N ; i++ ) {
        for ( j = i + 1 ; j < N; j++ ) {
            if ( Mode == 1 ) {
                if ( Arr[ i ].Age > Arr[ j ].Age ) {
                    hold     = Arr[ i ] ;
                    Arr[ i ] = Arr[ j ] ;
                    Arr[ j ] = hold ;
                }//end if swap
            } else if ( Mode == 2 ) {
                if ( Arr[ i ].Age < Arr[ j ].Age ) {
                    hold     = Arr[ i ] ; 
                    Arr[ i ] = Arr[ j ] ;
                    Arr[ j ] = hold ;
                }//end if swap
            }//end if
        }//end fot j
    }//end for i 
}//end function

float AverageAge( struct Human Arr[] , int N ) {
    float Output = 0 ;
    float sum    = 0 ;
    for ( int i = 0 ; i < N ; i++ ) {
        sum += Arr[ i ].Age ;
    }//end for
    Output = sum / N ;
    return Output ;
}//end function