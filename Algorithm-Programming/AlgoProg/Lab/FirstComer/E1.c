#include <stdio.h>

int main(){
    int cases, A[100], B[100], C[100];
    scanf("%d", &cases); getchar();
    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d %d", &A[i], &B[i], &C[i]); getchar();
    }
    for (int i = 0; i < cases; i++)
    {
        if (A[i] > B[i] + C[i])
        {
            printf("Case #%d: no\n", i+1);
        }
        else
        {
            printf("Case #%d: yes\n", i+1);
        } 
    }

    return 0;
}