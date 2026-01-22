#include <stdio.h>

int main(){
    int a;
    int hasil = 1;
    scanf("%d", &a); getchar();
    for (int i = 0; i < a; i++)
    {
        hasil*=2;
    }
    printf("%d\n", hasil-1);
    return 0;
}