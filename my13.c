#include <stdio.h>
#define senpa printf("---------------------------------\n");

int main(){
    int number, result;
    int x;

    senpa
    printf("       Multiplication Table\n");
    senpa
    printf("Enter number: ");
    scanf("%d", &number);
    senpa

    for(x = 1; x <= 12; x= x +1){
        result = number * x;
        printf("%d x %d = %d\n", number, x, result);
    }
    senpa

    return 0;
}