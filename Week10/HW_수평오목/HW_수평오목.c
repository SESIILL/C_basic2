#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

void display(char b[][BOARD_SIZE]) {
	int i, j;
	printf(" ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int winCheck(char b[][BOARD_SIZE], int r, int c) { // r, c에 말을 놓았을 때 오목 성공이면 1, 아니면 0
	int count = 0;
	int flag = 0;

	if (b[r][c] == 'X') {
		for (int i = 0; i < BOARD_SIZE; i++) {
			if (b[r][i] == 'X')
				count++;
			if (b[r][i] == 'O')
				return 0;
			if (count == 5)
				return 1;
		}
	}
	else {
		for (int i = 0; i < BOARD_SIZE; i++) {
			if (b[r][i] == 'O')
				count++;
			if (b[r][i] == 'X')
				return 0;
			if (count == 5)
				return 1;
		}
	}
	return 0;
}

int main(void) {
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn[2] = { 'X', 'O' };
	int r, c;
	int i, j;
	int count;

	for (i = 0; i < BOARD_SIZE; i++) // 오목 판 초기화
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';
	count = 1;

	display(board); do
	{
		while (1) {
			printf("Player %c(행 열): ", turn[0]);
			scanf("%d %d", &r, &c);
			if (board[r][c] == turn[0] || board[r][c] == turn[1])
				continue;
			else {
				board[r][c] = turn[0];
				display(board);
				count++;
				break;
			}
		}
		if (winCheck(board, r, c) == 1) {
			printf("Player X wins!\n");
			break;
		}

		while (1) {
			printf("Player %c(행 열): ", turn[1]);
			scanf("%d %d", &r, &c);
			if (board[r][c] == turn[0] || board[r][c] == turn[1])
				continue;
			else {
				board[r][c] = turn[1];
				display(board);
				count++;
				break;
			}
		}
		if (winCheck(board, r, c) == 1) {
			printf("Player O wins!\n");
			break;
		}
	} while (count <= BOARD_SIZE * BOARD_SIZE);

	if (winCheck(board, 0, 0) == 0 && count > BOARD_SIZE * BOARD_SIZE)
		printf("Nobody wins!\n");

	return 0;
}