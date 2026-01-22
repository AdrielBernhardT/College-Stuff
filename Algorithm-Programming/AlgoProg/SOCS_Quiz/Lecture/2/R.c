#include <stdio.h>

int main(){
    long long int A[5], B[5], C[5], D[5];
    for (int i = 0; i < 3; i++)
    {
        scanf("(%lld+%lld)x(%lld-%lld)", &A[i], &B[i], &C[i], &D[i]);
        getchar();
    }
    printf("%lld %lld %lld\n", (A[0]+B[0])*(C[0]-D[0]),  (A[1]+B[1])*(C[1]-D[1]),  (A[2]+B[2])*(C[2]-D[2]));
    return 0;
}