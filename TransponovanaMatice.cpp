#include <stdio.h>
#include "MaticeHeader.h"

void TransponovanaMatice(int velikost, int maticeJedna[10][10]) {
	int i, j;
	int suma[10][10];

	for (i = 0; i < velikost; i++) {
		for (j = 0; j < velikost; j++) {
			suma[j][i] = maticeJedna[i][j];
		}
	}

	VypsaniMatice(velikost, suma);
	UlozeniDoSouboru(velikost, suma);
}