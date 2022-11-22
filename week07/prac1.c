#include <stdio.h>

// 주소 연산자 &를 사용하여, 변수에 할당된 메모리의 시작 주소를 확인해보자.
int main(void) {
    int a;
    double b;
    char c;
    int d;

    // %u - 부호 없는 10진수로 출력
    // & - 주소 연산자로 주소 계산
    printf("int형 변수 a의 주소: %u\n", &a); // int형 변수 a의 주소: 1860792888
    printf("int형 변수 a의 크기: %u\n", sizeof(a)); // 4
    printf("double형 변수의 주소: %u\n", &b); // double형 변수의 주소: 1860792880
    printf("char형 변수의 주소: %u\n", &c); // char형 변수의 주소: 1860792879
    printf("int형 변수 d의 주소: %u\n", &d); // int형 변수 d의 주소: 1860792872

    // %u는 주소를 출력하는 데 있어서 적합한 변환 문자는 아니다.
    // 주소는 보통 16진수로 표기한다.

    // %p - 주소 출력 전용 변환 문자로, 주소를 16진수로 출력
    printf("int형 변수 a의 주소: %p\n", &a); // int형 변수 a의 주소: 0x16daab238
    printf("double형 변수의 주소: %p\n", &b); // double형 변수의 주소: 0x16daab230
    printf("char형 변수의 주소: %p\n", &c); // char형 변수의 주소: 0x16daab22f
    printf("int형 변수 d의 주소: %p\n", &d); // int형 변수 d의 주소: 0x16daab228

    return 0;
}
