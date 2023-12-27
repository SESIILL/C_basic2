#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_word_in_word(char w1[], char w2[], int start) {
	int flag = 0;

	for (int i = 0; w2[i] != '\0'; i++) {
		if (w1[start] != w2[i]) {
			flag = 1;
			break;
		}
		start++;
	}

	if (flag == 0)
		return 1;
	else
		return 0;
}

int main(void) {
	char s1[30], s2[30];
	int i, index = -1, count = 0;

	scanf("%s", s1);
	scanf("%s", s2);

	for (i = 0; s1[i] != '\0'; i++) {
		if (is_word_in_word(s1, s2, i) == 1) {
			index = i;
			break;
		}
	}

	while (s2[count] != '\0') {
		if (index == -1)
			break;
		else {
			for (i = index; s1[i] != '\0'; i++)
				s1[i] = s1[i + 1];
		}
		count++;
	}

	printf("%s\n", s1);
	
	return 0;
}