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

void readStudentScore(Student* aStudent) {
	printf("Enter student name: ");
	scanf("%s", aStudent->name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &aStudent->midterm, &aStudent->final);
}

void calculateStudentAverage(Student* aStudent) {
	aStudent->average = (aStudent->midterm + aStudent->final) / 2;
}

int main(void) {
	Student s[40];
	Student* aStudent = s;
	int num, i;

	printf("Enter a number of student: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		readStudentScore(aStudent);
		calculateStudentAverage(aStudent);
		aStudent++;
	}

	aStudent = s;
	printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < num; i++) {
		printStudent(aStudent);
		aStudent++;
	}

	return 0;
}