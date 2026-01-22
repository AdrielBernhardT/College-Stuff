#include <stdio.h>

int main(){
    int angka;
    scanf("%d", &angka);
    double celcius[angka], reamur[angka], fahrenheit[angka], kelvin[angka];
    for (int i = 0; i < angka; i++)
    {
        scanf("%lf", &celcius[i]);
        reamur[i]=0.8*celcius[i];
        fahrenheit[i]=(1.8*celcius[i])+32;
        kelvin[i]=celcius[i]+273;
    }
     for (int i = 0; i < angka; i++)
    {
        printf("%0.2lf %0.2lf %0.2lf\n", reamur[i], fahrenheit[i], kelvin[i]);
    }
    
    return 0;
}