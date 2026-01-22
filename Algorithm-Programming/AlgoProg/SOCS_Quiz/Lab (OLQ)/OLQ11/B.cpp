#include <stdio.h>

// Ukuran Papan
#define ukuran_papan 8

// Rekrusi langkahkuda
int langkahkuda(int map[ukuran_papan][ukuran_papan], int langkah, int x, int y)
{
    // kondisi set ketika langkah sudah habis
    if (langkah == 0)
    {
        return  map[ukuran_papan - y][ukuran_papan - x] = 1;
    }
    if (x < 0 || y < 0 || x >= ukuran_papan || y >= ukuran_papan)
    {
        return 1;
    }
    else
    {
        langkahkuda(map, langkah-1, x+2, y+1);
        langkahkuda(map, langkah-1, x+2, y-1);
        langkahkuda(map, langkah-1, x-2, y+1);
        langkahkuda(map, langkah-1, x-2, y-1);
        langkahkuda(map, langkah-1, x+1, y+2);
        langkahkuda(map, langkah-1, x+1, y-2);
        langkahkuda(map, langkah-1, x-1, y+2);
        langkahkuda(map, langkah-1, x-1, y-2);
    }
}

void reset(int map[ukuran_papan][ukuran_papan]){
    for (int k = 0; k < ukuran_papan; k++)
    {
        for (int m = 0; m < ukuran_papan; m++)
        {
            map[k][m] = 0;
        }
    }
}

void Compare(int map1[ukuran_papan][ukuran_papan], int map2[ukuran_papan][ukuran_papan], int kasus){
    int found = 0;
    for (int k = 0; k < ukuran_papan; k++)
        {
            for (int j = 0; j < ukuran_papan; j++)
            {
                if (map1[k][j] == map2[k][j] && map1[k][j] == 1)
                {
                    found = 1;
                }
            }
        }
        if (found == 1)
        {
            printf("Case #%d: YES\n", kasus);
        }
        else if (found != 1)
        {
            printf("Case #%d: NO\n", kasus);
        }
}
int main(){
    int TC;
    int langkah;
    char x1, x2;
    int y1, y2;
    int map1[ukuran_papan][ukuran_papan];
    int map2[ukuran_papan][ukuran_papan];

    scanf("%d", &TC); getchar();

    for (int kasus = 1; kasus <= TC; kasus++)
    {
        // Input Station
        scanf("%d", &langkah); getchar();
        scanf("%c%d %c%d", &x1, &y1, &x2, &y2); getchar();

        // GAP-ing Station
        x1 -= 'A';
        x2 -= 'A';

        // Recursion Station
        langkahkuda(map1, langkah, x1, y1-1); 
        langkahkuda(map2, langkah, x2, y2-1);

        // Comparing Station
        Compare(map1, map2, kasus);
        
        // Reset Station
        reset(map1);
        reset(map2);
    }
    return 0;
}

// // Print map1 
        // for (int k = 0; k < ukuran_papan; k++)
        // {
        //     for (int j = 0; j < ukuran_papan; j++)
        //     {
        //         printf("|%d", map1[k][j]);
        //     }
        //     printf("\n");
        // }
        
        // printf("\n");

        // // print map2
        // for (int k = 0; k < ukuran_papan; k++)
        // {
        //     for (int j = 0; j < ukuran_papan; j++)
        //     {
        //         printf("|%d", map2[k][j]);
        //     }
        //     printf("\n");
        // }
        // printf("\n");