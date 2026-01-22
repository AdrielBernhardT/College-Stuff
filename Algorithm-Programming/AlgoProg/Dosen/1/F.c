#include <stdio.h>
int main(){
    char string[105];
    int age;
    scanf("%[^\n]", string); getchar();
    scanf("%d", &age); getchar();
    printf("%s\n%d\n", string, age);

    return 0;
}