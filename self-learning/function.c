//#include <stdio.h>
//int digit(int n) {
//	if (n < 10)return n;
//	return (n % 10) + digit(n / 10);
//
//}
//int main() {
//	printf("%d", digit(235));
//}




#include <stdio.h>

// 숫자의 각 자릿수 합을 구하는 함수
int digit(int n) {
    // 1. n이 10보다 작으면 (한 자릿수이면) 그대로 n을 반환한다.
    if (n < 10) return n;

    /* 2. n의 마지막 자릿수(n % 10)와
          나머지 앞부분 숫자들(n / 10)의 자릿수 합을 더하여 반환한다. */
    return (n % 10) + digit(n / 10);
}

int main() {
    // digit(235)를 호출하여 결과를 출력한다. (결과: 10)
    printf("%d", digit(235));
}