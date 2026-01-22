#include<stdio.h>
int main(){
    long long int jumlah_tim;
    long long int lengkap = 0;
    long long int sum = 0;

    scanf("%lld", &jumlah_tim); getchar();

    int jumlah_pemain[jumlah_tim][jumlah_tim];

    for (int tim = 1; tim <= jumlah_tim; tim++)
    {
        for (int i = 1; i <= jumlah_tim; i++, sum++)
        {
            scanf("%lld", &jumlah_pemain[i]); getchar();
            if (jumlah_pemain[1] == jumlah_pemain[i])
            {
                lengkap++;
            }
        }
    }
    printf("%lld\n", sum-lengkap);
    return 0;
}