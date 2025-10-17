#include <stdio.h> //printf(), scanf()

#define showPa printf("------------------------------\n");

int main(){
    char pro_id[20], pro_name[50]; //strings %s, char %c 
    float pro_price, pro_sale;      //float %f, double %lf

    showPa
    printf("    calculate Product sale\n");
    showPa

    printf("Enter produce code  : ");
    scanf("%s", &pro_id);
    printf("Enter produce name  : "); 
    scanf("%s", &pro_name);
    printf("Enter produce price : ");
    scanf("%f", &pro_price);
    showPa
    if(pro_price >= 1000){
        pro_sale = pro_price - (pro_price * 3 / 100.0);
    }else{
        pro_sale = pro_price - (pro_price * 5 / 100.0);
    }
    printf("product sale : %.2f\n", pro_sale);
    showPa
    
    return 0;
}