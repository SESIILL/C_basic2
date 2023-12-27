#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 3

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
	} while (count <= BOARD_SIZE * BOARD_SIZE);

	return 0;
}