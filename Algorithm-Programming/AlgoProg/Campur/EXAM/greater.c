#include <stdio.h>
int main(){
    long long int angkaA, angkaB;
    scanf("%lld %lld", &angkaA, &angkaB);
    if (angkaA > angkaB)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
    return 0;
}