#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void save(int money) {
	static int save;
	save += money;
	printf("현재까지의 입금액: %d\n", save);
}

int main(void) {
	int money = 0;

	while (1) {
		printf("저금할 금액(-1 for exit): ");
		scanf("%d", &money);
		if (money == -1)
			break;
		else
			save(money);
	}
	printf("입금 완료\n");

	return 0;
}