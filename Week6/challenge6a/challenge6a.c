#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char w1[10], w2[10];
	int len1, len2, flag = 0;

	printf("Enter the first word: ");
	scanf("%s", w1);
	printf("Enter the second word: ");
	scanf("%s", w2);

	for (len1 = 0; w1[len1] != '\0'; len1++);
	for (len2 = 0; w2[len2] != '\0'; len2++);

	if (len1 != len2) // 두 단어의 길이가 다르면
		flag = 1;
	else { // 두 단어의 길이가 같으면
		for (int i = 0; i < len1; i++) { 
			if (w1[i] != w2[i]) {
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1)
		printf("두 단어는 다르다.\n");
	else
		printf("두 단어는 같다.\n");

	return 0;
}