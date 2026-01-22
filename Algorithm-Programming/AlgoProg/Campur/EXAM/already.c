#include <stdio.h>


int main(){
    char string[105], pengganti[5] = "2018";
    scanf("%[^\n]", &string); getchar();
    for (int i = 0; i < 4; i++)
    {
        string[i] = pengganti[i];
    }
    
    // string[0] = '2';
    // string[1] = '0';
    // string[2] = '1';
    // string[3] = '8';
    printf("%s\n", string);
    
    return 0;
}