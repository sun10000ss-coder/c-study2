#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i = 0;
	do
	{
		printf("1---새로 만들기");
		printf("2---파일열기\n");
		printf("3---파일열기\n");
		printf("하나를 선택하시요.\n");
		scanf_s("%d", &i);
	} while (i<1||i>3);
	printf("선택메뉴는:%d", i);

	return 0;
}