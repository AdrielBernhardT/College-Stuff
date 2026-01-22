#include <stdio.h>
#include <string.h>
int main(){
    int jumlah_kasus, jumlah_permainan, bibi = 0, lili = 0;
    char hasil[100000];
  
    scanf("%d", &jumlah_kasus);
    for (int i = 0; i < jumlah_kasus; i++)
    {
        scanf("%d", &jumlah_permainan);
        for (int j = 0; j < jumlah_permainan; j++)
        {
            scanf("%s",hasil[j]);
            if (strcmp (hasil[j], "L") == 0)
            {
                lili++;
            }
            else
            {
                bibi++;
            }
        } 
        if (bibi>lili)
        {
            printf("Bibi\n");
        }
        else if (bibi<lili)
        {
            printf("Lili\n");
        }
        else
        {
            printf("None\n");
        }
        bibi=0;
        lili=0;
    }
   
    return 0;
}