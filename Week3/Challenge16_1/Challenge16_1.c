#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char askReservation();
void printSeats(int s[][10], int col);
void processReservation(int s[][10], int col, int colChoice, int rowChoice);

int main(void) {
	int seats[3][10] = {0};
	int colChoice, rowChoice;

	printf("******좌석 예약 시스템******\n");
	while (askReservation() == 'y') {
		printSeats(seats, 3);
		printf("몇 번째 좌석을 예약하시겠습니까? <열 행>의 형태로 입력: ");
		scanf("%d %d", &colChoice, &rowChoice);
		processReservation(seats, 3, colChoice, rowChoice);
		while (getchar() != '\n'); // 버퍼 비우기
	}
}

char askReservation() {
	char answer;
	printf("좌석을 예약하시겠습니까? (y/n): ");
	scanf("%c", &answer);
	return answer;
}

void processReservation(int s[][10], int col, int colChoice, int rowChoice) {
	if (s[colChoice - 1][rowChoice - 1] == 0) { // 예약 가능이면
		s[colChoice - 1][rowChoice - 1] = 1;
		printf("예약되었습니다.\n");
		printSeats(s, col);
	}
	else // 이미 예약되었으면
		printf("이미 예약된 자리입니다.\n");
}

void printSeats(int s[][10], int col) { // 예약 내용을 반영한 좌석 출력
	printf("--------------------------------\n");
	printf("\t 1 2 3 4 5 6 7 8 9 10\n");
	printf("--------------------------------\n");
	for (int i = 0; i < col; i++) {
		printf("%d\t", i + 1);
		for (int j = 0; j < 10; j++) 
			printf("%2d", s[i][j]);
		printf("\n");
	}
	printf("\n");
}