#include <stdio.h> 

/*
2
500000000000000000 499999999999999999
1000000000000000000
*/

void swap(long long int* b1, long long int* b2){
	long long int temp=*b1; 
	*b1=*b2; 
	*b2=temp; 
}

void quickSort(long long int b[], int start, int end){
	if(start>=end) return; 
	long long int pivot=b[end]; 
	long long int left=start-1, right=start; 
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
	int n, count=0; 
	scanf("%d", &n); 
	long long int b[101], c; 
	for(int i=0; i<n; i++){
		scanf("%lld", &b[i]); 
	}
	quickSort(b, 0, n-1); 
	scanf("%lld", &c);
	long long int sum=0;  
	for(int j=0; j<n; j++){
		sum+=b[j]; 
		if(sum<=c) count++; 
		else break; 
	}
	printf("%d\n", count); 
	return 0; 
}