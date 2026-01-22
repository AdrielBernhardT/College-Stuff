#include <stdio.h>

int main() {
    char A, B, C;
    scanf("%c %c %c", &A, &B, &C);

    if (A < B && B < C) {
        printf("1 2 3\n");
    } else if (A < C && C < B) {
        printf("1 3 2\n");
    } else if (B < A && A < C) {
        printf("2 1 3\n");
    } else if (B < C && C < A) {
        printf("2 3 1\n");
    } else if (C < A && A < B) {
        printf("3 1 2\n");
    } else if (C < B && B < A) {
        printf("3 2 1\n");
    }
    return 0;
}