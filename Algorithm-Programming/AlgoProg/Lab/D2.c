#include <stdio.h>
int main(){
    float awal, akhir;
    double diskon;
    scanf("%f %f",  &awal, &akhir);
    diskon = 100 - (((awal-akhir)*100)/awal);
    printf("%.4lf%%\n", diskon);
    return 0;
}