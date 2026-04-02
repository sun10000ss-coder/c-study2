#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int res;
	int ar[10];
	printf("정수 10개 입력:");
	for (int i = 0;i < 10;i++) {
		scanf("%d", &ar[i]);
	}
	res=count_even(ar);
	printf_cnt(res);
}

count_even(int ar[10]) {
	int cnt=0;
	for (int i = 0;i < 10;i++) {
		if (ar[i] % 2 == 0)
			cnt = cnt + 1;
	}
	return cnt;

}
print_cnt(int r) {
	printf("개수는:%d", r);
}