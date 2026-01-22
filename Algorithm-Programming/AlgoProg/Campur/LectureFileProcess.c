#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa
{
    char NIM[20];
    char name[50];
    float gpa;
};

int total_max = 20;
int* cek = (int*)calloc(total_max, sizeof(int));

// cara dinamis
struct Mahasiswa* mhs_arr = 
        (struct Mahasiswa*)calloc(total_max, sizeof(struct Mahasiswa));

// cara non-dinamis
// struct Mahasiswa mhs_arr[20];

void show_data_Mahasiswa(int jml_terakhir)
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("| NIM\t\t| Name\t\t\t| GPA\t|\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    for(int i=0; i<jml_terakhir; i++)
    {
        printf("| %s\t| %-15s\t| %.2f\t|\n",
                mhs_arr[i].NIM,
                mhs_arr[i].name,
                mhs_arr[i].gpa);
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

void bubblesort_name_ascending(int temp_total)
{
    float swap_gpa = 0.0; // temporary buffering
    char swap_name [50] = ""; // temporary buffering
    char swap_nim [50] = ""; // temporary buffering
    for(int cyc=1; cyc<temp_total; cyc++)
    {
        for(int cur=temp_total-1; cur >= cyc; cur--)
        {
            if(strcmp(mhs_arr[cur-1].name, 
                    mhs_arr[cur].name) > 0  ) // jika alphabet di (index yg lebih kecil), lebih besar, daripada alphabet (di index yg setelahnya).
            {
                // do swapping (begin)

                // reset
                swap_gpa = 0.0;
                strcpy(swap_nim, "");
                strcpy(swap_name, "");

                // put cur to swap buffer
                swap_gpa = mhs_arr[cur].gpa;
                strcpy(swap_nim, mhs_arr[cur].NIM);
                strcpy(swap_name, mhs_arr[cur].name);

                // assign cur data with cur-1
                mhs_arr[cur].gpa = mhs_arr[cur-1].gpa;
                strcpy(mhs_arr[cur].NIM, mhs_arr[cur-1].NIM);
                strcpy(mhs_arr[cur].name, mhs_arr[cur-1].name);

                // assign cur-1 with data from swap
                mhs_arr[cur-1].gpa = swap_gpa;
                strcpy(mhs_arr[cur-1].NIM, swap_nim);
                strcpy(mhs_arr[cur-1].name, swap_name);

                // do swapping (end)

            }
        }
    }
}


void bubblesort_gpa_ascending(int temp_total)
{
    float swap_gpa = 0.0; // temporary buffering
    char swap_name [50] = ""; // temporary buffering
    char swap_nim [50] = ""; // temporary buffering
    for(int cyc=1; cyc<temp_total; cyc++)
    {
        for(int cur=temp_total-1; cur >= cyc; cur--)
        {
            if(mhs_arr[cur-1].gpa > mhs_arr[cur].gpa ) // jika alphabet di (index yg lebih kecil), lebih besar, daripada alphabet (di index yg setelahnya).
            {
                // do swapping (begin)

                // reset
                swap_gpa = 0.0;
                strcpy(swap_nim, "");
                strcpy(swap_name, "");

                // put cur to swap buffer
                swap_gpa = mhs_arr[cur].gpa;
                strcpy(swap_nim, mhs_arr[cur].NIM);
                strcpy(swap_name, mhs_arr[cur].name);

                // assign cur data with cur-1
                mhs_arr[cur].gpa = mhs_arr[cur-1].gpa;
                strcpy(mhs_arr[cur].NIM, mhs_arr[cur-1].NIM);
                strcpy(mhs_arr[cur].name, mhs_arr[cur-1].name);

                // assign cur-1 with data from swap
                mhs_arr[cur-1].gpa = swap_gpa;
                strcpy(mhs_arr[cur-1].NIM, swap_nim);
                strcpy(mhs_arr[cur-1].name, swap_name);

                // do swapping (end)

            }
        }
    }
}


int main()
{
    FILE* fp = fopen("data_Thursday_course.txt", "r");
    char buff[100] = "";
    char temp_NIM[50] = "";
    char temp_name[50] = "";
    float temp_gpa = 0.0;
    int iter_mhs = 0;
    char* split_temp = "";
    int flag = 0;


    if (fp != NULL)
    {
        printf("File is found ...\n");
        
        
        while(!feof(fp)) // While it does not find the EOF (end of file)
        {
            // Cara 1: (directly fetch data according to variable from file):
            // fscanf(fp, "%[^#]#%[^;];%f\n", 
            //                 &temp_NIM, &temp_name, &temp_gpa);
            // fflush(stdin);
            // // printf("temp: %s %s %.2f\n", 
            // //             temp_NIM, temp_name, temp_gpa);
            // mhs_arr[iter_mhs].gpa = temp_gpa;
            // strcpy(mhs_arr[iter_mhs].NIM, temp_NIM);
            // strcpy(mhs_arr[iter_mhs].name, temp_name);
            
            // Cara 2: (just fetch string from file)
            fscanf(fp, "%[^\n]\n", buff);
            fflush(stdin);
            printf("buff: %s\n", buff);

            printf("--- Process strtok ---\n");
            split_temp = strtok(buff, "#");
            printf("after tanda # = %s \n", split_temp);
            strcpy(mhs_arr[iter_mhs].NIM, split_temp);

            flag = 0; // Flag for delimiter (splitter Name or GPA)
            while(split_temp != NULL) // cek split_temp yg lama ada isinya atau tidak
            {
                split_temp = strtok(NULL, ";"); // cari split_temp yg baru
                if(split_temp == NULL) break;
                printf("after tanda ; = %s \n", split_temp);
                if (flag % 2 == 0) 
                    strcpy(mhs_arr[iter_mhs].name, split_temp);
                else
                    mhs_arr[iter_mhs].gpa =  atof(split_temp); // casting string to float (string to int use atoi())

                flag++;
            }
            
            iter_mhs++;


        }
        printf("Before data added: \n");
        show_data_Mahasiswa(iter_mhs);
        printf("\n\nPress Enter to continue ...\n");
        getchar();
        bubblesort_name_ascending(iter_mhs);
        printf("=-=-=- After Bubblesort Name -=-=-=\n");
        show_data_Mahasiswa(iter_mhs);
        printf("\n\nPress Enter to continue ...\n");
        getchar();
        bubblesort_gpa_ascending(iter_mhs);
        printf("=-=-=- After Bubblesort GPA -=-=-=\n");
        show_data_Mahasiswa(iter_mhs);
        printf("\n\nPress Enter to continue ...\n");
        getchar();
    
    }
    else
    {
        printf("File not found ...\n");
    }

    fclose(fp);

    char input_NIM[20] = "";
    char input_name[20] = "";
    float input_gpa = 0.0;
    printf("Masukkan NIM mahasiswa baru: ");
    scanf("%[^\n]", &input_NIM); fflush(stdin);
    printf("Masukkan nama mahasiswa baru: ");
    scanf("%[^\n]", &input_name); fflush(stdin);
    printf("Masukkan GPA mahasiswa baru: ");
    scanf("%f", &input_gpa); fflush(stdin);

    mhs_arr[iter_mhs].gpa = input_gpa;
    strcpy(mhs_arr[iter_mhs].NIM, input_NIM);
    strcpy(mhs_arr[iter_mhs].name, input_name);
    iter_mhs++;
    printf(">> After adding new student <<\n");
    show_data_Mahasiswa(iter_mhs);

    fp = fopen("data_Thursday_course.txt", "w"); // a -> append, w -> write 
    for(int i=0; i<iter_mhs; i++)
    {
        fprintf(fp, "%s#%s;%.2f\n", 
            mhs_arr[i].NIM,
            mhs_arr[i].name,
            mhs_arr[i].gpa);
    }
    fclose(fp);


    return 0;
}