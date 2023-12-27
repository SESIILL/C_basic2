#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSet(int s[], int size) {
	printf("{ ");
	for (int i = 0; i < size; i++) {
		printf("%d ", s[i]);
	}
	printf("}\n");
}

int main(void) {
	int set[5] = { 0 };
	int size = 0;
	int flag = 1;
	int element;

	while (size != 5) {
		printf("집합에 추가할 원소: ");
		scanf("%d", &element);

		for (int i = 0; i < size + 1; i++) {
			if (element == set[i]) {
				printf("%d은 이미 집합에 있음.\n", element);
				flag = 0;
				break;
			}
		}

		if (flag == 1) {
			set[size] = element;
			printSet(set, size + 1);
			size++;
		}
		flag = 1;
	}

	return 0;
}