#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

typedef struct {
	char name[MAX];
	int mid;
	int final;
	char grade;
} Student;

typedef struct {
	int num;
	Student s[40];
} CClass;

void printClass(CClass* c) {
	for (int i = 0; i < c->num; i++) {
		printf("%s %d %d %c\n", c->s[i].name, c->s[i].mid, c->s[i].final, c->s[i].grade);
	}
}

void readClass(CClass* c) {
	int choice;
	int i = 0;

	scanf("%d", &choice);
	while (choice != -1) {
		scanf("%s", c->s[i].name);
		scanf("%d", &c->s[i].mid);
		scanf("%d", &c->s[i].final);
		i++;
		scanf("%d", &choice);
	}
	c->num = i;
}

void calculateClassGrade(CClass* c) {
	for (int i = 0; i < c->num; i++) {
		int sum = c->s[i].mid + c->s[i].final;
		if (sum > 100)
			c->s[i].grade = 'A';
		else
			c->s[i].grade = 'F';
	}
}

int main(void) {
	CClass cClass;
	cClass.num = 0;

	readClass(&cClass);
	calculateClassGrade(&cClass); // 학점 계산
	printClass(&cClass); // 학생 정보를 출력
	
	return 0;
}