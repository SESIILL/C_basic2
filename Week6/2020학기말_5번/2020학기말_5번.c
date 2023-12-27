#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checking(char w0[], char w[]) {
	int len1, len2;
	int flag = 1;

	for (len1 = 0; w0[len1] != '\0'; len1++); // apple
	for (len2 = 0; w[len2] != '\0'; len2++); // 패스워드

	if (len1 > len2) { // apple의 길이보다도 적으면
		return 0;
	}
	else {
		for (int i = 0; i < len1; i++) {
			if (w0[i] != w[i]) {
				flag = 0;
				break;
			}
		}
	}

	if (flag == 0)
		return 0;
	else
		return 1;
}

int main(void) {
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];
	
	scanf("%s %s %s", w1, w2, w3);
	
	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));

	return 0;
}