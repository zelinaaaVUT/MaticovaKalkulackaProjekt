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
			break;
		}

		c = getc(fptr);

		if (c == '\n') {
			radek++;
			fscanf(fptr, "%d,", &velikost);
		}
	}

	int k = 0, l = 0;
	char *nic[25];
	const char s[2] = ",";
	char* token;

	token = strtok(buffer, s);

	while (token != NULL) {
		nic[k] = token;
		token = strtok(NULL, s);
		k++;
	}

	for (int i = 0; i < velikost; i++) {
		for (int j = 0; j < velikost; j++) {
			matice[i][j] = atoi(nic[l]);
			l++;
		}
	}

	fclose(fptr);

	return velikost;
}