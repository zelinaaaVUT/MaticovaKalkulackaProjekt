#include <stdio.h>

void VypsaniMatice(int velikost, int matice[10][10]) {
	int i, j;

	for (i = 0; i < velikost; i++) { //vypis matice abych nemusel opakovat stejny kod furt dokola, zavolam pouze funkci
		for (j = 0; j < velikost; j++) {
			printf("%d ", matice[i][j]);
		}
		printf("\n");
	}
}