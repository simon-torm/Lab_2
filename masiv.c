#include <stdio.h>

int main ()
{
	int mas[255], mas_ne[255], i = -1, zn, sum = 0, 
	max, max_ne, i2 = -1, MAX;
	
	printf("\n\nVvodite shisla: ");
	do {
		i++;		
		printf("\nmas[%d]= ", i);
		zn = scanf("%d", &mas[i]);
		if (zn != 0) {
			sum += mas[i];
		} else {}
	} while (zn != 0);	
	
	system ("pause");
	
	max = i - 1;
	printf("\n\nVu vveli %d shisel", i);
	printf("\n\nSuma shisel = %d", sum);	
	
	printf("\n\nParni shisla:");
	for (i = 0; i <= max; i++) {
		zn = mas[i]%2;
		if (zn == 0) {
			printf(" %d,", mas[i]);
		} else {
			i2++;
			mas_ne[i2] = mas[i];
		}
	}
	max_ne = i2;
	printf("\n\nNeparni shisla:");
	i2 = 0;
	if (max_ne >= 0) {
		while (i2 <= max_ne) {
			printf(" %d,", mas_ne[i2]);
			i2++;
		}
	} else {
		printf(" netu.");
	}
	
	for (i = 0, MAX = mas[0]; i <= max; i++) {
		zn = mas[i] > MAX;
		if (zn == 1) {
			MAX = mas[i]; 
		} else {}
	}
	printf("\n\nSamoe bolshoe sheslo: %d", MAX);
	
	printf("\n\n *******   E N D   *******\n\n");
	system ("pause");
	
	return 0;
}
