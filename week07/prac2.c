#include <stdio.h>

// 포인터를 선언하고 사용해보자.
int main(void) {
    // 일반 변수 선언
    int a;
    // 포인터 선언
    int *pa; // 또는 int* pa;

    // 포인터에 a의 시작 주소 대입!
    pa = &a;
    // 다음과 같이 포인터를 통해서, 변수 a에 10을 대입할 수 있다.
    *pa = 10;

    // 각각 변수명과 포인터로 a 값 출력해보기
    printf("변수명으로 a 값 출력: %d\n", a); // 변수명으로 a 값 출력: 10
    printf("포인터로 a 값 출력: %d\n", *pa); // 포인터로 a 값 출력: 10

    // 입력 받기 (셋 다 동일)
    scanf("%d", &a);
    printf("방금 입력 받은 a 값은 %d\n", a);
    scanf("%d", pa);
    printf("방금 입력 받은 a 값은 %d\n", a);
    scanf("%d", &*pa);
    printf("방금 입력 받은 a 값은 %d\n", a);

    return 0;
}
