// MaticovaKalkulacka.cpp : Defines the entry point for the application.
//

#include "MaticovaKalkulacka.h"
#include "MaticeHeader.h"

using namespace std;

int main()
{
	int ZadaniVelikostiCtvercoveMatice;
	int ZadaniVelikostiCtvercoveMaticeA;
	int ZadaniVelikostiCtvercoveMaticeB;
	int input;
	int maticeA[10][10];
	int maticeB[10][10];
	int maticeP[10][10];
	int operace = 0;
	int a = 0;

	printf("Maticova Kalkulacka!\n\n");
	do
	{
	printf("Zadej:\n"
		"1 - Scitani dvou matic\n"
		"2 - Odecteni dvou matic\n"
		"3 - Nasobeni skalarem\n"
		"4 - Nasobeni dvou matic\n"
		"5 - Vypocitani determinantu matice\n"
		"6 - Vypocitani transponovane matice\n"
		"7 - pro ukonceni a ulozeni\n"
		"8 - vypsani matic v souboru pro info dale pro nacteni ze souboru\n");
	printf("Input: ");
	scanf("%d", &input);

	switch (input) {

	case 1:

		printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
		printf("Input: ");
		scanf("%d", &operace);

		if (operace == 1) {
			printf("Zadej, kterou matici A budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeA = NacteniZeSouboru(a, maticeA);
			printf("Zadej, kterou matici B budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeB = NacteniZeSouboru(a, maticeB);

			if (ZadaniVelikostiCtvercoveMaticeA != ZadaniVelikostiCtvercoveMaticeB) {
				printf("Neni to ctvercova matice");
				break;
			}
			else {
				SoucetMatic(ZadaniVelikostiCtvercoveMaticeA, maticeA, maticeB);
			}
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
			SoucetMatic(ZadaniVelikostiCtvercoveMatice,maticeA, maticeB);
		}

		break;
	case 2:
		//rozdil
		printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
		printf("Input: ");
		scanf("%d", &operace);

		if (operace == 1) {
			printf("Zadej, kterou matici A budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeA = NacteniZeSouboru(a, maticeA);
			printf("Zadej, kterou matici B budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeB = NacteniZeSouboru(a, maticeB);

			if (ZadaniVelikostiCtvercoveMaticeA != ZadaniVelikostiCtvercoveMaticeB) {
				printf("Neni to ctvercova matice");
				break;
			}
			else {
				RozdilMatic(ZadaniVelikostiCtvercoveMaticeA, maticeA, maticeB);
			}
		}
		else if (operace == 2) {
			printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
			printf("Input: ");
			scanf("%d", &ZadaniVelikostiCtvercoveMatice);

			VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
			printf("Vypsani matice A: \n");
			VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);


			VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);
			printf("Vypsani matice B: \n");
			VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);

			printf("Rozdil techto dvou matic je: \n");
			RozdilMatic(ZadaniVelikostiCtvercoveMatice, maticeA, maticeB);

			printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
			printf("Input: ");
			scanf("%d", &operace);
		}


		break;

	case 3:
		int skalar;
		//nasobeni skalarem

		if (operace == 1) {
			printf("Zadej, kterou matici A budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeA = NacteniZeSouboru(a, maticeA);
			
			printf("Zadej skalar: \n");
			scanf("%d", &skalar);

			NasobeniSkalarem(ZadaniVelikostiCtvercoveMaticeA, maticeA, skalar);
		}
		else if (operace == 2) {
			printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
			printf("Input: ");
			scanf("%d", &ZadaniVelikostiCtvercoveMatice);

			printf("Zadej skalar: \n");
			scanf("%d", &skalar);

			VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
			printf("Vypsani matice: \n");
			VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);

			printf("Skalar teto matice je: \n");
			NasobeniSkalarem(ZadaniVelikostiCtvercoveMatice, maticeA, skalar);
		}


		break;

	case 4:
		//nasobeni dvou matic
		printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
		printf("Input: ");
		scanf("%d", &ZadaniVelikostiCtvercoveMatice);

		VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
		printf("Vypsani matice A: \n");
		VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);


		VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);
		printf("Vypsani matice B: \n");
		VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeB);

		printf("Soucin techto dvou matic je: \n");
		NasobeniMatic(ZadaniVelikostiCtvercoveMatice, maticeA, maticeB);
		break;

	case 5:
		//determinant
		printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
		printf("Input: ");
		scanf("%d", &ZadaniVelikostiCtvercoveMatice);

		VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
		printf("Vypsani matice A: \n");
		VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);

		printf("Determinant teto matice je: \n");
		DeterminantMatice(ZadaniVelikostiCtvercoveMatice, maticeA);

		break;

	case 6:
		//transponovana
		break;

	case 7:
		//konec
		break;

	case 8:
		//vypsani co je v souboru
		VypsaniSouboru(maticeP);
		break;

	default:
		printf("Zadal jsi spatne hodnoty");
		break;
	}

	} while (input != 7);

return 0;
}
