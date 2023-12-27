#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int state;
	FILE* fp;

	fp = fopen("hello.out.txt", "w");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	fprintf(fp, "%s\n", "Hello");
	fprintf(fp, "%s", "World");

	state = fclose(fp);
	if (state != 0) { // 이 체크는 생략 가능
		printf("file close error!\n");
		return 1;
	}

	return 0;
}