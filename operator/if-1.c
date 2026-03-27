#include <stdio.h>
int main()
{
	//int a = 8, b = 10, c;
	//if (a++ >= b--)//a=8 >=b=10
	//	c = a - b;//참
	//else//거짓
	//	c = a + b;//9+9
	//printf("a=%d\n", a);//9
	//printf("b=%d\n", b);//9
	//printf("c=%d", c);//18

	int num1 = 16, num2 = 80;
	printf("%d", num1 > num2 ? num1 & num2 : num1 ^ num2);
	return 0;
}