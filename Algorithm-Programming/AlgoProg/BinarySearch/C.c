#include <stdio.h> 

unsigned long long int sumOfArr[100001]={0}; 

int binarySearch(unsigned long long int a[], int left, int right, unsigned long long int target){
//	int result = -1;
	while(left<=right){
		int midIndex=(left+right)/2; 
		if(sumOfArr[midIndex]<=target){
//			result = midIndex+1; 
			if(sumOfArr[midIndex+1]>target) return midIndex+1; 
			left=midIndex+1; 
		}
		else{
			right=midIndex-1; 
		}
	}
//	return result; 
}

int main(){
	int n; 
	scanf("%d", &n); 
	unsigned long long int a[100001]; 
	unsigned long long int currSum=0; 
	for(int i=0; i<n; i++){
		scanf("%llu", &a[i]); 
		currSum+=a[i]; 
		sumOfArr[i]=currSum; 
	}
	int test; 
	scanf("%d", &test); 
	unsigned long long int b; 
	for(int i=0; i<test; i++){
		scanf("%llu", &b); 
		if(b>sumOfArr[n-1]) printf("Case #%d: %d\n", i+1, n);  
		else if(b<sumOfArr[0]) printf("Case #%d: -1\n", i+1);  
		else printf("Case #%d: %d\n", i+1, binarySearch(a, 0, n-1, b)); 
	}
	return 0; 
}