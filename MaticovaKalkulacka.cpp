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

	printf("Maticova Kalkulacka!");
	do
	{
	printf("\n\nZadej:\n"
		"1 - Scitani dvou matic\n"
		"2 - Odecteni dvou matic\n"
		"3 - Nasobeni skalarem\n"
		"4 - Nasobeni dvou matic\n"
		"5 - Vypocitani determinantu matice\n"
		"6 - Vypocitani transponovane matice\n"
		"7 - pro ukonceni\n"
		"8 - vypsani matic v souboru pro info dale pro nacteni ze souboru\n");
	printf("Input: ");
	scanf("%d", &input);

	switch (input) {

	case 1: //soucet

		printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
		printf("Input: ");
		scanf("%d", &operace); //nacteni do promenne, nasleduje bud operace 1 - nacteni matice ze souboru nebo 2 - vytvoreni vlastni

		if (operace == 1) { //nacteni ze souboru
			printf("Zadej, kterou matici A budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeA = NacteniZeSouboru(a, maticeA);
			printf("Zadej, kterou matici B budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeB = NacteniZeSouboru(a, maticeB);

			if (ZadaniVelikostiCtvercoveMaticeA != ZadaniVelikostiCtvercoveMaticeB) { //osetreni, scitat se muzou pouze ctvercove matice stejnych rozmeru
				printf("\nJedna z matic neni ctvercova matice/stejnych rozmeru\n\n");
				break;
			}
			else {
				printf("\nVysledek:\n");
				SoucetMatic(ZadaniVelikostiCtvercoveMaticeA, maticeA, maticeB);
				printf("\n\n");
			}
		}
		else if (operace == 2) { //vytvoreni vlastni matice
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
			printf("\n\n");
		}
		break;

	case 2: //rozdil

		printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
		printf("Input: ");
		scanf("%d", &operace); //nacteni do promenne, nasleduje bud operace 1 - nacteni matice ze souboru nebo 2 - vytvoreni vlastni

		if (operace == 1) { //nacteni ze souboru
			printf("Zadej, kterou matici A budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeA = NacteniZeSouboru(a, maticeA);
			printf("Zadej, kterou matici B budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeB = NacteniZeSouboru(a, maticeB);

			if (ZadaniVelikostiCtvercoveMaticeA != ZadaniVelikostiCtvercoveMaticeB) {
				printf("\nJedna z matic neni ctvercova matice/stejnych rozmeru\n\n");
				break;
			}
			else {
				printf("\nVysledek:\n");
				RozdilMatic(ZadaniVelikostiCtvercoveMaticeA, maticeA, maticeB);
				printf("\n\n");
			}
		}
		else if (operace == 2) { //vytvoreni vlastni matice
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
			printf("\n\n");
		}
		break;

	case 3: //nasobeni skalarem
		int skalar;

		printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
		printf("Input: ");
		scanf("%d", &operace); //nacteni do promenne, nasleduje bud operace 1 - nacteni matice ze souboru nebo 2 - vytvoreni vlastni

		if (operace == 1) { //ze souboru
			printf("Zadej, kterou matici A budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeA = NacteniZeSouboru(a, maticeA);
			
			printf("Zadej skalar: ");
			scanf("%d", &skalar);

			printf("\nVysledek:\n");
			NasobeniSkalarem(ZadaniVelikostiCtvercoveMaticeA, maticeA, skalar);
			printf("\n\n");
		}
		else if (operace == 2) { //vlastni
			printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
			printf("Input: ");
			scanf("%d", &ZadaniVelikostiCtvercoveMatice);

			printf("Zadej skalar: ");
			scanf("%d", &skalar);

			VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
			printf("Vypsani matice: \n");
			VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);

			printf("Vysledek teto matice je: \n");
			NasobeniSkalarem(ZadaniVelikostiCtvercoveMatice, maticeA, skalar);
			printf("\n\n");
		}
		break;

	case 4: //nasobeni dvou matic

		printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
		printf("Input: ");
		scanf("%d", &operace); //nacteni do promenne, nasleduje bud operace 1 - nacteni matice ze souboru nebo 2 - vytvoreni vlastni

		if (operace == 1) { //ze souboru
			printf("Zadej, kterou matici A budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeA = NacteniZeSouboru(a, maticeA);
			printf("Zadej, kterou matici B budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMaticeB = NacteniZeSouboru(a, maticeB);

			if (ZadaniVelikostiCtvercoveMaticeA != ZadaniVelikostiCtvercoveMaticeB) {
				printf("\nJedna z matic neni ctvercova matice/stejnych rozmeru\n\n");
				break;
			}
			else {
				printf("\nVysledek:\n");
				NasobeniMatic(ZadaniVelikostiCtvercoveMaticeA, maticeA, maticeB);
				printf("\n\n");
			}
		}
		else if (operace == 2) { //vlastni
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
			printf("\n\n");
		}	
		break;

	case 5: //determinant
		
		printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
		printf("Input: ");
		scanf("%d", &operace); //nacteni do promenne, nasleduje bud operace 1 - nacteni matice ze souboru nebo 2 - vytvoreni vlastni

		if (operace == 1) { //ze souboru
			printf("Zadej, kterou matici budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMatice = NacteniZeSouboru(a, maticeA);

			if (ZadaniVelikostiCtvercoveMatice > 4) {
				printf("\nVelky rozmer matice, nedokazu vypocitat (ridim se podle zadani)\n\n");
				break;
			}
			else {
				printf("\nVysledek:");
				DeterminantMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
				printf("\n\n");
			}		
		}
		else if (operace == 2) { //vlastni
			printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
			printf("Input: ");
			scanf("%d", &ZadaniVelikostiCtvercoveMatice);

			if (ZadaniVelikostiCtvercoveMatice > 4) {
				printf("\nVelky rozmer matice, nedokazu vypocitat (ridim se podle zadani)\n\n");
				break;
			}
			else {
				VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
				printf("Vypsani matice A: \n");
				VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);

				printf("Determinant teto matice je: \n");
				DeterminantMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
				printf("\n\n");
			}			
		}
		break;

	case 6: //transponovana

		printf("Zadej 1 - pro nacteni matice ze souboru nebo 2 - pro vytvoreni vlastni matice:\n");
		printf("Input: ");
		scanf("%d", &operace); //nacteni do promenne, nasleduje bud operace 1 - nacteni matice ze souboru nebo 2 - vytvoreni vlastni

		if (operace == 1) { //ze souboru
			printf("Zadej, kterou matici budes chtit ze souboru nacist(cislo): ");
			scanf("%d", &a);
			ZadaniVelikostiCtvercoveMatice = NacteniZeSouboru(a, maticeA);

			printf("\nVysledek:\n");
			TransponovanaMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
			printf("\n\n");		
		}
		else if (operace == 2) { //vlastni
			printf("Jeste zadej velikost ctvercove matice 3 - 3x3, 4-4x4 atd: \n");
			printf("Input: ");
			scanf("%d", &ZadaniVelikostiCtvercoveMatice);

			VytvoreniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
			printf("Vypsani matice A: \n");
			VypsaniMatice(ZadaniVelikostiCtvercoveMatice, maticeA);

			printf("Transponovana matice je: \n");
			TransponovanaMatice(ZadaniVelikostiCtvercoveMatice, maticeA);
			printf("\n\n");
		}
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
