// MaticovaKalkulacka.cpp : Defines the entry point for the application.
//

#include "MaticovaKalkulacka.h"
#include "MaticeHeader.h"

using namespace std;

int main()
{
	int ZadaniVelikostiCtvercoveMatice;
	int ukonceni = 0;
	int input;
	int maticeA[10][10];
	int maticeB[10][10];

	while (ukonceni == 0) {

		printf("Maticova Kalkulacka!\n\n");
		printf("Zadej:\n"
			"1 - Scitani dvou matic\n"
			"2 - Odecteni dvou matic\n"
			"3 - Nasobeni skalarem\n"
			"4 - Nasobeni dvou matic\n"
			"5 - Vypocitani determinantu matice\n"
			"6 - Vypocitani transponovane matice\n"
			"7 - pro ukonceni a ulozeni\n");
		scanf("%d", &input);

		switch (input) {

		case 1:
			//soucet
			printf("Jeste zadej velikost ctvercove matice: \n");
			printf("ahoj");
			scanf("%d", &ZadaniVelikostiCtvercoveMatice);


			VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
			printf("Vypsani matice A: \n");
			VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);


			VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);
			printf("Vypsani matice B: \n");
			VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);

			printf("Soucet techto dvou matic je: \n");
			SoucetMatic(ZadaniVelikostiCtvercoveMatice, maticeA, maticeB);

			break;
		
		case 2:
			//rozdil
			printf("Jeste zadej velikost ctvercove matice: \n");
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
			//nasobeni skalarem
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

		case 7:
			//ukonceni a ulozeni
			ukonceni = 1;
			break;

		default:
			printf("Zadal jsi spatne hodnoty");
			break;
		}

	}

	return 0;
}
