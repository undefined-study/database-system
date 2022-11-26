#include <stdio.h>

// 변수 사용 영역
void auto_func(void);
void static_func(void);
int * static_func_resp(void);

int main(void) {
    register int i;

    printf("일반 지역 변수를 사용한 함수 호출..\n");
    for (i = 0; i < 4; i++) {
        auto_func();
    }

    printf("정적 지역 변수를 사용한 함수 호출..\n");
    for (i = 0; i < 4; i++) {
        static_func();
    }

    // 정적 지역 변수는 주소를 반환할 수 있다.
    int * resp = static_func_resp();
    printf("%d\n", *resp); // 1234

    return 0;
}

void auto_func(void) {
    auto int a = 0; // 지역 변수 선언 및 초기화
    // 호출할 때마다 메모리에 새롭게 할당되고 지정값으로 매번 초기화 된다.

    printf("함수 호출 시 일반 지역 변수의 값: %d\n", a);

    printf("%d\n", ++a);
}

void static_func(void) {
    static int a; // 정적 지역 변수 선언 및 초기화
    // 초기화하지 않아도 0으로 자동 초기화된다.
    // 프로그램이 실행될 때 메모리에 할당되고, 프로그램이 끝날 때까지 존재한다.
    // 즉, 정적 지역 변수는 함수가 반환되더라도 저장 공간이 계속 유지된다.
    printf("함수 호출 시 정적 지역 변수의 값: %d\n", a);

    printf("%d\n", ++a);
}

/* 정적 지역 변수의 주소를 반환하는 함수 */
int * static_func_resp(void) {
    static b = 1234;

    return &b;
}
