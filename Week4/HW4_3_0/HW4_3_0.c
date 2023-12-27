#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int twoPower(int x);

int main(void) {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("2의 %d승은 %d이다.\n", n, twoPower(n));
	return 0;
}

int twoPower(int x) {
	if (x == 0)
		return 1;
	else
		return 2 * twoPower(x - 1);
}