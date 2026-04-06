#include <stdio.h>

void ap1() {
	int i[5] = { 1,2,3,4,5 };//32비트의 정수형 저장 공간(0~4) 5개
	printf("%d\n\n", i[0]);
	printf("%p\n\n", i);
	printf("%p\n\n", &i);
	printf("%p\n\n", &i[0]);

	printf("p\n\n", &i[1]);
	printf("p\n\n", i+1);
	printf("p\n\n", &i[2]);
	printf("p\n\n", i+2);
	
}
void ap2() {//포인터 처럼 배열 사용
	int a[4];
	*a = 111;	//a[0]=111
	*(a + 1) = 22;	//a[1]=222;
	*(a + 2) = 333;//a[1]=333;
	*(a + 2) = 444;//a[1]=444;
	printf("%d\n\n", *a);//a[0] 값 출력
	printf("%d\n\n", *(a + 1));//a[1]
	printf("%d\n\n", *(a + 2));//a[2]
	printf("%d\n\n", *(a + 3));//a[3]
	//a[2]
}
int main() {
	ap1();
	ap2();
	return 0;
}