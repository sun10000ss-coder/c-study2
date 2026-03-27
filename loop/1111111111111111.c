#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
    //int i,j; 
    for (int i = 2; i <= 9; i++)
    {
        printf("< %d 단 >\n", i);
        for (int j = 1; j <= 9;j++)
        {
            printf("%d * %d = %-3d\n", i, j, i * j);
        } //j for 끝
    }//i for 끝
    return 0;
}//main 끝