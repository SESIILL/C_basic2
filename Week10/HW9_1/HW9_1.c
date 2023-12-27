#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char string[50]; // 입력되는 문자열을 저장
	char alphaString1[50] = ""; // 입력 문자열에서 알파벳만 저장
	char alphaString2[50] = ""; // 대소문자를 바꿈
	char digitString[50] = "";
	char convertedString[50] = ""; // 문자들과 숫자들로 재배열한 문자열
	int i = 0, j = 0, k = 0;

	printf("문자열을 입력하세요: ");
	fgets(string, sizeof(string), stdin);

	for (i = 0; i < strlen(string); i++) {
		if (isalpha(string[i])) {
			alphaString1[j] = string[i];
			j++;
		}
		else if (isdigit(string[i])) {
			digitString[k] = string[i];
			k++;
		}
	}
	printf("문자들은 %s\n", alphaString1);
	printf("숫자들은 %s\n", digitString);

	for (i = 0; i < strlen(alphaString1); i++) {
		if (isupper(alphaString1[i])) 
			alphaString2[i] = tolower(alphaString1[i]);
		else
			alphaString2[i] = toupper(alphaString1[i]);
	}
	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);

	strcat(alphaString1, digitString);
	strcat(convertedString, alphaString1);
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);

	return 0;
}
