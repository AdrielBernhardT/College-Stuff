#include <stdio.h>
int main(){
    long long int loop;
    scanf("%lld", &loop);
    long long int dadu[loop], sum=0;
    for (int i = 0; i < loop; i++)
    {
        scanf("%lld", &dadu[i]);
        sum+=dadu[i];
        if (sum == 9)
        {
            sum=21;
        }
        else if (sum == 33)
        {
            sum=42;
        }
        else if (sum == 76)
        {
            sum=92;
        }
        else if (sum == 53)
        {
            sum=37;
        }
        else if (sum == 80)
        {
            sum=59;
        }
        else if (sum == 97)
        {
            sum=88;
        }
    }
    printf("%lld\n", sum);  
    return 0;
}