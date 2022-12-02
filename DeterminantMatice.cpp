#include <stdio.h>

void DeterminantMatice(int velikost, int maticeJedna[10][10]) {
	long vysledek;
	//v zadani mam uvedene pocitat determinant max do velikosti 4, jsou to algoritmy pro pocitani determinantu
	if (velikost == 2) {
		vysledek = maticeJedna[0][0] * maticeJedna[1][1] - maticeJedna[0][1] * maticeJedna[1][0];
		printf("%ld", vysledek);
	}
	else if (velikost == 3) {
		vysledek = maticeJedna[0][0] * ((maticeJedna[1][1] * maticeJedna[2][2]) - (maticeJedna[2][1] * maticeJedna[1][2]))
			- maticeJedna[0][1] * (maticeJedna[1][0] * maticeJedna[2][2] - maticeJedna[2][0] * maticeJedna[1][2]) + 
			maticeJedna[0][2] * (maticeJedna[1][0] * maticeJedna[2][1] - maticeJedna[2][0] * maticeJedna[1][1]);
		printf("%ld", vysledek);
	}
	else if (velikost == 4) {
		long vysledek1, vysledek2, vysledek3, vysledek4;

		vysledek1 = maticeJedna[0][0] * (maticeJedna[1][1] * (maticeJedna[2][2]*maticeJedna[3][3] - maticeJedna[2][3]*maticeJedna[3][2]) 
			- maticeJedna[1][2]* (maticeJedna[2][1]* maticeJedna[3][3] - maticeJedna[2][3]* maticeJedna[3][1])
			+ maticeJedna[1][3]* (maticeJedna[2][1]* maticeJedna[3][2] - maticeJedna[2][2]* maticeJedna[3][1]));

		vysledek2 = maticeJedna[0][1] * (maticeJedna[1][0] * (maticeJedna[2][2] * maticeJedna[3][3] - maticeJedna[2][3] * maticeJedna[3][2])
			- maticeJedna[1][2] * (maticeJedna[2][0] * maticeJedna[3][3] - maticeJedna[2][3] * maticeJedna[3][0])
			+ maticeJedna[1][3] * (maticeJedna[2][0] * maticeJedna[3][2] - maticeJedna[2][2] * maticeJedna[3][0]));

		vysledek3 = maticeJedna[0][2] * (maticeJedna[1][0] * (maticeJedna[2][1] * maticeJedna[3][3] - maticeJedna[2][3] * maticeJedna[3][1])
			- maticeJedna[1][1] * (maticeJedna[2][0] * maticeJedna[3][3] - maticeJedna[2][3] * maticeJedna[3][0])
			+ maticeJedna[1][3] * (maticeJedna[2][0] * maticeJedna[3][1] - maticeJedna[2][1] * maticeJedna[3][0]));

		vysledek4 = maticeJedna[0][3] * (maticeJedna[1][0] * (maticeJedna[2][1] * maticeJedna[3][2] - maticeJedna[2][2] * maticeJedna[3][1])
			- maticeJedna[1][1] * (maticeJedna[2][0] * maticeJedna[3][2] - maticeJedna[2][2] * maticeJedna[3][0])
			+ maticeJedna[1][2] * (maticeJedna[2][0] * maticeJedna[3][1] - maticeJedna[2][1] * maticeJedna[3][0]));

		vysledek = vysledek1 - vysledek2 + vysledek3 - vysledek4;

		printf("%ld", vysledek);
	}
}
