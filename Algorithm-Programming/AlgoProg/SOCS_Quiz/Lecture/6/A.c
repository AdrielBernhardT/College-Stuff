#include <stdio.h>

int fungsi(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 2;
    }
    if (n % 5 == 0)
    {
        return n*2;
    }
    return fungsi(n-1) + n + fungsi(n-2) + n - 2;
}

int main(){
    int test_case;
    int kasus;
    int hasil;
    scanf("%d", &test_case); getchar();
    for(int i = 1; i <= test_case; i++)
    {
        int count = 0;
        scanf("%d", &kasus); getchar();
        hasil = fungsi(kasus);
        printf("Case #%d: %d %d\n", i, hasil, i);
        
    }
    return 0;
}