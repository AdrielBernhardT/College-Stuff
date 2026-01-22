#include <stdio.h>
#include <string.h>
#define max 1005

struct Plant {
    int id;
    char name[300];
};

void merge(struct Plant *arr, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    struct Plant L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    
    while (i < n1 && j < n2) {
        if (strcmp(L[i].name, R[j].name) <= 0) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(struct Plant *arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    FILE* fp = fopen("testdata.in","r");
    if (fp == NULL){
    	printf ("dk ad");
	}
    
    int n;

    fscanf(fp, "%d\n", &n);
    struct Plant data[max];

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d#%[^\n]\n", &data[i].id, data[i].name);
    }

    fclose(fp);

    mergeSort(data, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", data[i].id, data[i].name);
    }

    return 0;
}
