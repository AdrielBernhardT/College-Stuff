#include <stdio.h>
#include <string.h>

struct Video{
	char title[1001];
	char artist[1001];
	int view;
}videos[100];

char toUp(char let){
	if (let >= 97 && let <= 122) return let - 32;
	return let;
}

int main()
{
	FILE *f, *put;
	f = fopen("testdata.in", "r");
	int n = 0;
	while (!feof(f)){
		fscanf(f, "%[^#]#%[^#]#%d\n", videos[n].title, videos[n].artist, &videos[n].view);
		n++;
	}
	Video temp;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (videos[j].view < videos[j + 1].view){
				temp = videos[j];
				videos[j] = videos[j + 1];
				videos[j + 1] = temp;
			}	
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - 1; j++){
			if (videos[j].view == videos[j + 1].view){
				if (strcmp(videos[j].title, videos[j + 1].title) > 0){
					temp = videos[j];
					videos[j] = videos[j + 1];
					videos[j + 1] = temp;
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++){
		printf("%s by %s - %d\n", videos[i].title, videos[i].artist, videos[i].view);
	}
	
	return 0;
}

