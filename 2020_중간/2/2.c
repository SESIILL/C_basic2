#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addEachEvenRec(int n) {
	if (n == 0) 
		return 0;
	else {
		if ((n % 10) % 2 == 0) 
			return addEachEvenRec(n / 10) + n % 10;
		else 
			return addEachEvenRec(n / 10);
	}
}

int main(void) {
	int num;
	scanf("%d", &num);
	printf("%d\n", addEachEvenRec(num));
	
	return 0;
}