//preprocessor directive
//คือ ประกาศ Library
#include <stdio.h>
#include "math.h"
 
//คือ ประกาศค่าคงที่ คือ การสร้างตัวแทนของอะไรสั่งอย่างหนึ่ง เพื่อเอาไปใช้งานในโปรแกรม
#define ShowPa printf("++++++++++++++++++++++++\n");
#define SMILE "^_^ 555"
 
//global (ใช้ที่ไหนก็ได้) declaration (ประกาศ/สร้าง)
int number = 999;
void showHey();
 
//user-defined function
void showHi(){
    printf("Hi.....\n");
}
 
int main(){ //main function
    ShowPa
    printf("DTI-SAU\n");
    printf("%lf\n", pow(2, 20));
    ShowPa
    showHi();
    showHey();  
 
    return 0;
}
 
//user-defined function
void showHey(){
    printf("Hey.....\n");
}