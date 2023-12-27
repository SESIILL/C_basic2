#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define NUM_OF_MEMBERS 5

void print_links(int data[][NUM_OF_MEMBERS]); // 2차원 배열 출력
void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS]); // 행렬곱: data X data = result

int main(void) {
	int link_data[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = {
		{0, 1, 0, 0, 0},
		{0, 0, 1, 0, 0},
		{0, 0, 0, 0, 1},
		{0, 0, 0, 0, 1},
		{0, 0, 0, 0, 0}
	};
	int link_result[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	
	printf("=================================================================\n");
	printf("Friends matrix\n");
	printf("=================================================================\n");
	print_links(link_data); // 최초 1촌 관계 출력
	matrix_multiplication(link_data, link_result); // 2촌 관계를 link_result에 넣는다.
	
	printf("=================================================================\n");
	printf("Friends of friends matrix\n");
	printf("=================================================================\n");
	print_links(link_result); // 2촌까지의 관계 출력
}

void print_links(int data[][NUM_OF_MEMBERS]) {
	for (int i = 0; i < NUM_OF_MEMBERS; i++) {
		for (int j = 0; j < NUM_OF_MEMBERS; j++)
			printf("%d ", data[i][j]);
		printf("\n");
	}
	printf("\n");
}

void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS]) {
	for (int i = 0; i < NUM_OF_MEMBERS; ++i) {
		for (int j = 0; j < NUM_OF_MEMBERS; ++j) {
			// result[i][j] 초기화
			result[i][j] = 0;

			// 행렬 곱셈 연산 수행
			for (int k = 0; k < NUM_OF_MEMBERS; ++k) {
				result[i][j] += data[i][k] * data[k][j];
			}
		}
	}
}