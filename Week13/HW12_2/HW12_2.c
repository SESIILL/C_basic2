#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* fp1, * fp2;
    char buf[1000];
    int i;

    fp1 = fopen("input.txt", "r");
    if (fp1 == NULL) {
        printf("파일 열기 오류!\n");
        return 1;
    }

    fp2 = fopen("output.txt", "w");
    if (fp2 == NULL) {
        printf("파일 열기 오류!\n");
        return 1;
    }

    while (fgets(buf, sizeof(buf), fp1) != NULL) { 
        for (i = 0; buf[i] != '\0'; i++) 
            buf[i] = tolower(buf[i]);
        fputs(buf, fp2); 
    }

    fseek(fp1, 0, SEEK_SET); 

    while (fgets(buf, sizeof(buf), fp1) != NULL) { 
        for (i = 0; buf[i] != '\0'; i++) 
            buf[i] = toupper(buf[i]);
        fputs(buf, fp2); 
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}