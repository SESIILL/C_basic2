#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	char name[20];
	int midterm;
	int final;
	int average;
} Student;

void printStudent(Student* aStudent) {
	printf("%s\t", aStudent->name);
	printf("%d\t%d\t%d\n", aStudent->midterm, aStudent->final, aStudent->average);
}

int main(void) {
	Student s[40];
	Student* aStudent = s;
	int num, i;

	printf("Enter a number of student: ");
	scanf("%d", &num);
	
	for (i = 0; i < num; i++) {
		printf("Enter student name: ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
		s[i].average = (s[i].midterm + s[i].final) / 2;
	}

	printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < num; i++) {
		printStudent(aStudent);
		aStudent++;
	}

	return 0;
}