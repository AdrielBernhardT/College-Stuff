#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int getTotalX(int a[], int n, int b[], int m) {
    int lcm_a = a[0];
    for (int i = 1; i < n; i++) {
        lcm_a = lcm(lcm_a, a[i]);
    }

    int gcd_b = b[0];
    for (int i = 1; i < m; i++) {
        gcd_b = gcd(gcd_b, b[i]);
    }

    int count = 0;
    for (int i = lcm_a; i <= gcd_b; i += lcm_a) {
        if (gcd_b % i == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, m;
    int a[105], b[105];
    scanf("%d %d", &n, &m);


    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int result = getTotalX(a, n, b, m);
    printf("%d\n", result);

    return 0;
}
