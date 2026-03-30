#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char fruits[3][20];/*５행　１０열（０～４행　０～９열）*/


    for (i = 1; i <= 3; i++)//0~2
    {
        printf("과일 이름을 입력하시요:");
        scanf("%s", fruits[i]);
        printf("%d 번째 과일은:%s\n", i, fruits[i]); //menu[i]는 행을 의미
    }
   

    return 0;
}