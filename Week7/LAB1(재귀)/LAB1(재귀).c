#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
	if (n == 1) {
		return 12;
	}
	else {
		return sum(n - 1) + 10;
	}
}

int main(void) {
	int n;
	int total = 0;
	
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		total += sum(i);
		printf("%d ", sum(i));
	}
	printf("\n%d\n", total);

	return 0;
}