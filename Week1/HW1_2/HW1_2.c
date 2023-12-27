#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int coins[4] = { 500, 100, 50, 10 };
	int change;

	printf("Enter the amount of change: ");
	scanf("%d", &change);

	printf("500 coin: %d\n", change / 500);
	change = change % 500;

	printf("100 coin: %d\n", change / 100);
	change = change % 100;

	printf("50 coin: %d\n", change / 50);
	change = change % 50;

	printf("10 coin: %d\n", change / 10);

	return 0;
}