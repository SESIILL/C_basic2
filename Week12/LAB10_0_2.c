#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    char name[20];
    int midterm;
    int final;
};

int main(void) {
    struct student aStudent; // 구조체 변수
    struct student* sp = &aStudent; // aStudent를 가리키는 포인터

    printf("Enter student name: ");
    scanf("%s", sp->name);
    printf("Enter midterm and final score: ");
    scanf("%d %d", &((*sp).midterm), &((*sp).final)); // sp->midterm = (*sp).midterm

    printf("\n이름\t중간\t학기말\n");
    printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final);

    return 0;
}