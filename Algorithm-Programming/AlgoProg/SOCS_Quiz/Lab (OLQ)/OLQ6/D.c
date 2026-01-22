#include<stdio.h>
int main(){
    int banyak_segitiga, size;
    scanf("%d %d", &banyak_segitiga, &size);
    for (int i = 0; i < banyak_segitiga; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (k < size - j - 1)
                {
                    printf(" ");
                }
                 else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}