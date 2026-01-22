#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 

int flag[26]; 
bool changed[26]; 

int main(){
	FILE *fptr=fopen("testdata.in", "r"); 
	int n; 
	fscanf(fptr, "%d\n", &n); 
	for(int i=0; i<n; i++){
		for(int j=0; j<26; j++){
			flag[j]=0; 
			changed[j]=false; 
		}
		char name[101]; 
		fscanf(fptr, "%[^\n]\n", name); 
//		printf("%s\n", name); 
		int x=strlen(name), a; 
		fscanf(fptr, "%d\n", &a); 
		char initial, terminal; 
		for(int j=0; j<a; j++){
			fscanf(fptr, "%c %c\n", &initial, &terminal);  
			if(changed[initial-'A']==true) continue; 
			changed[initial-'A']=true; 
			for(int k=0; k<x; k++){
				if(name[k]==initial) name[k]=terminal; 
			}
		}
		for(int j=0; j<x; j++){
			if(name[j]==' ') continue; 
			flag[name[j]-'A']++; 
		}
		for(int j=0; j<26; j++){
			if(flag[j]>0) printf("%c %d\n", j+'A', flag[j]); 
		}
	}
	fclose(fptr); 
	return 0; 
}