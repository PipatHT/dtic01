#include <stdio.h>
#define senpa printf("---------------------------------\n")

int main(){
    int  num1, num2, sum;

    senpa;
    printf("      SUM NUMBER     \n");
    senpa;

    do{
        printf("Enter number1: "); scanf("%d", &num1);
        printf("Enter number2: "); scanf("%d", &num2);
        sum = num1 + num2;
        printf("Sum = %d\n and %d is %d\n", num1, num2, sum);
        senpa;

    } while (sum <= 999);

    return 0;
}