#include <stdio.h>

// 여러 개의 1차원 배열을 포인터 배열로 연결하여 2차원 배열처럼 사용하기
int main(void) {
    int ary1[4] = { 1, 2, 3, 4 };
    int ary2[4] = { 10, 20, 30, 40 };
    int ary3[5] = { 100, 200, 300, 400, 500 };

    // 포인터 배열에 각 배열명 초기화
    int *pary[3] = { ary1, ary2, ary3 };
    int i, j; // 반복 제어 변수

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%5d", pary[i][j]);
        }

        printf("\n");
    }

    return 0;
}
