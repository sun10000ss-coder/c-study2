#include<stdio.h>
int main() {
		int i, cnt = 0;//변수는선언 했으나 사용은 안함
		for (i = 1; i <= 100; i++) {
			if (i % 3 == 0 && i % 7 == 0) {//i를 3으로 나눈 나머지가 모두 0이면 i 값의 출력
				printf("%d*", i);
			}
		}
	}
	int i;
	for (i = 0; i < 10; i++) {
		if (i % 3 == 0)continue;//3으로 나눈 나머지가0이라면 contiune가 숫자를 뛴다
		if (i > 5)break;//멈춘다
		printf("%d", i);
	}
}