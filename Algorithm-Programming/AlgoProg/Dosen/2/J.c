#include <stdio.h>
int main(){
    float A, B;
    scanf("%f %f", &A, &B);
    printf("%.4f%%\n", (B/A)*100);
    return 0;
}