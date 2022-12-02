#include <stdio.h>
#include "MaticeHeader.h"

void TransponovanaMatice(int velikost, int maticeJedna[10][10]) {
	int i, j;
	int suma[10][10];

	for (i = 0; i < velikost; i++) { //for cykly i a j pro zapis do spravne bunky
		for (j = 0; j < velikost; j++) {
			suma[j][i] = maticeJedna[i][j]; //matice suma ma prohozene radky a sloupce aby byla transponovana
		}
	}

	VypsaniMatice(velikost, suma);
	UlozeniDoSouboru(velikost, suma);
}