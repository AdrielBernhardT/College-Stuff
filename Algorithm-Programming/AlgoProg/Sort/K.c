#include <stdio.h> 

/*
2
2 3 4 5 6 3 4 5 6 7 4 5 6 7 8 5 6 7 8 9 6 7 8 9 10 
3 3 4 4 2 2 3 3 3 2 3 2 3 3 2 2 2 3 2 2 3 3 4 4 3

2
4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4
5 7 6 7 10 8 2 3 4 11 11 3 4 5 6 8 9 4 6 7 8 12 7 8 9
*/ 

void swap(int* arr1, int* arr2){
	int temp=*arr1; 
	*arr1=*arr2; 
	*arr2=temp; 
}

void quickSort(int arr[], int start, int end){
	if(start>=end) return; 
	int pivot=arr[end]; 
	int left=start-1, right=start; 
	for(right=start; right<end; right++){
		if(arr[right]<=pivot){
			left++; 
			if(left!=right){
				swap(&arr[left], &arr[right]); 
			}
		}
	}
	swap(&arr[left+1], &arr[end]); 
	int pivotIndex=left+1; 
	quickSort(arr, start, pivotIndex-1); 
	quickSort(arr, pivotIndex+1, end); 
}

int main(){
	int n; 
	scanf("%d", &n); 
	for(int i=1; i<=n; i++){
		int arr[25], answer[5]; 
		for(int j=0; j<25; j++){
			scanf("%d", &arr[j]); 
		}
		quickSort(arr, 0, 24); 
		answer[0]=arr[0]/2; 
		answer[4]=arr[24]/2; 
		answer[3]=arr[23]-answer[4]; 
		answer[1]=arr[1]-answer[0]; 
		answer[2]=arr[3]==arr[4]?arr[3]-answer[0]:arr[4]-answer[0];  

		printf("Case #%d:", i); 
		for(int j=0; j<5; j++){
			printf(" %d", answer[j]); 
		}
		printf("\n"); 
	}
	return 0; 
}