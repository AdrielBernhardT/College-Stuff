#include <stdio.h>
int main(){
    for (int i = 0; i < 5; i++)
    {
        for(int ii = 0; ii < 5; ii++){
            if (i == 0 || i == 4 || ii == 0 || ii == 4)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }  
        }
        printf("\n");
    }
    
    return 0;
}