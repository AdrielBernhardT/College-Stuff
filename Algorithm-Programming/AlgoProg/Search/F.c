#include <stdio.h> 

int main(){
	int n; 
	scanf("%d", &n); 
	long long int a[101], easy=0, hard=0; 
	for(int i=0; i<n; i++){
		scanf("%lld", &a[i]); 
		if(a[i]==0)easy++; 
		else hard++; 
	}
	if(hard==0){
		printf("easy\n"); 
	}
	else{
		printf("not easy\n"); 
	}
	return 0; 
}