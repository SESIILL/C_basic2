#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n % 2 == 0) {
		printf("%d ", n / 2);
		return get_cycle_number(n / 2) + 1;
	}
	else {
		printf("%d ", n * 3 + 1);
		return get_cycle_number(n * 3 + 1) + 1;
	}
}

int main(void) {
	int n;

	printf("Enter the number: ");
	scanf("%d", &n);

	printf("%d ", n);
	printf("\n%d\n", get_cycle_number(n));

	return 0;
}