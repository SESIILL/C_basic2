#define MAX_VIDEO 100 // 보유한 비디오의 최대 수량
#define MAX_CHAR 100 // 제목의 최대 길이

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct VideoInfo {
	char title[MAX_CHAR];
	int qty;
};

int main(void) {
	int videoCount = 5;
	struct VideoInfo videoList[MAX_VIDEO] = { 
		{"BeforeSunrise", 1}, {"BeforeSunset", 3}, {"BeforeMidnight", 5}, {"Casablanca", 7}, {"EdgeOfTomorrow", 9} 
	};
	char title[MAX_CHAR];
	int qty;
	int choice;
	int i = 0, flag = 0;
	
	printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
	scanf("%d", &choice);
	while (choice != 4) {
		switch (choice) {
		case 1: // 보유 Video 출력
			printf("Video 제목\t수량\n");
			printf("-----------------------\n");
			for (i = 0; i < videoCount; i++) 
				printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
			printf("\n");
			break;
		case 2: // Video 구입
			printf("Enter video 제목: ");
			scanf("%s", title);
			printf("Enter video 수량: ");
			scanf("%d", &qty);
			strcpy(videoList[videoCount].title, title);
			videoList[videoCount].qty = qty;
			videoCount++;
			break;
		case 3: // title로 Video 찾기
			printf("Enter video 제목: ");
			scanf("%s", title);
			for (i = 0; i < videoCount; i++) {
				if (strcmp(videoList[i].title, title) == 0) {
					printf("대여 가능합니다.\n");
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				printf("그런 비디오는 없습니다.\n");
			break;
		}
		printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
		scanf("%d", &choice);
	}

	return 0;
}