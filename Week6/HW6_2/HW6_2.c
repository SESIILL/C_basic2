#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int wordSum(char word[]) {
	int sum = 0;

	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] >= '0' && word[i] <= '9')
			sum += word[i] - '0';
	}
	return sum;
}

int main(void) {
	char word[50];

	printf("Enter one word: ");
	scanf("%s", word);
	printf("안에 있는 숫자들의 합은 %d\n", wordSum(word));

	return 0;
}