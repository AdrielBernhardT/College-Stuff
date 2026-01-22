#include <stdio.h>
int main(){
    char name[105];
    int age;
    long int NIS;
    scanf("%[^\n]", name); getchar(); //read the string until \n is
    scanf("%d %d", &NIS, &age); getchar();
    printf("Name: %s\nNIS: %d\nage: %ld\n",name,NIS,age);
    return 0;
}