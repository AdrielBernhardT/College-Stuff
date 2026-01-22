#include <stdio.h>
int main(){
    int test_case;
    long int kasus;
    long int angka[100][100];
    long int sum[100];

    scanf("%d", &test_case); getchar();

    for (int i = 0; i < test_case; i++)
    {
        scanf("%ld", &kasus); getchar();
        for (int j = 0; j < kasus; j++)
        {
            sum[j] = 0;
            for (int k = 0; k < kasus; k++)
            {
                scanf("%ld", &angka[j][k]); getchar();
            }
        }

        for (int j = 0; j < kasus; j++)
        {
            for (int k = 0; k < kasus; k++)
            {
                sum[j] += angka[k][j];
            }
        }
        printf("Case #%d: ", i+1);
        for (int j = 0; j < kasus; j++)
        {
            if (j < kasus - 1)
            {
                printf("%ld ", sum[j]);
            }
            else
            {
                printf("%ld\n", sum[j]);
            }
        }   
    }
    return 0;
}