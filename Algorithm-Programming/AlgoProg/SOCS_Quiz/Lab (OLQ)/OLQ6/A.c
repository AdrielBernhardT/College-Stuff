#include<stdio.h>

int main(){

    long long int n;
    int t;
    long long int desimal[1005];
    long long int perbandingan;
    long long int temp;
    long long int hasil1;
    long long int hasil2;
    long long int count;
    scanf("%lld", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        for(int j = 0; j < t; j++){
            scanf("%lld", &desimal[j]);
        }
        hasil1 = 0;
        hasil2 = 0;
        for(int j = 0; j < t; j++){
            for(int k = 0; k < t; k++){
                if(j != k){
                    perbandingan = desimal[j] ^ desimal[k];
                    count = 0;
                    for(int l = 0; perbandingan != 0; l++){
                        temp = perbandingan % 2;
                        if(temp == 1){
                            count++;
                        }
                        perbandingan /= 2;
                    }
                    if(count >= 3){
                        hasil1++;
                    } else{
                        hasil2++;
                    }
                }
            }
        }
        printf("Case #%lld: %lld %lld\n", i + 1, hasil1 / 2, hasil2/2);
    }

    return 0;
}