#include <stdio.h>

int main(){
    char nama[100];
    int umur;
    scanf("%[^\n]", &nama);
    scanf("%d", &umur);
    printf("%s\n%d\n", nama, umur);
    return 0;
}