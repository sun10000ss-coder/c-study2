//문제) 1글자를 받아 대문자, 소문자, 숫자로 분류
#include <stdio.h>
int main(void)
{
	char ch;
	printf("문자를 입력하세요:");
	//scanf("%c", ch);
	ch = getchar();//1글자 입력
	if (ch >= 65 && ch <= 90) //65~90 대문자 코드
		printf("대문자입니다");
	else if (ch >= 'a' && ch <= 'z')//97~122 소문자 코드
		//(ch >= 97 && ch <= 122)
		printf("소문자입니다");
	else if (ch >= '0' && ch <= '9')//48~57 숫자 코드
		//(ch >= 48 && ch <= 57)
		printf("숫자입니다");
	else
		printf("그외 문자입니다");

	return 0;
}