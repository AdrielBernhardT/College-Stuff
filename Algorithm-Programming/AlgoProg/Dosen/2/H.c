#include <stdio.h>
int main(){
    float A, B, C, D;
    for (int i = 0; i < 3; i++)
    {
        scanf("%f %f %f %f", &A, &B, &C, &D);
        printf("%.2f\n", ((A/1)*2)+((B/2)*4)+((C/3)*6)+((D/4)*4));
    }
    
    return 0;
}