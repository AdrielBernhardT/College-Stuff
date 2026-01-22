#include<stdio.h>

int main (){
    long long int loop;
    scanf("%lld", &loop);
    long long int sum[loop], porsia[loop], porsib[loop];
    for (long long int i = 1; i <= loop; i++)
    {
        scanf("%lld %lld %lld", &sum[i], &porsia[i], &porsib[i]);
    }
    for (long long int i = 1; i <= loop; i++)
    {
        if (sum[i] > (porsia[i]+porsib[i]))
        {
            printf("Case #%lld: no\n", i);
        } 
        else
        {
            printf("Case #%lld: yes\n", i);
        }
        
    }
    return 0;
}