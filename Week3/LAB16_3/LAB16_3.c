#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char text[][10] = { "ABC", "abcd", "Hello" };
	int i, j;

	printf("text의 메모리 크기는 %d이다.\n", sizeof(text));
	
	for (i = 0; i < 3; i++) {
		printf("%d번째 스트링: %s, ", i + 1, text[i]);
		printf("아스키코드 값: ");
		
		j = 0;
		while (text[i][j] != '\0') {
			printf("%d ", text[i][j] + 0);
			j++;
		}
		printf("\n");
	}

	return 0;
}