#include <stdio.h> 
#include <stdbool.h> 

/*
5
154 172 158 164 160
4
154
172
155
164
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
	else if(b[mid]==target){
		return mid+1; 
	}
	else if(b[mid]<target) return binarySearch(b, mid+1, end, target); 
	else if(b[mid]>target) return binarySearch(b, start, mid-1, target); 
}

int main(){
	int n; 
	scanf("%d", &n); 
	int b[100001]; 
	for(int i=0; i<n; i++){
		scanf("%d", &b[i]); 
	}
	quickSort(b, 0, n-1); 
	int ask; 
	scanf("%d", &ask); 
//	for(int i=0; i<n; i++){
//		printf("%d ", b[i]); 
//	}
//	printf("\n"); 
	for(int i=0; i<ask; i++){
		int height; 
		scanf("%d", &height); 
//		bool found=false; 
//		for(int j=0; j<n; j++){
//			if(height==b[j]){
//				printf("%d\n", j+1); 
//				found=true; 
//			}
//		}
//		if(!found) printf("-1\n"); 
		printf("%d\n", binarySearch(b, 0, n-1, height)); 
	}
	return 0; 
}