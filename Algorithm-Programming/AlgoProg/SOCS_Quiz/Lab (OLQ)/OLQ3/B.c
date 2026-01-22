#include <stdio.h>

int main(){
    int loop;
    scanf("%d", &loop);
    long int A[loop], B[loop], total[loop];
    for(int i=0 ;i<loop;++i){
        scanf("%ld %ld", &A[i], &B[i]);
        total[i]=((A[i]/B[i])<<B[i]);
    }
    for(int i=0 ;i<loop;++i){
        printf("%ld\n", total[i]);
    }
    return 0;
}