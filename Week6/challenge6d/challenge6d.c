#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL isPalindrome(char str[]);

int main(void) {
	char str[MAX_STRING];

	printf("* Palindrome 체크\n\n");
	printf("문자열 입력(문자 수 %d 이하): ", MAX_STRING);
	scanf("%s", str);
	
	if (isPalindrome(str)) 
		printf("\"%s\" is a Palindrome.\n", str);
	else
		printf("\"%s\" isn't a Palindrome.\n", str);
	
	return 0;
}

BOOL isPalindrome(char s[]) {
	int len;	for (len = 0; s[len] != '\0'; len++);	for (int i = 0; i < len; i++) {		if (s[i] != s[len - i - 1])			return 0;	}	return 1;}