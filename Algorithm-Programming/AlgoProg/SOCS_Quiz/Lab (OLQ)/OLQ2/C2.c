#include <stdio.h>

int main(){
    double A, B, hasil;
    scanf("%lf %lf", &A, &B);
    hasil = 100 - ((B/A)*100);
    printf("%0.2lf%%\n", hasil);

    return 0;
}