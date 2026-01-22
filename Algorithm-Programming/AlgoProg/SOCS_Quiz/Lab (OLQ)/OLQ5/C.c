#include <stdio.h>
int main(){
    int test_case, total_items, total = 0;
    long long int items[100000000];
    scanf("%d", &test_case);
    for(int i=1 ; i <= test_case ; i++)
    {
        scanf("%d", &total_items);
        for (int j = 1 ; j <= total_items ; j++)
        {
            scanf("%d", &items[j]);
            total+=items[j];
        }
        printf("%d\n", total);
        total = 0;
    }
    return 0;
}