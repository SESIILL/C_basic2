#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addEach(int n) {
	int result = 0;
	if (n == 0)
		return result;
	else
		result = addEach(n / 10) + n % 10;
}

int main(void) {
	int num;
	scanf("%d", &num);
	printf("%d\n", addEach(num));
	return 0;
}
