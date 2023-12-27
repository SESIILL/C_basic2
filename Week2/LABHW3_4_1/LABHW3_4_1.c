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
	int multiset[5];
	int size;

	for (int i = 0; i < 5; i++) {
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &multiset[i]);
		size = i + 1;
		printSet(multiset, size);
	}
	return 0;
}