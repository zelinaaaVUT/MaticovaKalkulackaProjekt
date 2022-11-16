#include <stdio.h>

void NasobeniSkalarem(int velikost, int maticeJedna[10][10], int skalar) {
	int i, j;
	int suma[10][10];

	for (i = 0; i < velikost; i++) {
		for (j = 0; j < velikost; j++) {
			suma[i][j] = maticeJedna[i][j] * skalar;
		}
	}

	for (i = 0; i < velikost; i++) {
		for (j = 0; j < velikost; j++) {
			printf("%d ", suma[i][j]);
		}
		printf("\n");
	}
}