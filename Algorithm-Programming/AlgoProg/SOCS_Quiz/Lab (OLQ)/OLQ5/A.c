#include <stdio.h>

int main(){
    int test_case, line, bibi, lili;
    scanf("%d", &test_case);
    for(int i = 1; i <= test_case; i++)
    {
        int arr[10005] = {0};
        scanf("%d", &line);
        for (int j = 1; j <= line; j++)
        {
            scanf("%d", &arr[j]);
        }
        scanf("%d %d", &bibi, &lili);
        if (arr[bibi] > arr[lili])
        {
            printf("Case #%d : Bibi\n", i);
        }
        else if (arr[bibi] < arr[lili])
        {
            printf("Case #%d : Lili\n", i);
        }
        else
        {
            printf("Case #%d : Draw\n", i);
        }
    }
    return 0;
}