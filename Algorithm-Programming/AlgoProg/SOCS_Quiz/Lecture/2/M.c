#include <stdio.h>

int main(){
    float A, B;
    float hasil;
    scanf("%f %f", &A,&B);
    hasil = A/B*100;
    printf("%0.2f%%\n", hasil);
    return 0;
}