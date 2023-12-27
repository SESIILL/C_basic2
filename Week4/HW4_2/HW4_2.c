#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n);

int main(void) {
	int n, idx;

	printf("몇 개의 피보나치 수열값을 출력할까요? (3보다 큰 정수): ");
	scanf("%d", &n);

	for (idx = 0; idx < n; idx++) {
		printf("%10d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}

int fibo(int n) {
	if (n == 0 || n == 1)
		return 1;
	else {
		int a = 1, b = 1, temp;
		for (int i = 2; i <= n; i++) {
			temp = a + b;
			a = b;
			b = temp;
		}
		return b;
	}
}