#include <stdio.h>
 
int main(){
    int aa = 100;
    int bb[4] = {11, 22, 33, 44};
    int *p_aa = &aa;
    int *p_bb = &bb[0]; //เก็บ address number ของ bb ช่องแรก
    int *p2_bb = bb;    //เก็บ address number ของ bb ช่องแรก
 
    *p2_bb = 555;
    printf("%d\n", bb[0]);
    printf("%d\n", *p2_bb);
    printf("%d\n", *p_bb);
    printf("-------------------\n");
    printf("%p\n", &aa);
    printf("%p\n", p_aa);
    printf("%d\n", &aa);
    printf("%d\n", p_aa);
    printf("-------------------\n");
    printf("%d\n", aa);
    printf("%d\n", *p_aa);
    // aa = 999; หรือ
    *p_aa = 999;
    printf("-------------------\n");
    printf("%d\n", aa);
    printf("%d\n", *p_aa);
 
    return 0;
}