#include <stdio.h>

int main(){
    float modal, bunga;

    scanf("%f %f", &modal, &bunga); getchar();

    for (int i = 0; i < 3; i++)
    {    
        modal += (modal*(bunga/100));
    }
    printf("%.2f\n", modal);

    return 0;
}