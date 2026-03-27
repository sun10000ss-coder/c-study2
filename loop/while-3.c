#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a;
	int b = 1;
		printf("출력하고싶은 단은?");
	scanf("%d", &a);
	while (b <= 9) {
		printf("%d*%d = %d\n", a, b, a * b);
		b++;
	}
return 0;
}