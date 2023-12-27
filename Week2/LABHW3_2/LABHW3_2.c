#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void printMinMax(int arr[], int size) {
	int min = 100;
	int max = -1;
	int minIndex = 0, maxIndex = 0;

	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
			minIndex = i;
		}
		else if (max < arr[i]) {
			max = arr[i];
			maxIndex = i;
		}
	}

	printf("최댓값: 인덱스 = %d, 값: %d\n", maxIndex, max);
	printf("최솟값: 인덱스 = %d, 값: %d\n", minIndex, min);
}

int main(void) {
	int a[10];
	// srand(time(NULL));
	srand(100); // 실행 결과가 맞나 보기 위해서 seed를 100으로 고정

	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}