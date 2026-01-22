#include <stdio.h>
int main()
{
	char id[255], nama[255], kelas[110];
	int angka;
	scanf("%s", id);
	scanf("%[^\n]", nama);
	scanf("%s %d", kelas, &angka);
	printf("Id    : %s\n", id);
	printf("Name  : %s\n", nama);
	printf("Class : %s\n", kelas);
	printf("Num   : %d\n", angka);
	return 0;
}
