#include <stdio.h>

int main(){
    int H1, H2, M1, M2;
    char code[20];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %02d:%02d-%02d:%02d",code, &H1, &M1, &H2, &M2);
        getchar();
        if (H1 != 00)
        {
            printf("%s %02d:%02d-%02d:%02d\n",code, H1-1, M1, H2-1, M2);
        }
        else
        {
            printf("%s 23:%02d-%02d:%02d\n",code, M1, H2-1, M2);

        }
        
    }
    return 0;
}