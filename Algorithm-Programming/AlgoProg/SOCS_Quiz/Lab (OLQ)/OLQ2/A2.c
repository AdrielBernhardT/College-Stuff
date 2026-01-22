#include <stdio.h>
#include <math.h>

int main(){
    int cases;
    scanf("%d", &cases);
    double pertama[cases],kedua[cases], hasil[cases];
   
    for (int i = 0; i < cases; i++)
    {
        scanf("%lf %lf", &pertama[i], &kedua[i]);
        hasil[i] = (pertama[i]*kedua[i])/360;
    }
    for (int i = 0; i < cases; i++)
    {
        printf("%0.2lf\n", hasil[i]);
    }   
        
    return 0;
}