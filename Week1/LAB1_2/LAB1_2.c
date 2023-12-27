#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int data[100];
	int num, i;
	int max = -1;

	srand(time(NULL));

	printf("Enter the number of random number(<= 100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		data[i] = rand() % 100;

	for (i = 0; i < num; i++) {
		if (data[i] > max)
			max = data[i];
	}

	printf("최댓값은 %d\n", max);
	printf("-----------------------\n");
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++) {
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
	
	return 0;
}