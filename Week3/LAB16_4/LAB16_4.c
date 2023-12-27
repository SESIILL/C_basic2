#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;
	int total = 0, maxSum = 0, max = -10;

	printf("배열 test의 엘리먼트를 출력합니다.\n");
	for (i = 0; i < 4; i++) {
		printf("%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++) 
			printf("\t%d", test[i][j]);
		printf("\n");
	}

	printf("\n다>\n");
	printf("배열 test의 엘리먼트를 출력합니다.\n");
	
	for (i = 0; i < 4; i++) {
		test[i][2] = -1;
		printf("%d번째 row: ", i + 1);
	
		for (j = 0; j < 3; j++) {
			printf("\t%d", test[i][j]);
			total += test[i][j];
		}
		printf("\n");
	}

	printf("\n라>\n");
	printf("Total is %d.\n", total);
	printf("Average is %.2f.\n", (float)total / 12);

	printf("\n마>\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			if (test[i][j] > max)
				max = test[i][j];
		}

		printf("%d번째 row의 최댓값: %d\n", i + 1, max);
		maxSum += max;
		max = -10;
	}
	printf("최댓값의 합: %d\n", maxSum);

	return 0;
}