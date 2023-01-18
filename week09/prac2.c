#include <stdio.h>

// 함수 선언
void print_array(const int *p, int cnt);

int main(void) {
    int ary[3] = { 100, 200, 300 };
    int *pa = ary;
    int cnt = sizeof(ary) / sizeof(ary[0]);

    print_array(pa, cnt);
    // 100  200  300  

    return 0;
}

// 함수 정의
void print_array(const int *p, int cnt) {
    int i;
    for (i = 0; i < cnt; i++) {
        printf("%-5d", p[i]);
    }
    printf("\n");
}