#include <stdio.h>

// 포인터 배열
int main(void) {
    char *pary[5]; // 포인터 배열 선언
    register int i;

    for (i = 0; i < 5; i++) {
        pary[i] = "dog";
        printf("%s\n", pary[i]);
    }

    return 0;
}
