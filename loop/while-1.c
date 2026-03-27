#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//int i=2;
	//int sum=0;

	//while (i <= 100)
	//{
	//	//printf("%d\n", i);
	//	sum + sum + i;
	//	i = i + 2;//i+=1 //i++
	//}
	//printf("1~100짝수 함은:%d", sum);
	int num, i = 0;
	printf(" 양의 정수 입력: ");
	scanf("%d", &num);
	while (i < num) {
		printf("handaman!\n");
		i++;//1씩 증가
	}

	return 0;
}