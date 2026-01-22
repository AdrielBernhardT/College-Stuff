#include <stdio.h>

// int array_hitung[1005] = {1,1};
static int counter = 0;

int fibbo(int n)
{
    counter++;
    // if (array_hitung[n-1] != 0)
    // {
    //     return array_hitung[n];
    // }
    if (n==0 || n == 1)
    {
        return 1;
    }
    return fibbo(n-1) + fibbo(n-2);
    // return array_hitung[n-1] = fibbo(n-1) + fibbo(n-2);
}

int main(){
    int testcase, input, hasil;
    scanf("%d", &testcase); getchar();
    for (int i = 0; i < testcase; i++)
    {
        scanf("%d", &input); getchar();
        fibbo(input);
        printf("Case #%d: %d\n", i+1, counter);
        counter = 0;
    }
    return 0;
}