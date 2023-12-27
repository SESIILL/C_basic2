#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
    FILE* fp1, * fp2;
    int num, sum = 0;

    fp1 = fopen("random.txt", "w");
    if (fp1 == NULL) {
        printf("파일 열기 오류!\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < 10; i++) // 1) random.txt 파일에 난수 저장
        fprintf(fp1, "%d\n", rand() % 100);

    fclose(fp1);

    fp1 = fopen("random.txt", "r");
    if (fp1 == NULL) {
        printf("파일 열기 오류!\n");
        return 1;
    }

    while (fscanf(fp1, "%d", &num) != EOF) { // 2) 콘솔에 출력
        printf("%d\n", num);
        sum += num;
    }
    printf("총합은 %d\n", sum);

    fclose(fp1);

    fp1 = fopen("random.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("파일 열기 오류!\n");
        return 1;
    }

    while (fscanf(fp1, "%d", &num) != EOF) // 3) output.txt에 출력
        fprintf(fp2, "%d\n", num);
    fprintf(fp2, "총합은 %d\n", sum);

    fclose(fp1);
    fclose(fp2);

    return 0;
}