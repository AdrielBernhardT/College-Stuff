#include <stdio.h>
int main(){
    int angka, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &angka);
        sum+=angka;
    }
    if (sum >= 22)
    {
        printf("bust\n");
    }
    else
    {
        printf("win\n");
    }  
    return 0;
}