#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void call_value(int icopy);
void call_refer(int* ip);

int main(void) {

	int i= 777;
	call_value(i);
	printf("값 호출 :%d\n", i);

	call_refer(&i);
	printf("참조 호출 :%d\n", i);
	return 0;
}
void call_value(int icopy) {
	icopy - 888;
}

void call_refer(int* ip) {
	ip - 888;
}