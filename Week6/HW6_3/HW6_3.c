#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse (char word[], char newWord[]) {
	int len = 0;
	
	for (len = 0; word[len] != '\0'; len++);
	for (int i = 0; i < len; i++) {
		newWord[len - i - 1] = word[i];
	}
	newWord[len] = '\0';
}

int main(void) {
	char word[81], newWord[81];

	printf("Enter one word: ");
	scanf("%s", word);
	reverse(word, newWord);
	printf("The reversed word is %s\n", newWord);

	return 0;
}