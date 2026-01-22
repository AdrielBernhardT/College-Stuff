#include <stdio.h>

int main(){
    int A, B;
    float Total; 
    float PersentaseHasil;
    scanf("%d %d", &A, &B);
    Total =(float)B / A;
    PersentaseHasil = Total * 100;
    printf("%0.4f%%\n", PersentaseHasil);

    return 0;
}