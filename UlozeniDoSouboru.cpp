#include <stdio.h>
#include <stdlib.h>

void UlozeniDoSouboru(int velikost, int matice[10][10]) {
	FILE* fptr;

	if (fopen_s(&fptr, "D:\\data.txt", "a+") != 0) {
		printf("Error! opening file");

		exit(1);
	}

	fprintf(fptr, "\n");
	fprintf(fptr, "%d,", velikost);
	
	int runda = 0;

	for (int i = 0; i < velikost; i++) {
		for (int j = 0; j < velikost; j++) {
			runda++;
			if (runda == (velikost * velikost)) {
				fprintf(fptr, "%d", matice[i][j]);
			}
			else {
				fprintf(fptr, "%d,", matice[i][j]);
			}		
		}
	}

	fclose(fptr);


}