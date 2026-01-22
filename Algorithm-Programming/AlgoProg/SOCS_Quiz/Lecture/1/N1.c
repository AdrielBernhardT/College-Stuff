#include <stdio.h>

int main(){
    char nama1[101], nama2[101];
    double tinggi1, tinggi2;
    int umur1, umur2;
    
    scanf("%s %lf %d %s %lf %d", nama1, &tinggi1, &umur1, nama2, &tinggi2, &umur2);
    printf("Name 1: %s\nHeight 1: %.2lf\nAge 1: %d\n", nama1, tinggi1, umur1);
    printf("Name 2: %s\nHeight 2: %.2lf\nAge 2: %d\n", nama2, tinggi2, umur2);
    
    return 0;
}