#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int gradeTable[5][4] = { {10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0} };
	int i, j;

	printf("a)\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++)
			printf("\t%d", gradeTable[i][j]);
		printf("\n");
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++)
			gradeTable[i][3] += gradeTable[i][j];
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			gradeTable[4][i] += gradeTable[j][i];
	}

	printf("b)\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++)
			printf("\t%d", gradeTable[i][j]);
		printf("\n");
	}

	return 0;
}