#include <stdio.h>
int main(void) {
	/*int a,sum=0;
	for (a = 1;a <= 10;a+2)
	{
		sum = sum + a;
	}
	printf("i는%d\n, 합은 %d\\n", sum);*/
	int i = 1;
	int sum = 0;
	while (i <= 10)
	{
		sum = sum + i;
		i = i + 2;
	}
	printf("i는 %d, 함은 % d\n", i, sum);
	return 0;
}