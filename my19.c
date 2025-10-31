#include "stdio.h"
#include "string.h"
#include "stdlib.h"

char* showWelcome(char* fname, char* lname);

int sumNumber(int n1, int n2){
    printf("N1 is %d\n", n1);
    printf("N2 is %d\n", n2);
    return n1 + n2;
}

int main(){
    printf("Sum of Number is %d\n/", sumNumber(10, 20));
    printf("Welcome for %s\n", showWelcome("Ninnin ", "Wowwow"));

    return 0;
}

char* showWelcome(char* fname, char* lname){
    char* result = (char*) malloc((strlen(fname) + 2) * sizeof(char));

    strcpy(result, fname);
    strcat(result, " ");
    strcat(result, lname);
    
    return result;
}