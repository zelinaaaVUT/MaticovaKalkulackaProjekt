#include <stdio.h>
#include "MaticeHeader.h"

void NasobeniMatic(int velikost, int maticeJedna[10][10], int maticeDva[10][10]) {
	int i, j, k;
	int suma[10][10]; //matice do ktere budu ukladat vysledek nasobeni

	for (i = 0; i < velikost; i++) {	//for cykly i a j slouzi pro to abych zapisoval do spravne bunky v matici
		for (j = 0; j < velikost; j++) {
			suma[i][j] = 0; //inicializace bunky na 0
			for (k = 0; k < velikost; k++) { //vnitrni for cykly
				suma[i][j] += maticeJedna[i][k] * maticeDva[k][j]; //pricitani do bunky
			}
		}
	}

	VypsaniMatice(velikost, suma);
	UlozeniDoSouboru(velikost, suma);
}