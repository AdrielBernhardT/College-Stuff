#include <stdio.h>

int main(){
	FILE *fp = fopen("./testdata.in", "r");;

	int t, n;
	char str[101];
	fscanf(fp, "%d\n", &t);
	
	for (int i = 0; i < t; i++){
		fscanf(fp, "%[^\n]\n", str);
		fscanf(fp, "%d\n", &n);
		int count[26] = {0};
		int sw[26] = {0};
		
		for (int j = 0; j < n; j++){
			char start, end;
			fscanf(fp, "%c %c\n", &start, &end);
			if (!sw[start - 65]){
				sw[start - 65] = 1;
				for (int k = 0; str[k] != '\0'; k++){
					if(str[k] == start){
						str[k] = end;
					}
				}
			}
			
		}
		for (int j = 0; str[j] != '\0'; j++){
			count[str[j] - 65]++;	
		}
		for (int j = 0; j < 26; j++){
			if (count[j])
            {
                printf("%c %d\n", j + 65, count[j]);
            } 
		}
	}
	return 0;
}