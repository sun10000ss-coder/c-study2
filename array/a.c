#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int price, money, change;
    int c5000, c1000, c100;

    printf("물건 값을 입력하시오: ");
    scanf("%d", &price); // 물건 값을 입력받는다. 

    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &money); // 물건 값을 입력받는다. 
    change = money - price;   // 거스름돈을 change에 저장

    c5000 = change / 5000; // 남은 잔돈에서 5000원권의 개수를 계산한다. 
    change = change % 5000; //나머지 연산자를 사용하여 남은 잔돈을 계산한다. 

    c1000 = change / 1000; // 남은 잔돈에서 1000원권의 개수를 계산한다. 
    change = change % 1000; //나머지 연산자를 사용하여 남은 잔돈을 계산한다. 


    c100 = change / 100; // 남은 잔돈에서 100원 동전의 개수를 계산한다. 
    change = change % 100; //나머지 연산자를 사용하여 남은 잔돈을 계산한다. 


    printf("\n오천원권: %d장\n", c5000);
    printf("천원권: %d장\n", c1000);
    printf("백원 동전: %d개\n", c100);
    printf("남은 잔돈: %d원\n", change);
    return 0;
}




