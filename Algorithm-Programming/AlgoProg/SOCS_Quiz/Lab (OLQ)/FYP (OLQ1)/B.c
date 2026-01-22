#include <stdio.h>

int main(){
    int angka, loop;
    scanf("%d %d", &angka, &loop);
    for (int i = angka; i < angka + loop; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}