#include <stdio.h>

int main(){
    int start, end;
    scanf("%d %d", &start, &end); //input
    for (int i = start; i < start + end; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}