#include <stdio.h>
int main(){
    long long int sum, add, temp;
    long long int test, n;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        temp = 0;
        sum = 0;
        add = 1;
        scanf("%lld", &n);
        for (int j = 1; j <= n-1; j++)
        {
            temp = sum;
            sum = sum + add;
            add = temp;
        }
        printf("Case #%d: %lld\n", i+1, sum);
    }
    return 0;
}