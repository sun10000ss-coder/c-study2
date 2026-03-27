#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--) //행(줄)
    {
        for (int j = 1; j <= i; j++) //열(칸)
        {
            printf("*");

        }
        printf("\n");
    }



    //for (int i = 1; i <= 5; i++) //행(줄)
    //{
    //   for (int j = 1; j <= i; j++) //열(칸)
    //   {
    //      printf("*");
    //      
    //   }
    //   printf("\n");
    //}
    return 0;
}