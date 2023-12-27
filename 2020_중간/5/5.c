#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mergeStringOneByOne(char c[], char a[], char b[]) {
	int i = 0, j = 0, k = 0;

	while (a[i] != '\0' && b[j] != '\0') {
		c[k++] = a[i++];
		c[k++] = b[j++];
	}

	while (a[i] != '\0') {
		c[k++] = a[i++];
	}
	while (b[j] != '\0') {
		c[k++] = b[j++];
	}
	c[k] = '\0';
}

int main(void) {
	char word1[10];
	char word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	
	mergeStringOneByOne(mergedWord, word1, word2);
	printf("%s\n", mergedWord);

	return 0;
}