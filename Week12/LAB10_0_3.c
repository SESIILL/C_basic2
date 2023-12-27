#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    char name[20];
    int midterm;
    int final;
};

int main(void) {
    struct student s[3]; // 구조체 배열
    struct student* sp = s; // 구조체 배열을 가리키는 포인터

    for (int i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", sp->name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &((*sp).midterm), &((*sp).final)); // sp->midterm = (*sp).midterm
        sp++;
    }

    sp = s; // 다시 배열의 처음으로 포인터를 설정
    printf("\n이름\t중간\t학기말\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final);
        sp++;
    }

    return 0;
}