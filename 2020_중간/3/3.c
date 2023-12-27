#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int char_num(char* p, char c) {
	int count = 0;
	while (*p != '\0') {
		if (*p == c)
			count++;
		*p++;
	}
	return count;
}

int main(void) {
	char w[30];
	char* p;
	char ch;
	
	p = w;
	scanf("%c", &ch);
	scanf("%s", w);
	printf("%d\n", char_num(w, ch));

	return 0;
}