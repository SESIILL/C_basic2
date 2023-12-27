#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int table[5][3] = { 0 };
	int i = 0, j = 0, sum = 0;

	printf("가>\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) 
			printf("%d ", table[i][j]);
		printf("\n");
	}

	printf("나>\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) 
			table[i][j] = i + j;
	}

	i = 0;
	j = 0;

	while (i < 5) {
		j = 0;
		while (j < 3) {
			printf("%d ", table[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	printf("다>\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			sum += table[i][j];
		}
	}
	printf("Total is %d.\n", sum);

	return 0;
}