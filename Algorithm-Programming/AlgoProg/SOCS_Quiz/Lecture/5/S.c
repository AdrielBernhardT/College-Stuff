#include <stdio.h>
int main(){
    int jumlah_kasus;
    long int A[10000000],B[10000000], hasil[10000000];
    scanf("%d", &jumlah_kasus); getchar();
    
    for (int i = 0; i < jumlah_kasus; i++)
    {
        scanf("%d %d", &A[i], &B[i]); getchar();
        hasil[i] = (A[i]+B[i])%10;
        printf("%d\n", hasil[i]); 
    }
    return 0;
}