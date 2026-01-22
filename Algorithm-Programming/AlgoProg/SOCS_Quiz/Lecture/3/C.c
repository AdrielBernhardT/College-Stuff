#include <stdio.h>
int main(){
     int loop;
     scanf("%d", &loop);
     long int gojo[loop], bipay[loop];
     for (int i = 1; i <= loop; i++)
     {
        scanf("%ld %ld",&gojo[i],&bipay[i]);
     }

     for (int i = 1; i <= loop; i++)
     {
        if (gojo[i] > bipay[i])
        {
            printf("Case #%ld: Go-Jo\n", i);
        } else {
            printf("Case #%ld: Bi-Pay\n", i);
        }
     }
    return 0;
}