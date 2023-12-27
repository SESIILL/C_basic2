#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// *s = 포인터 s이 가리키는 값(해당 메모리 주소에 있는 값)
// s = 포인터 변수 그 자체

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
	char str[50];
	scanf("%s", str);
	printf("%d\n", strToNum(str));
	return 0;
}