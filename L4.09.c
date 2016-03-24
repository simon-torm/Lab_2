#include <stdio.h>   
#include <math.h>

int main ()
{
	int max;
	double i, sum = 0;
	printf("\nI_max= ");
	scanf("%d", &max);
	
	for (i = 1; i <= max; i++)
		sum += pow(-1, i) / (((2 * i) + 1) * i);

	printf("\n\nSuma = %lf", sum);
	
	return 0;
}	