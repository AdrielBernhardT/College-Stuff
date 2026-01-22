#include <stdio.h>

int main(){
    int angka;
    scanf("%d", &angka);
    long long int A[angka], B[angka];
    double hasil[angka];
    for (int i = 0; i < angka; i++)
    {
        scanf("%lld %lld", &A[i], &B[i]);
        hasil[i]=A[i]*0.01*B[i];
    }
     for (int i = 0; i < angka; i++)
    {
        printf("%0.2lf\n", hasil[i]);
    }
    
    return 0;
}