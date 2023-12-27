#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[8][9];
	int i, j, choice;

	printf("-- 구구단 표는 다음과 같습니다.\n");
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 9; j++) {
			num[i][j] = (i + 2) * (j + 1);
			printf("\t%d", num[i][j]);
		}
		printf("\n");
	}

	printf("\n-- 원하는 구구단은? ");
	scanf("%d", &choice);

	for (i = 0; i < 9; i++)
		printf("\t%d", num[choice - 2][i]);
	printf("\n");

	return 0;
}