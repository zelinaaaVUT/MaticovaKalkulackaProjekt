// MaticovaKalkulacka.cpp : Defines the entry point for the application.
//

#include "MaticovaKalkulacka.h"
#include "MaticeHeader.h"

using namespace std;

int main()
{
	int ZadaniVelikostiCtvercoveMatice;
	int input;
	int maticeA[10][10];
	int maticeB[10][10];
	int operace = 0;


	printf("Maticova Kalkulacka!\n\n");
	printf("Zadej:\n"
		"1 - Scitani dvou matic\n"
		"2 - Odecteni dvou matic\n"
		"3 - Nasobeni skalarem\n"
		"4 - Nasobeni dvou matic\n"
		"5 - Vypocitani determinantu matice\n"
		"6 - Vypocitani transponovane matice\n"
		"7 - pro ukonceni a ulozeni\n");
	printf("Input: ");
	scanf("%d", &input);

	switch (input) {

	case 1:

		printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
		printf("Input: ");
		scanf("%d", &operace);

		if (operace == 1) {
			NacteniZeSouboru(maticeA);
		}
		else if (operace == 2) {
			//soucet
			printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
			printf("Input: ");
			scanf("%d", &ZadaniVelikostiCtvercoveMatice);


			VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
			printf("Vypsani matice A: \n");
			VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);


			VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);
			printf("Vypsani matice B: \n");
			VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);

			printf("Soucet techto dvou matic je: \n");
			SoucetMatic(ZadaniVelikostiCtvercoveMatice, maticeA, maticeB);
		}

		break;
	case 2:
		//rozdil
		printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
		printf("Input: ");
		scanf("%d", &ZadaniVelikostiCtvercoveMatice);

		VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
		printf("Vypsani matice A: \n");
		VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);


		VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);
		printf("Vypsani matice B: \n");
		VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);

		printf("Soucet techto dvou matic je: \n");
		RozdilMatic(ZadaniVelikostiCtvercoveMatice, maticeA, maticeB);
		break;

	case 3:
		int skalar;
		//nasobeni skalarem
		printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
		printf("Input: ");
		scanf("%d", &ZadaniVelikostiCtvercoveMatice);

		printf("Zadej skalar: \n");
		scanf("%d", &skalar);

		VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
		printf("Vypsani matice: \n");
		VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);

		printf("Soucet techto dvou matic je: \n");
		NasobeniSkalarem(ZadaniVelikostiCtvercoveMatice, maticeA, skalar);
		break;

	case 4:
		//nasobeni dvou matic
		break;

	case 5:
		//determinant
		break;

	case 6:
		//transponovana
		break;

	default:
		printf("Zadal jsi spatne hodnoty");
		break;
	}


return 0;
}
