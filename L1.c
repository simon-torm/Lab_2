#include <stdio.h>

int main ()
{
	int n, i;
	
	printf("Vvedite sheslo: ");
	scanf("%d", &n);
	
	printf("\nn > :");
	for (i = n - 1; i <= n; i--) {		
		if (i <= 0) {
			break;
		} else {
			printf(" %d", i);
		}
	}
	
	return 0;
}