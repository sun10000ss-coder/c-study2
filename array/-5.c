#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char str[30] = "C langure";
	int i = 0;
	
	while (str[i] != "\0")
		i++;
	printf("문자열\%s\"의 길이는 %d입니다.\n", str, i);

	int a;
	char menu[5][10] = {
		"init",
		"open",
		"close",
		"read",
		"write"
	};

	for (a = 0;a < 5;a++)
		printf("%d 번쨰 메뉴:%s\n", a, menu);

	return 0;
}