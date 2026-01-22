#include <stdio.h>

int main(){
    int jumlah_case;
    scanf("%d", &jumlah_case);
    int sum, garis_finish, j;
    for (int i = 1; i <= jumlah_case; i++)
    {
        sum = 0;
        j = 1;
        scanf("%d", &garis_finish);
        while (sum < garis_finish)
        { 
            j++; 
            sum+=j;      
        }
        printf("Case #%d: %d\n", i, j); 
    }
    return 0;
}