#include <stdio.h>

int main ()
{
	int n, i = 0;
	printf("\nVvedite n: ");
	scanf("%d", &n); 
	
	while (n != 0) {
		n = n / 10;
		i++;
	}
	printf("\nVashe 4islo zanimaet %d cufr.\n", i);
	
	system ("pause");	
	
	return 0;
}