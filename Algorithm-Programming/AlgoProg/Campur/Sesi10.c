#include <stdio.h>

int main(){
    int *ptr, **p2;
    int sum = 10;
    ptr = &sum;
    p2 = &ptr;
    printf("alamat sum: %d\n", &sum);
    printf("content dari ptr: %d\n", ptr);
    printf("isi dari alamat ptr: %d\n", *ptr);
    printf("isi dari p2: %d\n", p2);
    printf("alamat ptr: %d\n", &ptr);
    return 0;
}