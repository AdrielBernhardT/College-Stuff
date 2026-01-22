#include <stdio.h> 
#define ull unsigned long long int 

int binarySearch(ull arr[], int left, int right, ull sumTarget){
	int index=0, start=0; 
	ull result=0; 
	for(int end=0; end<right; end++){
		result+=arr[end]; 
		while(result>sumTarget && start<=end){
			result-=arr[start]; 
			start++; 
		}
		if(result<=sumTarget) index=(end-start+1)>index?(end-start+1):index; 
	}
	return (index==0)?-1:index; 
}

int main(){
	int n; 
	scanf("%d", &n); 
	ull arr[100001]; 
	for(int i=0; i<n; i++){
		scanf("%llu", &arr[i]); 
	}
	int totalAsk; 
	scanf("%d", &totalAsk); 
	for(int i=0; i<totalAsk; i++){
		ull asked; 
		scanf("%llu", &asked); 
		printf("Case #%d: %d\n", i+1, binarySearch(arr, 0, n, asked)); 
	}
	return 0; 
}