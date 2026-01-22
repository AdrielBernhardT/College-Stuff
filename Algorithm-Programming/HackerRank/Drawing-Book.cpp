#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, p;

    scanf("%d %d", &n, &p); getchar();

    int front = p / 2;
    int back = n / 2 - front;

    int result = front < back ? front : back;
    printf("%d\n", result);
    return 0;
}