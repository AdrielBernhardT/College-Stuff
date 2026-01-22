#include <stdio.h>

int main(){
    int TC, C;
    float K, R, F;
    scanf("%d", &TC); getchar();
    for(int i = 0; i < TC; i++){
        scanf("%d", &C); getchar();
        R = (4*C)/5;
        F = (9*C/5) + 32;
        K = C + 273;
        printf("%.2f %.2f %.2f\n", R, F, K);
    }

    return 0;
}