#include <stdio.h>
int main(){
    long int panjang, lebar, banyak;
    long int X, Y, Z;
    long int angka[1000][1000];
    scanf("%ld %ld %ld", &panjang, &lebar, &banyak); getchar();
    for (int i = 0; i < banyak; i++)
    {
        scanf("%ld %ld %ld", &X, &Y, &Z); getchar();
        angka[X][Y] = Z;
        
    }
    for (int i = 0; i < panjang; i++)
    {
        for (int j = 0; j < lebar; j++)
        {
            if (j < lebar - 1)
            {
                printf("%ld ", angka[i][j]);
            }
            else
            {
                printf("%ld\n", angka[i][j]);
            }
        }
    }

    return 0;
}