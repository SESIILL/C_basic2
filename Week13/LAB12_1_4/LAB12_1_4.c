#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp;
    char ch;

    fp = fopen("hello.out.txt", "w");
    if (fp == NULL) {
        printf("파일 열기 오류!\n");
        return 1;
    }

    fprintf(fp, "Hello\n");
    fprintf(fp, "World\n");

    fclose(fp);

    fp = fopen("hello.out.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 오류!\n");
        return 1;
    }

    while ((ch = getc(fp)) != EOF) // 콘솔에 출력
        putc(ch, stdout);

    fclose(fp);

    return 0;
}