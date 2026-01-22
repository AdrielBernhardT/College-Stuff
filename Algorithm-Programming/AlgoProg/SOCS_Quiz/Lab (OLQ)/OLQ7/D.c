#include <stdio.h>
#include <math.h>

int main (){
	
	int n;
	scanf("%d", &n);
	
	long long m;
	
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	int flag4 = 0;
	int count = 0;
	
	for (int i = 0; i < n; i++)
    {
		scanf("%lld", &m);
		
		for (int j = 1; j <= m; j++)
        {
			if (j*j*j == m)
            {
				flag2 = 1; // kubik
			} 
			
			if (m == j*j)
            {
				flag1 = 1; // square
			} 
			
			if (m % j == 0)
            {
				count++;
			}
		}
		if (flag1 == 1){
			if (flag2 == 1){
				printf ("Case #%d : square cubic\n", i+1);
			} else {
				printf ("Case #%d : square\n", i+1);		
			}			
		} else if (flag2 == 1){
			printf ("Case #%d : cubic\n", i+1);
		} else if (count == 2){
			printf ("Case #%d : prime\n", i+1);
		} else {
			printf ("Case #%d : none\n", i+1);
		}
		
		flag1 = 0;
		flag2 = 0;
		flag3 = 0;
		flag4 = 0;
		count = 0;
	}
	return 0;
}