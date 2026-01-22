#include <stdio.h>

int main(){
    int angka[105], counter = 0, temp;
    while(temp != 42){
        scanf("%d", &temp); getchar();
        angka[counter] = temp;
        counter++;
    }

    for (int i = 0; i < counter; i++)
    {
        printf("%d\n", angka[i]);
    }
    
    return 0;
}