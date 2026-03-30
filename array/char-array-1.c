#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char str[30] = "C language";//문자배열 최대 30자
    int i = 0;//0부터 시작

    while (str[i] != '\0')//만족할때 반복
        i++;              // I= 다르다 \0는 NULL 값을 의미
                          //문자열 내용 끝나는 시점 반드시 NULL이 들어감  
    printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
    return 0;
}