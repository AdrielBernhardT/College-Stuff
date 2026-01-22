#include <stdio.h>
int main(){
    int size;
    scanf("%d", &size);
    int arr[size], urutan[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &urutan[i]);
    }
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[urutan[i]]);
    }
    for(int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            printf("%d\n", arr[i]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}