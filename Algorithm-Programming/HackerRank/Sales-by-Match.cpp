#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sockMerchant(int n, int ar[105]) {
    int pair = 0;
    int arr_inventory[105];
    
    for(int i = 0; i  < 105; i++){
        arr_inventory[i] = 0;
    }
    
    for(int i = 0; i  < n; i++){
        arr_inventory[ar[i]]++;
        if (arr_inventory[ar[i]] == 2) {
            pair++;
            arr_inventory[ar[i]] = 0;
        }
    }

    return pair;
}

int main() {
    int n;
    int ar[105];
  

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int result = sockMerchant(n,ar);

    printf("%d\n", result);
    return 0;
}