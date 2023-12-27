#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void to_binary(int n) {
    if (n == 0) {
        return;
    }
    else {
        to_binary(n / 2);
        printf("%d ", n % 2); // 제일 나중에 출력
    }
}

int main(void) {
	int n;

	scanf("%d", &n);
    to_binary(n);
    printf("\n");

	return 0;
}