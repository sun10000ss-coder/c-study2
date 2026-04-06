#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sub(int i, int y);
void   arr_prn(int d[5]);

int main(void)
{
    int a = 10;
    int   b = 20;
    int c[5] = { 1,2,3,4,5 };// 배열

    int q = add(a, b);   //함수 호출, 인수 2개->더할라고
    sub(a, b);
    printf("%d\n", q);

    arr_prn(c);//함수 호출
    return 0;
}

int add(int x, int y) //매개변수: 형을 선언
{
    int k = x + y;
    return k; //30 반환
}
void sub(int i, int y)

{
    int t = i - y;
    printf("%d\n", t);
}


void   arr_prn(int d[5])
{
    for (int i = 0; i < 5; i++)
        printf("%d\n", d[i]);
}
