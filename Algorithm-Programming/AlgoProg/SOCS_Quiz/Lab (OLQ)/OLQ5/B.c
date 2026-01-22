#include <stdio.h>
int main(){
    int test_case, cuan;
    long int total = 0;
    scanf("%d", &test_case); getchar();
    for(int i=0 ; i<test_case ; i++){
        scanf("%d", &cuan); getchar();
        total+=cuan;
    }
    printf("%d\n", total);
    return 0;
}