#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a = 10;
	int b = 20;
	int c[5]={1,2,3,4,5};//배열
	int q=add(a,b);//함수 호출,인수 2개->더할라고
	printf("%d\n", q);
	sub(a,b);
	arr_prn(c)
	return 0;
}

int add(int x, int y) {
	int k = x + y;
	return k; //30 반환
}
void sub(int i, int y) {
	int t = i - y;
	printf("%d", t);
}
arr_prn(int d[5]) {
	printf("%d\n", d[i]);
}