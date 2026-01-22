#include <stdio.h> 

int binarySearch(int arr[], int start, int end, unsigned long long int sumTarget){
	int index=0; 
	while(start<=end){
		unsigned long long int tempSum=0; 
		int idxTotal=0; 
		for(int i=start; i<=end; i++){
			if(tempSum+arr[i]<=sumTarget){
				tempSum+=arr[i]; 
				idxTotal++; 
			}
			else break; 
		}
		if(idxTotal>index) index=idxTotal; 
		start++; 
	}
	return index; 
}

int main(){
	int n; 
	scanf("%d", &n);  
	for(int i=0; i<n; i++){
		int a, result; 
		unsigned long long int b; 
		scanf("%d %llu", &a, &b); 
		int arr[10001]; 
		for(int j=0; j<a; j++){
			scanf("%d", &arr[j]); 
		}
		result=binarySearch(arr, 0, a-1, b); 
		if(result==0) result=-1; 
		printf("Case #%d: %d\n", i+1, result); 
	}
	return 0; 
}