#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문자열이 같으면 0, 문자열이 정렬되어 있으면 1, 정렬되어 있지 않으면 -1
int stringCompare(const char* s1, const char* s2) {
	while (*s1 != '\0' && *s2 != '\0') {
		if (*s1 != *s2) {
			if (*s1 < *s2)
				return 1;
			else
				return -1;
		}
		*s1++;
		*s2++;
	}
	return 0;
}

void stringCat(char* s1, const char* s2) {
	while (*s1 != '\0') {
		*s1++;
	}
	while (*s2 != '\0') {
		*s1 = *s2;
		*s1++;
		*s2++;
	}
	*s1 = '\0';
}

void stringChange(char* s, char ch, char newCh) {
	while (*s != '\0') {
		if (*s == ch)
			*s = newCh;
		*s++;
	}
}

int main(void) {
	char name1[20];
	char name2[20];

	printf("Enter the first name: ");
	scanf("%s", name1);
	printf("Enter the second name: ");
	scanf("%s", name2);
	
	if (stringCompare(name1, name2) == 0)
		printf("두개의 이름은 같다.\n");
	else if (stringCompare(name1, name2) == 1)
		printf("두개의 이름은 다르며 정렬되어 있다.\n");
	else
		printf("두개의 이름은 다르며 정렬되어 있지 않다.\n");
	
	stringCat(name1, name2);
	printf("The concatenated name is %s\n", name1);
	stringChange(name1, 'u', 'x');
	printf("The changed name is %s\n", name1);

	return 0;
}