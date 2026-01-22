#include<stdio.h>
#include<string.h>
int main(){
    int test_case;
    char kalimat[1000];
    int len;

    scanf("%d", &test_case);

    int hasil = 0;

    for (int i = 1; i <= test_case; i++)
    {
        hasil = 0;
        scanf("%s", kalimat); getchar();
        len = strlen(kalimat);
        for (int j = 0; j < len/2; j++)
        {
            if (kalimat[j] == kalimat[len-1-j])
            {
                hasil++;
            }
        }
        if (hasil >= (len/2))
        {
            printf("Case #%d: Yay, it's a palindrome\n", i);  
        }
        else
        {
            printf("Case #%d: Nah, it's not a palindrome\n", i);
        }
    }
    return 0;
}