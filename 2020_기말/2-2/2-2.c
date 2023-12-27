#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strToNum(char* s) {
	int result = 0;
	while (*s != '\0') {
		int num = *s - '0';
		if (num >= 0 && num <= 9)
			result = result * 10 + num;
		else
			return 0;
		s++;
	}
	return result;
}

int main(void) {
	char sentence[50];
	char delimiters[] = " ,\n\0"; // 네 개의 분리 문자들(공백, 콤마, 줄바꿈, 널 문자) 지정 
	char* token;
	int sum = 0;

	gets(sentence); // 111 11aa 222 bbb

	// 이하 코드 작성
	token = strtok(sentence, delimiters);
	sum += strToNum(token);

	while (1) {
		token = strtok(NULL, delimiters); // 토큰을 찾을 때마다 대상 문자열이 변경됨.
		if (token == NULL) // strtok의 반환값이 NULL이면 반복문 끝냄.
			break;
		sum += strToNum(token);
	}
	printf("%d\n", sum);

	return 0;
}