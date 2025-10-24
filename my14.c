#include <stdio.h>
#define senpa printf("---------------------------------\n");

int main(){
    int number;
    senpa
    printf("       Even & Odd Number\n");
    senpa

    while( 1 ){// infinite loop
        printf("Enter number: ");
        scanf("%d", &number);
        if(number <= 0){
            senpa
            break;
        }
        if(number % 2 == 0){
            printf("Number is Even number\n");
        } else {
            printf("Number is Old number\n");
        }
        senpa
    }
    return 0;
}