#include <stdio.h>
#include <stdlib.h>

// 동적 할당 함수
int main(void) {
    int *pi;

    const SIZE = 5;
    pi = (int *)malloc(sizeof(int) * SIZE);
    // pi = malloc(sizeof(int) * SIZE); -> 위와 같이 형 변환하지 않아도 정상적으로 동작함.

    register int i;

    for (i = 0; i < SIZE; i++) {
        printf("배열 원소의 값을 입력해주세요: \n");
        scanf("%d", pi + i);
    }

    for (i = 0; i < SIZE; i++) {
        printf("%-5d", pi[i]);
    }

    return 0;
}
