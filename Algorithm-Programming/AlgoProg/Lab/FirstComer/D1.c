#include <stdio.h>

int main(){
    int angka;
    scanf("%d", &angka);
    if (angka%2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}