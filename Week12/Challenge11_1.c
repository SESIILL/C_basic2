#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	char name[20];
	int midterm;
	int final;
	int average;
} Student;

typedef struct cClass {
	int num;
	Student s[40];
} CClass;

void readClass(CClass* cp) {
	for (int i = 0; i < cp->num; i++) {
		printf("Enter student name: ");
		scanf("%s", cp->s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &cp->s[i].midterm, &cp->s[i].final);
	}
}

void calculateClassAverage(CClass* cp) {
	for (int i = 0; i < cp->num; i++)
		cp->s[i].average = (cp->s[i].midterm + cp->s[i].final) / 2;
}

void printClass(CClass* cp) {
	for (int i = 0; i < cp->num; i++) {
		printf("%s\t", cp->s[i].name);
		printf("%d\t%d\t%d\n", cp->s[i].midterm, cp->s[i].final, cp->s[i].average);
	}
}

void printStudent(Student* sp) {
	printf("%s\t", sp->name);
	printf("%d\t%d\t%d\n", sp->midterm, sp->final, sp->average);
}

void calculateAll(CClass* cp, Student* pAll) {
	int avg1 = 0, avg2 = 0, avg3 = 0;
	for (int i = 0; i < cp->num; i++) {
		avg1 += cp->s[i].midterm;
		avg2 += cp->s[i].final;
		avg3 += cp->s[i].average;
	}
	pAll->midterm = avg1 / cp->num;
	pAll->final = avg2 / cp->num;
	pAll->average = avg3 / cp->num;
}

int main(void) {
	CClass cp;
	Student all = { "All", 0, 0, 0 };

	printf("Enter a number of student: ");
	scanf("%d", &cp.num);
	
	readClass(&cp);
	calculateClassAverage(&cp);
	
	printf("\n이름\t중간\t학기말\t평균\n");
	printClass(&cp);
	
	printf("----------------------------------\n");
	calculateAll(&cp, &all);
	printStudent(&all);

	return 0;
}