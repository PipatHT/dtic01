#include <stdio.h>

#define senpa printf("---------------------------------\n");

int main(){
    int x = 1;

    senpa
    printf("       Show Com Eng\n");
    senpa
    while (x <= 200){
        printf("%d:  Com Eng %d\n", x);
        x =x +1; // ++x, x++, x += 1
    }
    senpa
    return 0;
}