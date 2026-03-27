//pw 입력 받아서 pass(암호) 비교
//다르면 계속 반복, 맞을때까지 반복(while)
//맞으면 '로그인 성공' 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int pass = 1234;
	int pw;
	
	while (pw !=pass)//반복은 만족할때, 조건이 만족하지 않을때 본복문 탈출
	{
		printf("기억하는 암호를 입력하세요");
		scanf("%d", &pw);
	}
	printf("탈출 성공");

	return 0;
}
