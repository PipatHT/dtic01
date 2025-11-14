#include <stdio.h>

int main(){
    int dataA;
    int dataB[5];
    int dataC[] = {111, 222, 333}; //ขนาดไม่จำเป็นต้องใส่หากมีการกำหนด int/default value
    int dataD[3][5];
    int dataE[][3] = {
                        {10, 20, 30},
                        {10, 20, 30},
                        {10, 20, 30},
                        {10, 20, 30},
                        {10, 20, 30}
    };

    dataA = 20;
    dataB[2] = 999; //ช่องที่ 3 ของ dataB คือ index number 2

    printf("%d\n", dataC[0] + dataC[2]);
    return 0;
}