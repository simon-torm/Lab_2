#include <stdio.h>

int main ()
{
	int mas [100];
	int n, i;
	printf("\nRozmer masiva: ");
	scanf("%d", &n);
	i = 0;
	
	while (i < n) {
		printf("\nmas[%d]= ", i);
		scanf ("%d", &mas[i]);
		i++;
	}
	printf("\n\nVashi shisla: ");
	i = 0;
	
	while (i < n) {
		printf(" %d", mas[i]);
		i++;
	}
	printf("\n\n");
	
	return 0;
}