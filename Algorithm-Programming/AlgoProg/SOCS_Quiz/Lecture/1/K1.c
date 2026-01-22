#include <stdio.h>

int main (){
    char nama[101], NIS[9];
    int umur;
    scanf("%[^\n]", nama);
    scanf("%s %d", NIS, &umur);
    printf("Name: %s\nNIS: %s\nAge: %d\n", nama, NIS, umur);
    return 0;
}