#include<stdio.h>

int main (){
    int loop;
    scanf("%d", &loop);
    int gojo[loop], bipay[loop];
    for (int i = 1; i <= loop; i++)
    {
        scanf("%d %d", &gojo[i], &bipay[i]);
    }
    for (int i = 1; i <= loop; i++)
    {
        if (gojo[i]>bipay[i])
        {
            printf("Case #%d: Go-Jo\n", i);
        } 
        else
        {
            printf("Case #%d: Bi-Pay\n", i);
        }
        
    }
    return 0;
}