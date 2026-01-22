#include<stdio.h>

int main (){

    char one[255], two[255], three[255];

    scanf ("%s %s %s", one, two, three);
    printf("%s %s %s\n", three, two, one);

    return 0;
}