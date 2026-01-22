#include <stdio.h>

int main(){
    int a[5], b[5], c[5], d[5];
    float hasil[5];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
        hasil[i]=(a[i]*2)+(b[i]*2)+(c[i]*2)+(d[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%0.2f\n", hasil[i]);
    }
    

    return 0;
}