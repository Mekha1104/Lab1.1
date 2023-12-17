/*จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() 
เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต 
จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้
*/

#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;
        

int main() {
    int *data, num ;
    GetSet( &data, &num ) ;
    return 0 ;
}//end function