#include <stdio.h>

int main (void) {
    int a;      // 일반 변수 선언
    printf ("a의 주소: %p\n", &a); // a의 주소: 0x16b193148

    int *pa;    // 포인터 선언

    pa = &a;    // 포인터에 a의 주소 대입
    *pa = 10;   // 포인터로 변수 a에 10을 대입

    printf ("변수명으로 a 값 출력하기: %d\n", a);   // 10
    printf ("포인터로 a 값 출력하기: %d\n", *pa);   // 10

    return 0;
}