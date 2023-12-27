#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex;

	printf("합은 %d\n", sumList(list, 10));
	printf("가장 큰 수는 %d\n", maxList(list, 10));
	printf("탐색할 값은? ");
	scanf("%d", &value);

	keyIndex = indexSearch(list, 10, value);
	printf("값 %d를 갖는 첫 번째 값은 ", value);
	if (keyIndex == -1)
		printf("없습니다.\n");
	else
		printf("%d번째에 있습니다.\n", keyIndex);

	return 0;
}

int sumList(int arr[], int size) {
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}

int maxList(int arr[], int size) {
	int i, max = -1;
	for (i = 0; i < size; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int indexSearch(int arr[], int size, int key) {
	int i;
	for (i = 0; i < size; i++) {
		if (arr[i] == key)
			return i + 1;
	}
	return -1;
}