#include <stdio.h>

#define SenPa printf("================================")
#define STU_NUM 2
#define SUBJECT 3

int main(){

    double score[STU_NUM][SUBJECT];
    char subject_name[3][10] = {"MATH", "SCINCE", "ENG"};

    printf("========== SCORE TABLE ==========\n");
    for(int x =0; x < STU_NUM ; x++){
        printf("Student No. %d\n", x+1);
        for(int y = 0; y < SUBJECT; y++){
            printf(" %-10s : ", subject_name[y]);
            scanf("%lf", &score[x][y]);
        }
        printf("\n");
    }

    printf("====== Average Score/Subject ======\n");
    for(int y = 0; y < SUBJECT; y++){
        double sum = 0;
        for(int x = 0; x < STU_NUM; x++){
            sum = sum + subject_name[x][y];
        }
        printf(" %-10s : %.2lf\n", subject_name[y], sum/STU_NUM);
    }

    SenPa;

    return 0;
}