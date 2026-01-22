#include <stdio.h>

int main(){
    int awal, akhir;
    scanf("%d %d", &awal, &akhir); getchar();
    for (int i = awal; i <= awal + akhir; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}