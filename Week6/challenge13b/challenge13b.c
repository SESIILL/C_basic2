#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int wordSum(char word[]) {
	int sum = 0, num = 0;
	int i = 0, j = 0;

	while (word[i] != '\0') {
		if (word[i] >= '0' && word[i] <= '9') { // 숫자라면
			j = i;
			while (word[j] >= '0' && word[j] <= '9') { // 숫자일 때까지
				num *= 10;
				num += word[j] - '0';
				j++;
			}
			i = j;
		}
		else // 문자열이라면
			i++;

		sum += num;
		num = 0; // num 초기화
	}
	
	return sum;
}

int main(void) {
	char word[50];

	printf("Enter a word: ");
	scanf("%s", word);
	printf("글자 안 수의 합은 %d\n", wordSum(word));

	return 0;
}