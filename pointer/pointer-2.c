#include <stdio.h>

int main(void) {
	int i = 3000;
	int * p = NULL;//포인터 변수 선언

	p = &i;//i변수의 주소를 p 포인터 변수에 줌

	printf("p=%p\n", p);//%p: 주로를 출력하는 서식 문자
	printf("&i=%p\n\n", &i);
	i = 4000;
	printf("i=%d\n", i);
	*p = 5000;
	printf("i=%d\n", *p);//주소에 저장된 내요에 접근하는 포인터

	int x = 10, y = 20;
	int* pi;//포인터 변수
	
	pi = &x;//x의 주소를 포인터 변수 pi에 준다
	printf("pi=%p\n", pi);//x의 주소를 x를 출력한다
	printf("pi=%d\n", *pi);

	pi = &y;//y의 주소를 포인터 변수 pi에 준다
	printf("pi=%p\n", pi);// y의 주소를 y를 출력한다
	printf("pi=%d\n", *pi);
	return 0;
}
