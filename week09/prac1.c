#include <stdio.h>

int main(void) {
    int ary[3];
    int *pa = ary; // 포인터에 배열명 저장

    *pa = 1; // ary의 첫 번째 요소에 1 대입
    *(pa + 1) = 2; // ary의 두 번째 요소에 2 대입
    pa[2] = pa[0] + pa[1]; // 포인터에 대괄호를 써서 배열명처럼 사용

    int cnt = sizeof(ary) / sizeof(ary[0]); // 반복 횟수
    int i; // 반복 제어 변수
    for (i = 0; i < cnt; i++) {
        // 포인터로 모든 배열 요소 출력
        printf("%-5d", pa[i]);
    }
    // 1    2    3
    printf("\n");

    // 포인터 뺄셈 연산
    int diff = (pa + 1) - pa;
    printf("diff: %d\n", diff); // 1

    return 0;
}
