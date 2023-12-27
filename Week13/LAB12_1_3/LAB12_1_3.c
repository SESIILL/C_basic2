#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp1, * fp2;
	int score;

	fp1 = fopen("score.in.txt", "r"); // 읽기 모드로 오픈
	if (fp1 == NULL) {
		printf("파일 오픈 에러입니다!\n");
		return 1;
	}

	fp2 = fopen("score.out.txt", "w"); // 쓰기 모드로 오픈
	if (fp2 == NULL) {
		printf("file open error!\n");
		return 1;
	}

	// 데이터 타입을 지정하면서 파일의 끝까지 읽어서 쓰기
	fscanf(fp1, "%d", &score);
	while (!feof(fp1)) {
		fprintf(fp2, "%d\n", score + 9);
		fscanf(fp1, "%d", &score);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}