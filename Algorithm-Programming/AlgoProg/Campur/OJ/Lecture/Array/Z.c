#include <stdio.h>

void solve(int N, int K, int stairs[]) {
    int breath = K;
    int position = 0;
    int alive = 0;

    while (position < N) {
        if (stairs[position] == 1) {
            // Jojo can use the stairs to go to the second floor and breathe
            breath = K;
        } else {
            // Jojo moves to the next plot
            breath--;
        }

        if (breath < 0) {
            // Jojo runs out of breath
            alive = 0;
            break;
        }

        position++;
    }

    if (position == N) {
        alive = 1;
    }

    if (alive) {
        printf("Alive\n");
    } else {
        printf("Dead\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, K;
        scanf("%d %d", &N, &K);

        int stairs[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &stairs[i]);
        }

        printf("Case #%d: ", t);
        solve(N, K, stairs);
    }

    return 0;
}