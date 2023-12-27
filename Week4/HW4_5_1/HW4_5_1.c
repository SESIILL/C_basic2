#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n) {
	int length = 1;

	printf("%d ", n);
	while (n != 1) {
		if (n % 2 == 0) 
			n /= 2;
		else 
			n = n * 3 + 1;
		printf("%d ", n);
		length++;
	}

	printf("\n");
	return length;
}

int main(void) {
	int n;

	printf("Enter the number: ");
	scanf("%d", &n);
	printf("%d\n", get_cycle_number(n));

	return 0;
}