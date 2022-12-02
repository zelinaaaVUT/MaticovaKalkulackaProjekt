#include <stdio.h>
#include "MaticeHeader.h"

void SoucetMatic(int velikost, int maticeJedna[10][10], int maticeDva[10][10]) {
	int i, j;
	int suma[10][10];

	for (i = 0; i < velikost; i++) { //for cykly i a j pro zapis do spravne bunky
		for (j = 0; j < velikost; j++) {
			suma[i][j] = maticeJedna[i][j] + maticeDva[i][j]; //soucet dvou matic
		}
	}

	VypsaniMatice(velikost, suma);
	UlozeniDoSouboru(velikost, suma);
}