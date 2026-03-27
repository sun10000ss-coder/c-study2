#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	int main(void) {

		int num, cnt = 0, i;

		printf("원하는 배수 입력: ");
		scanf("%d", &i);//i는 원하는 배수의 숫자
		printf("배수의 개수 입력: ");
		scanf("%d", &num);//보여지는 배수의 개수 

		while (cnt++ < num)
			printf("%d ", i * cnt);
		
	return 0;
}