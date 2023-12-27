#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insert(int arr[][4]) {
	int k = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = k;
			k++;
		}
	}
}

void print(int arr[][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) 
			printf("\t%d", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

void swap(int arrA[][4]) {
	int temp[4][4] = { 0 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			temp[i][j] = arrA[3 - j][i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			arrA[i][j] = temp[i][j];
	}
}

int main(void) {
	int arrA[4][4] = { 0 };

	insert(arrA);
	print(arrA);
	swap(arrA);
	print(arrA);

	return 0;
}