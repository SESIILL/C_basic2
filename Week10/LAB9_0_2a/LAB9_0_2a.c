#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void) {
	char c;
	printf("Enter characters(^Z for exit):\n");
	c = getchar();

	while (c != EOF) {
		if (islower(c))
			putchar(toupper(c));
		else if (isupper(c))
			putchar(tolower(c));
		else
			putchar(c);

		c = getchar();
	}

	return 0;
}