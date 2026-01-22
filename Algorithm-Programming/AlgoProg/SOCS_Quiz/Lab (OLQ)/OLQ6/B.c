#include<stdio.h>
#include<string.h>

int main(){
    int Test_case;
    char kalimat[100000];
    int poin[10000] = {0};

    scanf("%d", &Test_case); getchar();

    for (int i = 1; i <= Test_case; i++)
    {
        scanf("%s", kalimat); getchar();

        int len = strlen(kalimat);

        for (int j = 0; j < len; j++)
        {
            if (kalimat[j] == 'A' || kalimat[j] == 'E' || kalimat[j] == 'I' || kalimat[j] == 'O' || kalimat[j] == 'U')
            {
                poin[j] = 0;
            }
            else if (kalimat[j] == 'B' || kalimat[j] == 'F' || kalimat[j] == 'J' || kalimat[j] == 'P' || kalimat[j] == 'V')
            {
                poin[j] = 1;
            }
            else if (kalimat[j] == 'C' || kalimat[j] == 'G' || kalimat[j] == 'K' || kalimat[j] == 'Q' || kalimat[j] == 'W')
            {
                poin[j] = 2;
            }
            else if (kalimat[j] == 'D' || kalimat[j] == 'H' || kalimat[j] == 'L' || kalimat[j] == 'R' || kalimat[j] == 'X')
            {
                poin[j] = 3;
            }
            else if (kalimat[j] == 'M' || kalimat[j] == 'S' || kalimat[j] == 'Y')
            {
                poin[j] = 4;
            }
            else if (kalimat[j] == 'N' || kalimat[j] == 'T' || kalimat[j] == 'Z')
            {
                poin[j] = 5;
            }

            if (kalimat[j] <= 'D' && kalimat[j] >= 'A')
            {      
                kalimat[j] = 'A';
            }
            else if (kalimat[j] <= 'H' && kalimat[j] >='E')
            {
                kalimat[j] = 'E';
            }
            else if (kalimat[j] <= 'N' && kalimat[j] >= 'I')
            {
                kalimat[j] = 'I';
            }
            else if (kalimat[j] <= 'T' && kalimat[j] >= 'O')
            {
                kalimat[j] = 'O';
            }
            else if (kalimat[j] <= 'Z' && kalimat[j] >= 'U')
            {
                kalimat[j] = 'U';
            }
        }

        printf("Case #%d:\n", i);

        printf("%s\n", kalimat);

        for (int j = 0; j < len; j++)
        {
            if (j == len - 1)
            {
                printf("%d\n", poin[j]);
            }
            else
            {
                printf("%d", poin[j]);
            }
        }
    }
    return 0;
}