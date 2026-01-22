#include <stdio.h>

int main(){
    long long int pukulan, damage=0;
    scanf("%lli", &pukulan);
    for (int i = 0; i < pukulan; i++)
    {
        damage+=(100+(50*i));
    }
    printf("%lli\n", damage);
    return 0;
}