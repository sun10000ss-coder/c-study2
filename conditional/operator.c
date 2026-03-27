#include <stdio.h>

int main()
{
	int res1;
	double res2;
	int num1, num2;
	//double divi;
	char op, a;
	//char k[10];

	while (1)
	{
		printf("첫번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num1);
		printf("연산자를 입력하세요(+ - * /):  ");
		scanf_s(" %c", &op);
		printf("두번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num2);

		switch (op) {

		case '+':
			res1 = num1 + num2;
			//printf("덧셈 결과: %d\n", sum);
			break;

		case '-':
			res1 = num1 - num2;
			//printf("뺄셈 결과: %d\n", sub);
			break;

		case '*':
			res1 = num1 * num2;
			// printf("곱셈 결과: %d\n", mul);
			break;

		case '/':
			res2 = (double)num1 / num2;
			// printf("나눗셈 결과: %.2f\n", divi);
			break;

			//default:
				//printf("잘못된 연산자입니다\n");

		}
		if (op == '+' || op == '-' || op == '*')
			printf("연산 결과:%d\n", res1);
		else if (op == '/')
			printf("연산 결과:%.2f\n", res2);
		else
			printf("입력 오류");
		printf("연산을 종료하겠습니까?(y/Y)\n");
		scanf_s(" %c", &a);
		if (a == 'y' || a == 'Y')
			break;
		
	}
	return 0;
}