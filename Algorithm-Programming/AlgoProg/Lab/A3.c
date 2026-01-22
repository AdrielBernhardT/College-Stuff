#include <stdio.h>

int main(){
    int tc;
    double a, b ,c, d, sum = 0;
    scanf("%d", &tc); getchar();
    for (int i = 0; i < tc; i++)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d); getchar();
        sum+= ((a/1)*2)+((b/2)*4)+((c/3)*4)+((d/4)*2);
        printf("%.2lf\n", sum);
        sum = 0;
    }
    


    return 0;
}