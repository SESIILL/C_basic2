#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int list[], int size) {
    int i, j, temp, minIndex;
    for (i = 0; i < size - 1; i++) {
        minIndex = i; // 현재 인덱스를 최소값 인덱스로 설정
        for (j = i + 1; j < size; j++) { // 최소값을 찾는 반복문
            if (list[j] < list[minIndex]) {
                minIndex = j;
            }
        }

        // 현재 인덱스(i)와 최소값 인덱스(minIndex)의 원소 교환
        if (minIndex != i) {
            temp = list[i];
            list[i] = list[minIndex];
            list[minIndex] = temp;
        }
    }
}

int main(void) {
    int random[10];
    int i;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
        random[i] = rand() % 100;

    printf("발생된 난수: ");
    for (i = 0; i < 10; i++)
        printf("\t%d", random[i]);
    printf("\n");
    
    selectionSort(random, 10);
    
    printf("정렬 후: ");
    for (i = 0; i < 10; i++)
        printf("\t%d", random[i]);
    printf("\n");

    return 0;
}