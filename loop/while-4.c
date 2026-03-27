#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a;
	int b;
	for (a = 1;a <= 3;a++)
	{
		for (b = 1;b <= 3;b++)
		{
			printf("%d %d\n", a, b);
		}


	}
	/*while(a <=3 ){
		b = 1;
		while (b <= 3)
		{
			printf("%d %d\n", a, b);
			b++;
		}
		a++;

		}*/
	return 0;
}