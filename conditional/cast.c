#include <stdio.h>
int main() {
	int a;
	a = sizeof(int) + sizeof(char);//sizeof는 크기를 나타내는거다
	printf("%d", a);
	return 0;
}