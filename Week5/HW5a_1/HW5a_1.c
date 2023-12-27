#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMatrix(int a[][3], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 3; j++)
			printf("\t%d", a[i][j]);
		printf("\n");
	}
	printf("\n");
}

void readMatrix(int a[][3], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	printf("\n");
}

void readMatrix2(int a[][2], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 2; j++)
			scanf("%d", &a[i][j]);
	}
	printf("\n");
}

int main(void) {
	int X[4][2], Y[2][3], Z[4][3];

	printf("(4 x 2) 행렬 X 입력:\n");
	readMatrix2(X, 4);
	printf("(2 x 3) 행렬 Y 입력:\n");
	readMatrix(Y, 2);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			Z[i][j] = 0;
			for (int k = 0; k < 2; k++)
				Z[i][j] += X[i][k] * Y[k][j];
		}
	}

	printf("행렬곱:\n");
	printMatrix(Z, 4);

	return 0;
}