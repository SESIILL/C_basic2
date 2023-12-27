#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int xPower(int x, int y);

int main(void) {
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);
	printf("%d의 %d승은 %d이다.\n", x, y, xPower(x, y));
	return 0;
}

int xPower(int x, int y) {
	if (y == 0)
		return 1;
	else 
		return x * xPower(x, y - 1);
}