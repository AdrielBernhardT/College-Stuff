#include <stdio.h>
int main(){
    long int health, attack, indikator = 0;
    scanf("%ld %ld", &health, &attack); getchar();
    while (health > 0)
    {
        health-=attack;
        indikator++;
    }
    printf("%ld\n", indikator);
    return 0;
}