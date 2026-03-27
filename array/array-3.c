//#include<stdio.h>
//void main() {
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	//[행][열] 0-2행 0-2열 -> 9개 요소 구성
//	int i, j;
//	for (j = 0; j < 3; j++) {//열 의미 0~2
//		for (i = 0; i < 3; i++)//i는 행의 의미 0~2
//			printf("%d\t", a[i][j]);//9번 출력
//		printf("\n");
//	}
//}
#include <stdio.h>
    void main() {
        int b[4][3] = { {100, 200, 300}, {10, 0, 0}, {50, 100, 150},{30.40,0} };
        int i, j;
        int sum=0;
        for (j = 0; j < 4; j++) {//j가 0일때 j 0~2까지 1일때는 0~

            for (i = 0; i < 3; i++) {
                printf("%d\t", b[j][i]);
                sum = sum + b[j][i];
            }
            printf("\n");
        }
        printf("합계는 %d", sum);
    }