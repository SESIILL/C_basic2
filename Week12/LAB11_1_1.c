#include <stdio.h>
#include <stdlib.h>

typedef struct score {
	int midterm;
	int final;
} Score;

void printScore(Score s) {
	printf("중간고사 성적은 %d\n", s.midterm);
	printf("학기말고사 성적은 %d\n", s.final);
}

Score biggerScore(Score s1, Score s2) {
	int t1 = s1.midterm + s1.final;
	int t2 = s2.midterm + s2.final;
	if (t1 >= t2)
		return s1;
	else
		return s2;
}

Score totalScore(Score s1, Score s2) {
	Score s;
	s.midterm = s1.midterm + s2.midterm;
	s.final = s1.final + s2.final;
	return s;
}

Score createScore(int m, int f) {
	Score s;
	s.midterm = m;
	s.final = f;
	return s;
}

int main(void) {
	Score s1, s2, s3;
	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;

	printf("1)-----------------------------\n");
	printScore(s1);
	printScore(s2);
	printf("2)-----------------------------\n");
	printf("둘 중 성적이 좋은 점수:\n");
	printScore(biggerScore(s1, s2));
	printf("3)-----------------------------\n");
	printf("두 성적의 총합:\n");
	printScore(totalScore(s1, s2));
	printf("4)-----------------------------\n");
	s3 = createScore(99, 99);
	printScore(s3);

	return 0;
}