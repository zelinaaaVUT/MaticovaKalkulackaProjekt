#include <stdio.h>
#include <stdlib.h>

void VypsaniSouboru(int matice[10][10]) {
	int velikost = 0;
	int cislo = 1;
	char c = 0;
	int a = 0;

	FILE* fptr;

	if (fopen_s(&fptr, "D:\\data.txt", "r") != 0) {
		printf("Error! opening file");

		exit(1);
	}

	fscanf(fptr, "%d,", &velikost);
	
	printf("\nMatice cislo: %d\n", cislo);

	while (!feof(fptr)) {

		c = getc(fptr);

		if (c != ',' && c != '\n') { //pokud se znak nerovná carce (delitel v souboru) nebo konci radku tak vypise cifru cisla
			printf("%c", c);
		}
		else if (c == ',') { //znak se rovna carce, vim ze nasleduje dalsi cislo a ne cifra
			printf(" ");
			a++;
		}


		if (a % velikost == 0 && a != 0) { //pisu na dalsi radek pokud zbytek po deleni radku velikosti matice je 0
			printf("\n");
			a = 0;
		}

		if (c == '\n') { //dorazil jsem na konec radku, nasleduje dalsi matice
			cislo++;
			a = 0;
			printf("\n\nMatice cislo: %d\n", cislo);
			fscanf(fptr, "%d,", &velikost);
		}
	}

	fclose(fptr);

	return;
}