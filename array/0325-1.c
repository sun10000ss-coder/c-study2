#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
    int sum;
    float a;

    printf("10명 점수 입력 : ");

    scanf("%d %d %d %d %d %d %d %d %d %d", &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8, &s9, &s10);

    sum = s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10;

    a = (float)sum / 10;

    printf("합계는 %d 평균은 %.1f\n", sum, a);

    return 0;
}