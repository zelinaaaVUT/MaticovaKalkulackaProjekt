#include <stdio.h>

void NasobeniMatic(int velikost, int maticeJedna[10][10], int maticeDva[10][10]) {
	int i, j, k;
	int suma[10][10];

	for (i = 0; i < velikost; i++) {
		for (j = 0; j < velikost; j++) {
			suma[i][j] = 0;
			for (k = 0; k < velikost; k++) {
				suma[i][j] += maticeJedna[i][k] * maticeDva[k][j];
			}
		}
	}

	for (i = 0; i < velikost; i++) {
		for (j = 0; j < velikost; j++) {
			printf("%d ", suma[i][j]);
		}
		printf("\n");
	}
}