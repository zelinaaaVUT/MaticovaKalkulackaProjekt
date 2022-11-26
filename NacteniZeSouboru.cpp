#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME_SIZE 1024
#define MAX_LINE 2048

int NacteniZeSouboru(int PoradiMaticeVSouboru,int matice[10][10]) {
	int velikost = 0;
	int radek = 1;
	int c;

	FILE *fptr;
	char filename[FILENAME_SIZE];
	char buffer[MAX_LINE];

	if (fopen_s(&fptr, "D:\\data.txt", "r") != 0) {
		printf("Error! opening file");

		exit(1);
	}
	fscanf(fptr, "%d,", &velikost);
	while (!feof(fptr)) {		

		if (radek == PoradiMaticeVSouboru) {

			fgets(buffer, MAX_LINE, fptr);
			//printf("%s", buffer);
			break;
		}

		c = getc(fptr);

		if (c == '\n') {
			radek++;
			fscanf(fptr, "%d,", &velikost);
		}
	}

	int k = 0, l = 0;
	char nic[MAX_LINE];


	for (int znak = 0; znak < strlen(buffer); znak++) {
		if (buffer[znak] != ',') {
			nic[k] = buffer[znak];
			k++;
		}
	}

	for (int i = 0; i < velikost; i++) {
		for (int j = 0; j < velikost; j++) {
			matice[i][j] = (nic[l] - '0');
			l++;
		}
	}

	fclose(fptr);

	return velikost;
}