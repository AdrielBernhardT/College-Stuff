#include <stdio.h>

int main(){
    int angka;
    scanf("%d", &angka);
    double a[angka], b[angka], c[angka], d[angka];
    for (int i = 0; i < angka; i++)
    {
        scanf("%lf %lf %lf %lf", &a[i], &b[i], &c[i], &d[i]);
    }
    for (int i = 0; i < angka; i++)
    {
        printf("%0.2lf\n", ((a[i]*2)+(b[i]*2)+(c[i]/3*4)+(d[i]/2)));
    }
    return 0;
}