#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5	//기호상수 5->STUDENTS
int main(void)
{
	int score[STUDENTS];//5개 선언
	int sum=0;//누적 변수는 0으로 초기화
	float avg;

	for (int a = 0;a <5;a++)
	{
		printf("학생들의 성적을 입력:");
		scanf("%d", &score[a]);
		sum = sum + score[a];//sum+-score[i];
	}
	avg = sum / 5.;//5. 실수 계산
	printf("성적 합계=%d 성적 평균=%.5f\n", sum,avg);

	return 0;
}