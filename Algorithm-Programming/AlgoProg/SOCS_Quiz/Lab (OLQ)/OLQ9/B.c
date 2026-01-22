#include <stdio.h>
#include <string.h>

typedef struct Dictionary{
    char singkat[51];
    char asli[51];
}Ref;

int main(){
    int totalsyarat, totalkalimat;
    char kalimat[1005][55];
    Ref data[101];
    // int ukuran_kalimat;
    // int index = 0;
    // char kata[1005][55];
    
    FILE *data = fopen("testdata.in", "r");

    // input banyak syarat
    fscanf(data, "%d", &totalsyarat); getchar();

    // input syarat
    for (int i = 1; i <= totalsyarat; i++) 
    {
        fscanf(data, "%[^#]#%[^\n]\n", &data[i].singkat, &data[i].asli); getchar();
    }

    // input banyak kalimat
    fscanf(data, "%d", &totalkalimat); getchar();
    
    // input kalimat
    for (int i = 1; i <= totalkalimat; i++)
    {   
        // Cara 1
        int idx = 0;
        while(1)
        {
            fscanf(data, "%s", &kalimat[i][idx]); getchar();
            // proses compare
            if (kalimat[i][idx] == " ")
            {
                continue;
            } 
            else if (kalimat[i][idx] == "\n")
            {
                break;
            }
            else
            {
                for (int j = 0; j < totalsyarat; j++)
                {
                    if (strcmp(kalimat[i][idx], data[j].singkat) == 0)
                    {
                        kalimat[i][idx] = data[j].asli;
                    }
                }
            }
            idx++;
        }
            
        
        
        //Cara 2
        /*// proses pengubahan
        ukuran_kalimat = strlen(kalimat);
        
        // proses pemotongan dari kalimat
        char *token = strtok(kalimat, " ");
        int index = 0;
        while (token != NULL) 
        {
            strcpy(kata[index], token);
            index++;
            token = strtok(NULL, " ");
        }*/


        // output hasil
        printf("Case #%d :\n", i);
        printf("%s\n", kalimat);
    }
    return 0;
}