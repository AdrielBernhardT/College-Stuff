#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int a[100005], dict[10] = {0}, highest = 0;
    for (long long i = 0; i < n; i++){
        scanf("%d", &a[i]); getchar();
    }
    for (long long i = 0; i < n; i++){
        dict[a[i]]++;
    }
    for (int i = 1; i < 6; i++){
        if (dict[i] > dict[highest]){
            highest = i;
        }        
    }
    printf("%d\n", highest);
}