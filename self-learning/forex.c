#include <stdio.h>

int main() {
    int a[5] = { 9, 1, 7, 3, 5 }; // 정렬할 데이터가 담긴 배열을 선언한다.
    int i, j, min, t;

    // 바깥쪽 for문: i 위치에 들어갈 값을 결정하는 반복이다.
    for (i = 0; i < 4; i++) {
        min = i; // 현재 i번째 위치를 가장 작은 값의 위치로 가정한다.

        // 안쪽 for문: i 뒤쪽에서 가장 작은 값을 찾는 반복이다.
        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[min]) // 현재 찾은 최솟값보다 더 작은 값이 있다면,
                min = j;      // 그 위치(index)를 min에 저장한다.
        }

        // 찾은 최솟값(a[min])과 현재 i 위치의 값(a[i])을 교환한다.
        t = a[i];
        a[i] = a[min];
        a[min] = t;
        // 이 과정을 통해 앞에서부터 차례대로 정렬이 완료되는 선택 정렬 코드이다.
    }

    // 최종적으로 정렬된 배열의 요소를 하나씩 출력한다. (결과: 1 3 5 7 9)
    for (i = 0; i < 5; i++) {
        printf("%2d", a[i]);
    }
}






//#include <stdio.h>
//
//int main() {
//    int a[5] = { 9, 1, 7, 3, 5 };
//    int i, j, min, t;
//
//    for (i = 0; i < 4; i++) {
//        min = i;
//
//        for (j = i + 1; j < 5; j++) {
//            if (a[j] < a[min])
//                min = j;
//        }
//
//        t = a[i];
//        a[i] = a[min];
//        a[min] = t;
//    }
//
//    for (i = 0; i < 5; i++) {
//        printf("%2d", a[i]);
//    }
//
//    return 0;
//}