#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_rec(int n);

int main(void) {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum_rec(n));
	
	return 0;
}

int sum_rec(int n) {
	if (n == 0)
		return 0;
	else
		return n + sum_rec(n - 1);
}