#include <stdio.h>

int main(){
    int awal, akhir;
    float diskon;
    scanf("%d %d",  &awal, &akhir);
    diskon = (((awal-akhir)*100)/awal);
    printf("%.2f%%\n", diskon);
    return 0;
}