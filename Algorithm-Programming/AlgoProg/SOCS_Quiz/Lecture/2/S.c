#include <stdio.h>

int main(){
    double l, b, h;
    scanf("%lf %lf %lf", &l, &b, &h);
    printf("%0.3lf\n",((2*((b/2)*h)))+(b*l*3));
    return 0;
}