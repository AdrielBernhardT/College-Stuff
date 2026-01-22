#include <stdio.h>
#include <string.h>
int main(){
    char kalimat[10005];
    scanf("%[^\n]", kalimat); getchar();
    int len = strlen(kalimat);
    int gap = 'a' - 'A';
    for (int i = 0; i < len; i++)
    {
        if (kalimat[i] >= 'a' && kalimat[i] <= 'z')
        {
            kalimat[i] -= gap;
        }
        if (kalimat[i] == 'I')
        {
            kalimat[i] = '1';
        }
        else if (kalimat[i] == 'R')
        {
            kalimat[i] = '2';
        }
        else if (kalimat[i] == 'E')
        {
            kalimat[i] = '3';
        }
        else if(kalimat[i] == 'A')
        {
            kalimat[i] = '4';
        }
        else if (kalimat[i] == 'S')
        {
            kalimat[i] = '5';
        }
        else if (kalimat[i] == 'G')
        {
            kalimat[i] = '6';
        }
        else if (kalimat[i] == 'T')
        {
            kalimat[i] = '7';
        }
        else if (kalimat[i] == 'B')
        {
            kalimat[i] = '8';
        }
        else if (kalimat[i] == 'P')
        {
            kalimat[i] = '9';
        }
        else if (kalimat[i] == 'O')
        {
            kalimat[i] = '0';
        }
    }
    printf("%s\n", kalimat);

    return 0;
}