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
	/*while (!feof(fptr)) {

		c = getc(fptr);

		if (c != ',' && c != '\n') {
			printf("%c ", c);
			a++;
		}

		if (a % velikost == 0) {
			printf("\n");
		}

		if (c == '\n') {
			cislo++;
			a = 0;
			printf("Matice cislo: %d\n\n", cislo);
			fscanf(fptr, "%d,", &velikost);
		}
	}*/

	while (!feof(fptr)) {

		c = getc(fptr);

		if (c != ',' && c != '\n') {
			printf("%c", c);
			//printf("hodnota a: %d", a);
		}
		else if (c == ',') {
			printf(" ");
			//printf("\nhodnota a: %d\n", a);
			a++;
		}


		if (a % velikost == 0 && a != 0) {
			printf("\n");
			a = 0;
		}

		if (c == '\n') {
			cislo++;
			a = 0;
			printf("\n\nMatice cislo: %d\n", cislo);
			fscanf(fptr, "%d,", &velikost);
		}
	}

	fclose(fptr);

	return;
}