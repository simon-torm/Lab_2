#include <stdio.h>   

int main ()
{
	int max;
	double i, sum = 0;
	printf("\nI_max= ");
	scanf("%d", &max);
	
	for (i = 1; i <= max; i++)
		sum += 1 / (((2 * i) + 1) * ((2 * i) + 1));

	printf("\n\nSuma = %lf", sum);
	
	return 0;
}