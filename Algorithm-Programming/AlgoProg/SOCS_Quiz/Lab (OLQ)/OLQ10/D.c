#include <stdio.h>

int countLightning(int N, int A, int B, char *sound){
    int count = 0;
    int consecutiveLightning = 0;
    2
    for (int i = 0; i < N; i++){
        if (sound[i] == '1'){
            consecutiveLightning++;
        } else{
            if(consecutiveLightning >= A && consecutiveLightning <= B){
                count++;
            }
            consecutiveLightning = 0;
        }
    }

    if(consecutiveLightning >= A && consecutiveLightning <= B){
        count++;
    }
    return count;
}

int main(){
    FILE *file = fopen("testdata.in", "r");
    if(file == NULL){
        fprintf(stderr, "Tidak dapat membuka file 'testdata.in'\n");
        return 1;
    }

    int T;
    fscanf(file, "%d", &T);

    for (int j = 1; j <= T; j++){
        int N, A, B;
        fscanf(file, "%d %d %d", &N, &A, &B);

        char sound[N + 1];
        fscanf(file, "%s", sound);

        int result = countLightning(N, A, B, sound);

        printf("Case #%d: %d\n", j, result);
    }

    fclose(file);

    return 0;
}