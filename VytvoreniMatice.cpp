#include <stdio.h>
#include "MaticeHeader.h"


void VytvoreniMatice(int velikost, int matice[10][10]) {

	int i, j;

	for (i = 0; i < velikost; i++) { //vytvoreni vlastni matice
		for (j = 0; j < velikost; j++) {
			printf("Zadej hodnotu pro matice[%d][%d]:", i, j); 
			scanf("%d", &matice[i][j]); //zadam cislo ktere se zapise
		}
	}

	return;
}