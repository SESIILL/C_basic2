#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp1, * fp2;
    char buf[30];

    fp1 = fopen("hello.txt", "r");
    if (fp1 == NULL) {
        printf("파일 열기 오류!\n");
        return 1;
    }

    fp2 = fopen("hello2.txt", "w");
    if (fp2 == NULL) {
        printf("파일 열기 오류!\n");
        return 1;
    }

    fgets(buf, sizeof(buf), fp1);
    while (!feof(fp1)) {
        fputs(buf, fp2);
        fgets(buf, sizeof(buf), fp1);
    }

    fseek(fp1, 0, SEEK_SET); // 파일의 처음으로 이동

    fgets(buf, sizeof(buf), fp1);
    while (!feof(fp1)) {
        fputs(buf, fp2);
        fgets(buf, sizeof(buf), fp1);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}