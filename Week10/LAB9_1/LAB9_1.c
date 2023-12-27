#include <stdio.h>

int main(void) {
	char c;
	printf("Enter 문자열(q 이전까지 문자열로 인정함)\n");
	c = getchar();
	
	while (!(c == 'q')) {
		putchar(c);
		c = getchar();
	}
	while (getchar() != '\n'); // 입력 버퍼 비우기

	printf("\n----------------------------------------------------------\n");
	printf("Enter 두 번째 문자열(q 이전까지 문자열로 인정함)\n");
	c = getchar();
	
	while (!(c == 'q')) {
		putchar(c);
		c = getchar();
	}
	putchar('\n');

	return 0;
}