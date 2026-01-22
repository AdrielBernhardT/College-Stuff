#include <stdio.h>
#include <string.h>

int main(){
    long long int TC, angka, temp; 
    long long int angkaTerbalik = 0;
    scanf("%lld", &TC); getchar();
    for (long long int kasus = 1; kasus <= TC; kasus++)
    {
        scanf("%lld", &angka); getchar();
        temp = angka;
        angkaTerbalik = 0;
        // Membalikkan angka
        while (temp > 0) 
        {
            int digit = temp % 10;
            angkaTerbalik = angkaTerbalik * 10 + digit;
            temp /= 10;
        }
        printf("Case #%lld: %lld\n", kasus, angka+angkaTerbalik);
    }
    return 0;
}