#include <stdio.h>
int main(){
     int loop;
     scanf("%d", &loop);
     long int A[loop], B[loop], C[loop];
     for (int i = 1; i <= loop; i++)
     {
        scanf("%ld %ld %ld",&A[i], &B[i], &C[i]);
     }

     for (int i = 1; i <= loop; i++)
     {
        B[i] = A[i] * B[i]/100;
        if (B[i] >= C[i])
        {
            printf("Case #%ld: %ld\n", i, C[i]);
        } else {
            printf("Case #%ld: %ld\n", i, B[i]);
        }
     }
    return 0;
}