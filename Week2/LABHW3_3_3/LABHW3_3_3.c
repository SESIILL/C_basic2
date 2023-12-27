#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void) {
	int seatChoice;
	int seats[SIZE] = { 0 };
	int sum = 0;

	printf("******좌석 예약 시스템******\n");
	while (1) {
		seatChoice = askReservation();
		sum += seatChoice;
		processReservation(seats, SIZE, seatChoice);
		if (sum >= SIZE)
			return;
	}
}

int askReservation() {
	int choice;
	printf("\n좌석을 예약하시겠습니까? (몇 명): ");
	scanf("%d", &choice);
	return choice;
}

void processReservation(int s[], int size, int choice) {
	int start, left;
	for (int i = 0; i < size; i++) {
		if (s[i] == 0) {
			start = i;
			left = size - start;
			break;
		}
	}

	if (choice > left) {
		printf(">>> %d명은 예약 안 됨\n", choice - left);
		for (int i = start; i < size; i++)
			s[i] = 1;
	}
	else {
		for (int i = start; i < choice + start; i++)
			s[i] = 1;
	}
	printSeats(s, size);
}

void printSeats(int s[], int size) {
	// 예약내용 반영한 좌석표 출력
	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (int i = 0; i < SIZE; i++)
		printf("%2d", s[i]);
	printf("\n");
}