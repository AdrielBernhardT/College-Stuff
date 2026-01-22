#include <stdio.h>

int main(){
    float nilai1, nilai2, nilai3;
    scanf("%f %f %f", &nilai1, &nilai2, &nilai3);
    float hasil=((nilai1*0.2)+(nilai2*0.3)+(nilai3*0.5));
    printf("%0.2f\n", hasil);
    return 0;
}