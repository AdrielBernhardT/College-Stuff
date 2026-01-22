#include <stdio.h>

int main(){
    double A[5], B[5], hasil[5];
    for (int i = 0; i < 4; i++)
    {
        scanf("%lf %lf", &A[i],&B[i]);
        hasil[i] = 100/(100-A[i])*B[i]; 
    }
    for (int i = 0; i < 4; i++)
    {
        printf("$%0.2lf\n", hasil[i]);
    }
    
    return 0;
}