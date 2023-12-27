#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void) {
	char c;
	printf("Enter characters(^Z for exit):\n");

	while ((c = fgetc(stdin)) != EOF) {
		if (islower(c))
			fputc(toupper(c), stdout);
		else if (isupper(c))
			fputc(tolower(c), stdout);
		else
			fputc(c, stdout);
	}

	return 0;
}