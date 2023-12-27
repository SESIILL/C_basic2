#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void splitString(char* str, char* s1, char* s2) {
	int i = 0, j = 0, k = 0;
	int length = strlen(str);

	// 문자열의 길이가 짝수인 경우
	while (i < length - 1) { // 문자열을 두 개씩 처리해야 하므로 length - 1
		s1[j++] = str[i++];
		s1[j++] = str[i++];
		s2[k++] = str[i++];
		s2[k++] = str[i++];
	}

	if (length % 2 != 0) { // 문자열의 길이가 홀수일 때 추가적으로 처리
		if (j < k)
			s1[j++] = str[i];
		else
			s2[k++] = str[i];
	}

	s1[j] = '\0';
	s2[k] = '\0';
}

int main(void) {
	char str[50], s1[50], s2[50];

	scanf("%s", str);
	splitString(str, s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}