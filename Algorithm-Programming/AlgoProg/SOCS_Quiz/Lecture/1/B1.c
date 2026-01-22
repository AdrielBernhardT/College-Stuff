#include <stdio.h>

int main(){
    int awal;
    int berapa;

    scanf("%d %d", &awal, &berapa);
    for (int i = awal; i < awal + berapa; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
