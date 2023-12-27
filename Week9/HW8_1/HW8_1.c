#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumUpData(int*, int);
void printData(int*, int);
int maxData(int*, int);

int main(void) {
	int k;
	int* p;
	int sum;
	int data[10]; // 계산 수행에 사용할 정적 변수
	p = data; // 혹은 p = &data[0]
	
	srand(time(NULL));
	for (k = 0; k < 10; k++) // Index 0...9까지
		*p++ = rand() % 100; // 데이터 초기화. 0부터 99까지의 Random 값을 출력.
	
	sum = sumUpData(data, 10);
	printf("엘리먼트의 합은 %d\n", sum);
	printf("엘리먼트들은 ");
	printData(data, 10);
	printf("\n엘리먼트들 중 가장 큰 수는 %d\n", maxData(data, 10));

	return 0;
}

int sumUpData(int* p, int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += *p++; // p[i]
	return sum;
}

void printData(int* p, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", *p);
		*p++;
	}
}

int maxData(int* p, int size) {
	int i, max = -1;
	for (i = 0; i < size; i++) {
		if (max < *p) 
			max = *p;
		*p++;
	}
	return max;
}
