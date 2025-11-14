#include <stdio.h>

#define ShowPa printf("----------------------------------\n")
#define EMP_Num 5

int main() {

    double emp_sale[EMP_Num], sum = 0;

    ShowPa;
    printf("           AVERAGE SALE\n");
    ShowPa;

    for(int x = 0; x < EMP_Num; x++){
        printf("Employee No.%d / Sale is: ", x + 1);
        scanf("%lf", &emp_sale[x]);
    }

    ShowPa;
    for(int x = 0; x < EMP_Num; x++){
        sum = sum + emp_sale[x];
    }

    printf("Average is %.2lf\n", sum / EMP_Num);
    ShowPa;

    return 0;
}