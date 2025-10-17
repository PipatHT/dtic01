//ป้อนชื่อ-สกุล ชื่อเล่น อายุ เงินเดือน เเล้วเเสดงผลออกทางหน้าจอ
#include <stdio.h>

#define showLine printf("++++++++++++++++++++++\n");


int main(){
    char fullname[50];   //%[^\n]
    char nickname[20];   //%s
    int age;           //%d
    float salary;      //%f

    showLine;
    printf("   Your Information   \n");
    showLine;
    printf("Enter your fullname : ");
    scanf("%[^\n]", &fullname);
    printf("Enter your nickname : ");
    scanf("%s", &nickname);
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your salary : ");
    scanf("%f", &salary);   
    showLine;
    printf("Your fullname is: %s\n", fullname);
    printf("Your nickname is: %s\n", nickname);
    printf("Your age is: %d\n", age);
    printf("Your salary is: %.2f\n", salary);
    showLine;

    return 0;
}