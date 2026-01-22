#include <stdio.h>

int main(){
    char angka[5];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", &angka);
        getchar();
        printf("%c\n", angka[1]);
    }
    return 0;
}