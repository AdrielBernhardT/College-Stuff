#include <stdio.h>
#include <math.h>
int main(){

    long long int percobaan, hasil, pangkat=0;
    scanf("%lld", &percobaan);
    for (int i = 0; i < percobaan; i++)
    {
        pangkat+=(pow(2,i));
    }
    
    printf("%lld\n", pangkat);
    return 0;
}