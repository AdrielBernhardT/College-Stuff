#include <stdio.h>

int main(){
    int loop;
    long long int jumlah[1000], angka1[1000], angka2[1000];
    scanf("%d", &loop);
    for(int i = 1 ; i <= loop ; i++){
        scanf("%lld %lld %lld", &jumlah[i], &angka1[i], &angka2[i]);
    }
    for (int i = 1; i <= loop; i++)
    {
        if (jumlah[i] > angka1[i]+angka2[i])
        {
            printf("Case #%lld: no\n",i );
        }
        else if (jumlah[i] <= angka1[i]+angka2[i])
        {
            printf("Case #%lld: yes\n",i );
        }
        
        
    }
    
   
    return 0;
}