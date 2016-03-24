#include <stdio.h>   

int main ()
{
	int max;
	double i, sum = 1;
	printf("\nI_max= ");
	scanf("%d", &max);
	
	for (i = 1; i <= max; i++)
		sum *= (i * i) / ((i * i) + (2 * i) + 3);

	printf("\n\nSuma = %lf", sum);
	
	return 0;
}