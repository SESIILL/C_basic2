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

int winCheck(char b[][BOARD_SIZE], int r, int c) {
	int count, i;

	count = 0;
	for (i = 0; i < BOARD_SIZE; i++) { // 수평 체크
		if (b[r][i] == b[r][c])
			count++;
		else
			count = 0;
		if (count == 5)
			return 1;
	}

	count = 0;
	for (i = 0; i < BOARD_SIZE; i++) { // 수직 체크
		if (b[i][c] == b[r][c])
			count++;
		else
			count = 0;
		if (count == 5)
			return 1;
	}

	count = 0;
	for (i = -4; i <= 4; i++) { // 대각선 체크(왼쪽 위에서 오른쪽 아래로)
		int row = r + i;
		int col = c + i;
		if (row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE) { // row와 col이 범위 내에 있으면
			if (b[row][col] == b[r][c])
				count++;
			else
				count = 0;
			if (count == 5)
				return 1;
		}
	}

	count = 0;
	for (i = -4; i <= 4; i++) { // 역대각선 체크(오른쪽 위에서 왼쪽 아래로)
		int row = r - i;
		int col = c + i;
		if (row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE) { // row와 col이 범위 내에 있으면
			if (b[row][col] == b[r][c])
				count++;
			else
				count = 0;
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
