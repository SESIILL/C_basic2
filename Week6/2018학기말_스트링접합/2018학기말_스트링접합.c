#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mergeString(char c[], char a[], char b[]) {
	int i = 0, j = 0, k = 0;

	while (a[i] != '\0' && b[j] != '\0') { // 둘 중에 하나라도 끝에 다다르면 종료
		if (a[i] == b[j]) {
			c[k++] = a[i++];
			c[k++] = b[j++];
		}
		else if (a[i] > b[j]) 
			c[k++] = b[j++];
		else 
			c[k++] = a[i++];
	}

	// 남은 문자 추가
	while (a[i] != '\0') {
		c[k++] = a[i++];
	}
	while (b[j] != '\0') {
		c[k++] = b[j++];
	}
	
	c[k] = '\0';
}

int main(void) {
	char word1[10], word2[10];
	char mergedWord[20];
	
	scanf("%s", word1);
	scanf("%s", word2);
	
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);

	return 0;
}