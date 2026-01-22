#include <stdio.h>

int main(){
    int loop;
    scanf("%d", &loop);
    double a[loop], b[loop], c[loop], d[loop];
    for (int i = 0; i < loop; i++)
    {
        scanf("%lf %lf %lf %lf", &a[i], &b[i], &c[i], &d[i]);
    }
    for (int i = 0; i < loop; i++)
    {
        printf("%0.2lf\n", (((a[i]/1)*2)+((b[i]/2)*4)+((c[i]/3)*4)+((d[i]/4)*2)));
    }
    return 0;
}