#include <stdio.h>

int main(){
    int cases;
    scanf("%d", &cases);
    float x[cases], y[cases];
    for (int i = 0; i < cases; i++)
    {
        scanf("%f %f", &x[i], &y[i]); getchar();
        x[i]*=y[i];
        x[i]/=360;
    }
    for (int i = 0; i < cases; i++)
    {
       printf("%.2f\n", x[i]);
    }
    return 0;
}