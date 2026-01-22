#include <stdio.h>

int main(){
    int TC;
    int a, b;
    scanf("%d", &TC);
    for (int i = 0; i < TC; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", ((a/b)<<b));
    }
    

    return 0;
}