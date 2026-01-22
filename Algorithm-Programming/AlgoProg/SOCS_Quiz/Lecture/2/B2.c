#include <stdio.h>

int main (){
    double modal, persenbunga, bunga;
    scanf("%lf %lf", &modal, &persenbunga);

    for (int i = 0; i < 3; i++)
    {
        bunga = modal*(persenbunga/100);
        modal += bunga; 
    }
        printf("%0.2lf\n", modal);
    return 0;
}