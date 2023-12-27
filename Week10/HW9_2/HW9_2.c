#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char id[15]; // 14개의 문자 + '\0'
	char idFront[5] = "19"; // 4개의 문자 + '\0'
	int male = 77, female = 84;
	int life = 0;

	printf("주민등록번호 입력('-' 포함): ");
	scanf("%s", id);

	strncat(idFront, id, 2);
	life = atoi(idFront);
	printf("당신은 %s년도 생이군요.\n", idFront);

	if (id[7] == '1') {
		printf("남자분이시군요.\n");
		printf("평균 수명 %d를 더하면 %d까지 산다고 계산됩니다.\n", male, life + male);
	}
	else {
		printf("여자분이시군요.\n");
		printf("평균 수명 %d를 더하면 %d까지 산다고 계산됩니다.\n", female, life + female);
	}
	
	return 0;
}