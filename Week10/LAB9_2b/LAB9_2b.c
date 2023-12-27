#include <stdio.h>
#include <string.h>

int main(void) {
	char str2[5];
	printf("문자열을 입력하세요: ");
	fgets(str2, sizeof(str2), stdin);
	printf("입력한 문자열은 %s\n", str2);
	printf("문자열의 크기는 %d\n", strlen(str2));

	return 0;
}