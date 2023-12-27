#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void) {
	char ch;
	while (1) {
		scanf("%c", &ch); // 예 1)
		ch = getchar(); // 예 2)
		ch = fgetc(stdin); // 예 3)
		ch = _getch(); // 예 4)
		ch = _getche(); // 예 5)
		if (ch == 'q') break;
		_putch(ch); // printf("%c", ch), putchar(ch), fputc(ch, stdout) 모두 같은 결과
	}

	return 0;
}