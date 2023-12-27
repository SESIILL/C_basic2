#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int data[100], count[10];
	int num, i, j;

	srand(time(NULL));

	printf("Enter the number of random number(<= 100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		data[i] = rand() % 10;

	for (i = 0; i < 10; i++) {
		count[i] = 0;
		for (j = 0; j < num; j++) {
			if (i == data[j])
				count[i] += 1;
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d의 개수는 %d\n", i, count[i]);

	printf("-----------------------\n");
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++) {
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}

	return 0;
}