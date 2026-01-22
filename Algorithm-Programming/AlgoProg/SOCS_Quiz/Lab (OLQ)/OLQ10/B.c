#include <stdio.h>
#include <string.h>

int main(){
    long long int TC, angka, r, t; 
    double hasil;
    scanf("%lld", &TC); getchar();

    for (long long int kasus = 1; kasus <= TC; kasus++)
    {
        scanf("%lld %lld", &r ,&t); getchar();
        hasil = 0;
        hasil = 2*3.14* r * (r + t);

        printf("Case #%lld: %.2lf\n", kasus, hasil);
    }
    return 0;
}