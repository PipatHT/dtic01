#include <stdio.h>

int dataA = 100; //Global variable ใช้้ที่ไหนก็ได้

void showwData() {
    int dataB = 200; //Local variable ใช้ได้เฉพาะภายใน Code Block { }
    int dataE;
    printf("dataA = %d\n", dataA);
    printf("dataB = %d\n", dataB);
    // printf("dataC = %d\n", dataC); Error
    dataE = 400;

}  

int main() {
    int dataC = 300; //Local variable ใช้ได้เฉพาะภายใน Code Block { }
    printf("dataA = %d\n", dataA);
    printf("dataA = %d\n", dataC);
    // printf("dataB = %d\n", dataB); Error
    dataC = 400;
    // dataB = 999;
    // dataE = 555;

    return 0;
}