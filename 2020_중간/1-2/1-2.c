#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printArray(int arr[][4], int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			if (j < 3)
				printf("%d ", arr[i][j]);
			else
				printf("%d", arr[i][j]);
		printf("\n");
	}
}

void initArray(int a[][4], int size, int num) {
	int i, j;
	int x = 0;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) {
			a[j][i] = 0;
			a[j][i] += x++;
		}
	}
}

void swapArray(int a[][4], int size) {
	int i, j;
	int temp[4][4] = { 0 };

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) 
			temp[size - j - 1][size - i - 1] = a[j][i];
	}

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) 
			a[i][j] = temp[i][j];
	}
}


int main(void) {
	int a[4][4], b[4][4];
	int n;

	scanf("%d", &n);
	initArray(a, 4, n);
	printArray(a, 4);
	swapArray(a, 4);
	printArray(a, 4);

	return 0;
}