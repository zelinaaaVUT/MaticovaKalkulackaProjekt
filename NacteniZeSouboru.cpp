#include <stdio.h>
#include <stdlib.h>

void NacteniZeSouboru(int matice[10][10]) {
	int num;


	FILE *fptr;


	if ((fptr = fopen("C:\\data.txt", "r")) == NULL) {
		printf("Error! opening file");

		// Program exits if the file pointer returns NULL.
		exit(1);
	}

	fscanf(fptr, "%d", &num);

	printf("Value of n=%d", num);
	fclose(fptr);


}