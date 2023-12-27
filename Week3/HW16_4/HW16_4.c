#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void initTable(int table[][5], int col) {
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < 5; j++)
			table[i][j] = rand() % 100;
	}
}

int totalTable(int table[][5], int col) {
	int total = 0;
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < 5; j++)
			total += table[i][j];
	}
	return total;
}

void printTable(int table[][5], int col) {
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < 5; j++)
			printf("\t%d", table[i][j]);
		printf("\n");
	}
}

int main(void) {
	int table[3][5];
	int colSum[5] = { 0 };
	int i, j;

	srand(time(NULL));

	initTable(table, 3);
	printf("발생된 난수의 평균은 %d입니다.\n", totalTable(table, 3) / 15);
	printTable(table, 3);
	
	printf("\n--- 각 열의 합 ---\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++)
			colSum[i] += table[j][i];
	}
	
	for (i = 0; i < 5; i++)
		printf("\t%d", colSum[i]);
	printf("\n");

	return 0;
}