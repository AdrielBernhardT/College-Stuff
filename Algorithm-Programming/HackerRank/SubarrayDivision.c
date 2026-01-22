#include <stdio.h>

int main(){
    int n, s[105], d, m;
    scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++){
        scanf("%d", &s[i]); getchar();
    }
    scanf("%d %d", &d, &m); getchar();
    
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j <= i+m-1; j++){
            sum += s[j];
        }
        if (sum == d){
            count++;
        }
        sum = 0;
    }
    printf("%d\n", count);
}