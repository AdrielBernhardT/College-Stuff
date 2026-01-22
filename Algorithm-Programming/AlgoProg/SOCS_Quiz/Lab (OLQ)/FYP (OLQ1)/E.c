#include <stdio.h>

int main(){
    int loop;
    scanf("%d", &loop);
    int a[loop], b[loop], c[loop];
    for (int i = 0; i < loop; i++)
    {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }
    for ( int i = 0; i < loop; i++)
    {
        if (a[i]<=b[i] + c[i])
        {
            printf("Case #%d: yes\n", i);
        } else
        {
            printf("Case #%d: no\n", i);
        }
        
    }
    return 0;
}