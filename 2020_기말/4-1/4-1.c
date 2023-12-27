#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

typedef struct {
	char name[MAX];
	int mid;
	int final;
	char grade;
} Student;

void printStudent(Student* m) {
	printf("%s %d %d %c\n", m->name, m->mid, m->final, m->grade);
}

void readNewStudent(Student* m, int* snPtr) {
	scanf("%s", m[*snPtr].name);
	scanf("%d", &m[*snPtr].mid);
	scanf("%d", &m[*snPtr].final);
	(*snPtr)++;
}

void calculateGrade(Student* m, int size) {
	for (int i = 0; i < size; i++) {
		int sum = m[i].mid + m[i].final;
		if (sum > 100)
			m[i].grade = 'A';
		else
			m[i].grade = 'F';
	}
}

int main(void) {
	Student Students[MAX];
	int i;
	int StudentNum = 0;
	int choice;

	scanf("%d", &choice);
	while (choice != -1) {
		readNewStudent(Students, &StudentNum);
		scanf("%d", &choice);
	}

	calculateGrade(Students, StudentNum);
	for (i = 0; i < StudentNum; i++)
		printStudent(&Students[i]);

	return 0;
}
