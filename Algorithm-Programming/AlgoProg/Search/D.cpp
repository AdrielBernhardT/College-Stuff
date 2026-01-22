#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

struct score{
	char nama[1001]; 
	int nilai; 
};

/*
2
3
Jojo#40
Lili#80
Bibi#90
Lili
3
Jojo#100
Lili#80
Bibi#90
Lili
*/

void swap(struct score* skor1, struct score* skor2){
	struct score temp=*skor1; 
	*skor1=*skor2; 
	*skor2=temp; 
}

void quickSort(score skor[], int start, int end){
	if(start>=end) return; 
	int pivot=skor[end].nilai; 
	int left=start-1, right=start; 
	for(right=start; right<end; right++){
		if(skor[right].nilai>pivot || (skor[right].nilai==pivot && strcmp(skor[right].nama, skor[end].nama)<0)){
			left++; 
			if(left!=right){
				swap(&skor[left], &skor[right]); 
			}
		}
	}
	swap(&skor[left+1], &skor[end]); 
	int pivotIndex=left+1; 
	quickSort(skor, start, pivotIndex-1); 
	quickSort(skor, pivotIndex+1, end);  
}

int binarySearch(score skor[], int start, int end, char target[21]){
	for(int i=start; i<=end; i++){
		if(strcmp(skor[i].nama, target)==0) return i+1; 
	}
	return -1; 
}

int main(){
	int n; 
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int a; 
		scanf("%d", &a); 
		getchar(); 
		char target[1001]; 
		score skor[1001]; 
		for(int j=0; j<a; j++){
			scanf("%[^#]#%d", skor[j].nama, &skor[j].nilai); 
			getchar(); 
		}
		scanf("%s", target); 
		getchar(); 
		quickSort(skor, 0, a-1); 
//		for(int j=0; j<a; j++){
//			printf("%s %d\n", skor[j].nama, skor[j].nilai); 
//		}
		printf("Case #%d: %d\n", i+1, binarySearch(skor, 0, a-1, target)); 
	}
	return 0; 
}