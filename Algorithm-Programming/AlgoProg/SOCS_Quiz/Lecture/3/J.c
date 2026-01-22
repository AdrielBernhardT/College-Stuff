#include <stdio.h>

int main (){
    
    int x, y, z;
    scanf ("%d %d %d", &x, &y, &z);
    if (z - x == y - z && z - x >= 0){
        printf ("%d\n", z-x);
    }else {
        printf ("-1\n");
    }
    return 0;
}