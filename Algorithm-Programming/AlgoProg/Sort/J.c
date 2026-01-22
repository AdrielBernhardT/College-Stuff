#include<stdio.h> 

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

int main(){
	int n; 
	scanf("%d", &n); 
	for(int i=0; i<n; i++){
		int a, medianIndex; 
		scanf("%d", &a); 
		int b[5001]; 
		double mean=0, median; 
		for(int j=0; j<a; j++){
			scanf("%d", &b[j]); 
			mean+=b[j]; 
		}
		mean/=a; 
		quickSort(b, 0, a-1); 
		if(a%2==0){
			int temp=a/2; 
			median=b[temp-1]+b[temp]; 
			median/=2; 
		}
		else {
			medianIndex=a/2; 
			median=b[medianIndex]; 
		}
		printf("Case #%d:\n", i+1); 
		printf("Mean : %.2lf\n", mean); 
		printf("Median : %.2lf\n", median); 
	}
	return 0; 
}