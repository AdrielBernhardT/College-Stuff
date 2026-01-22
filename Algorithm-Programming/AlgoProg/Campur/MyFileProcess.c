#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Mahasiswa
{
    char NIM[20];
    char nama[50];
    float gpa; 
} mhs[10];

int main(){
    // append file
    FILE* fp = fopen("testdata.txt", "a");

    char tambahan[100];
    scanf("%[^\n]", &tambahan); getchar();
    fprintf(fp,"\n%s", tambahan);
    fclose(fp);

    // Read File
    fp = fopen("testdata.txt", "r");

    int i=1;

    if (fp != NULL)
    {
        printf("File is found\n");
        while (! feof(fp)) //selama belum eof dari fp
        {
            fscanf(fp, "%[^#]#%[^;];%f\n", &mhs[i].NIM, &mhs[i].nama, &mhs[i].gpa); 
            fflush(stdin);  
            i++;    
        }
        for (int j = 1; j < i; j++)
        {
            printf("No %d\nNIM\t: %s\nNama\t: %s\nGPA\t: %.2f\n", j, mhs[j].NIM, mhs[j].nama, mhs[j].gpa);
        }
    }
    else
    {
        printf("File not found");
    }
    fclose(fp);

    // Write File
    fp = fopen("testdata.txt", "w");

    char ganti[100];
    scanf("%[^\n]", &ganti); getchar();
    fprintf(fp,"%s\n", ganti);
    fclose(fp);

    // tampilin file akhir
    fp = fopen("testdata.txt", "r");
    fscanf(fp, "[^\n]", &ganti);
    fflush(stdin);
    printf("cek: %s", ganti);
    fclose(fp);


    return 0;
}