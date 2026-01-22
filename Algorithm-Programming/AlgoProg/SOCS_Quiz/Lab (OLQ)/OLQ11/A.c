#include <stdio.h>

int flood(char Map[105][105], int x, int y, int m, int n){
    if (x < 0 || y < 0 || x >= m || y >= n || Map[y][x] == '#')
    {
        return 0;
    }
    else if (Map[y][x] == 'S')  
    {
        Map[y][x] = '#';
        return flood(Map, x-1, y, m, n)+flood(Map, x+1, y, m, n)+flood(Map, x, y-1, m, n)+flood(Map, x, y+1, m, n);
    }
    else if (Map[y][x] == '.')
    {
        Map[y][x] = '#';
        return flood(Map, x-1, y, m, n)+flood(Map, x+1, y, m, n)+flood(Map, x, y-1, m, n)+flood(Map, x, y+1, m, n) + 1;
    }
}

int main(){
    int TC;
    int x,y; // Matrix Input
    int m,n;
    char Map[105][105];
    int count = 0; // index buat hitung berapa banyak 
    scanf("%d", &TC); getchar(); // input total case
    for (int kasus = 1; kasus <= TC; kasus++) // loop kasus
    {
        scanf("%d %d", &x, &y); getchar(); //scan x y

        for (int i = 0; i < x; i++)
        {
            scanf("%s", Map[i]); getchar(); // Input per baris
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (Map[i][j] == 'S')
                {
                    m = j;
                    n = i;
                }
            }
        }

        // Checking Process
        count = flood(Map, m, n, y, x);

        printf("Case #%d: %d\n", kasus, count);
        count = 0;
    }
    return 0;
}