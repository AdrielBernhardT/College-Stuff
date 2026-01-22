#include <stdio.h>

int main(){
	FILE* fp = fopen("./testdata.in", "r");

	// Tempat Declare
	int TestCase;
	char string[105];
	int condition;

	// Tempat Proses
	// Scan total testcase
	fscanf(fp, "%d\n", &TestCase);
	for (int i = 0; i < TestCase; i++)
	{
		fscanf(fp, "%[^\n]\n", string);
		fscanf(fp, "%d\n", &condition);
		int array[27] = {0};
		int idx[27] = {0};

		for (int j = 0; j < condition; j++)
		{
			char real_alphabet, change_alphabet;
			fscanf(fp, "%c %c\n", &real_alphabet, &change_alphabet);
			if (!array[real_alphabet - 65])
			{
				array[real_alphabet - 65] = 1;
				for (int k = 0; string[k] != '\0'; k++)
				{
					if (string[k] == real_alphabet)
					{
						string[k] = change_alphabet;
					}
				}
			}
		}
		// hitung jumlah berapa kali keluar
		for (int j = 0; string[j] != '\0'; j++)
		{
			idx[string[j] - 65]++;
		}

		// Tempat Output
		// ngeprint yang lebih dari 1
		for (int j = 0; j < 26; j++)
		{
			if (idx[j])
			{
				printf("%c %d\n", j+65, idx[j]);
			}
		}
	}
	return 0;
}