#include <stdio.h>

void funcA(int *a, int b, int *c){
    *a = 111;
    b = 222;
    *c = 333;
}

int main(){
    int x = 10, y = 20, z =30;

    funcA(&x, y, &z);

    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);

    return 0;
}