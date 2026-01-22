#include <stdio.h> 

int main(){
	int n; 
	scanf("%d", &n); 
	for(int i=0; i<n; i++){
		int a, b, count=0;
		scanf("%d %d", &a, &b);  
		int c[10001]; 
		for(int j=0; j<a; j++){
			scanf("%d", &c[j]); 
			if(c[j]>=b) count++; 
		}
		printf("Case #%d: %d\n", i+1, count); 
	}
	return 0; 
}