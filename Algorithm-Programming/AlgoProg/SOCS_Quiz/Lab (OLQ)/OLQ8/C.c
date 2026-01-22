#include <stdio.h>

int main(){
    int N;
    int i,j;
    char picture[100][100];
    scanf("%d",&N);getchar();
    for(i=0; i<N ;i++)
    {
        scanf("%s",picture[i]); getchar();
    }
    for(i = N-1; i >= 0; i--)
    {
        for(j = N-1; j >= 0; j--)
        {
            printf("%c",picture[i][j]);
        }
        printf("\n");
    }
    return 0;
}