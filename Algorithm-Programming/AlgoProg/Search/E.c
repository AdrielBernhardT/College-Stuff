#include <stdio.h> 

/*
3
10
3246 4255 4873 5004 5095 6001 6692 7100 7610 9712
9712
8
4957 5444 5464 5634 6149 6622 8313 9492
4957
6
5393 6021 7233 8115 8118 9304
9999
*/ 

void swap(int* b1, int* b2){
	int temp=*b1; 
	*b1=*b2; 
	*b2=temp; 
}

void quickSort(int b[], int start, int end){
	if(start>=end) return; 
	int pivot=b[end]; 
	int left=start-1, right=start; 
	for(right=start; right<end; right++){
		if(b[right]<=pivot){
			left++; 
			if(left!=right){
				swap(&b[left], &b[right]); 
			}
		}
	}
	swap(&b[left+1], &b[end]); 
	int pivotIndex=left+1; 
	quickSort(b, start, pivotIndex-1); 
	quickSort(b, pivotIndex+1, end); 
}

int binarySearch(int b[], int start, int end, int target){
	int mid=start+(end-start)/2; 
	if(start>end) return -1; 
	else if(b[mid]==target) return b[mid+1]; 
	else if(b[mid]<target) return binarySearch(b, mid+1, end, target); 
	else if(b[mid]>target) return binarySearch(b, start, mid-1, target); 
}

int main(){
	int n; 
	scanf("%d", &n); 
	for(int i=0; i<n; i++){
		int a, power; 
		scanf("%d", &a); 
		int b[1001]; 
		for(int j=0; j<a; j++){
			scanf("%d", &b[j]); 
		}
		scanf("%d", &power); 
		quickSort(b, 0, a-1); 
		printf("CASE #%d: ", i+1); 
		if(power==b[a-1]) printf("%d %d\n", b[a-2], b[a-1]); 
		else if(binarySearch(b, 0, a-1, power)==-1) printf("-1 -1\n");
		else if(power!=b[a-1]){
			printf("%d %d\n", power, binarySearch(b, 0, a-1, power)); 
		} 
	}
	return 0; 
}