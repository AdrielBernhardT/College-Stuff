#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0; // Bilangan kurang dari atau sama dengan 1 bukan prima
    if (n <= 3) return 1; // 2 dan 3 adalah bilangan prima

    // Periksa untuk bilangan-bilangan lain
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Jika n habis dibagi oleh i, bukan bilangan prima
        }
    }
    return 1; // Jika tidak ada pembagi selain 1 dan n itu sendiri, bilangan prima
}

int main(){
    int TC, start, end;
    scanf("%d", &TC);
    for (int i = 0; i < TC; i++)
    {
        scanf("%d %d", &start, &end);
        for (int ii = start; ii <= end; ii++)
        {
            if (isPrime(ii)==1)
            {
                printf("%d\n", ii);
            }
        }
    }
    return 0;
}