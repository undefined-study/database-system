#include <stdio.h>

// 포인터의 대입 규칙
int main(void) {
    // 1. 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 한다. 그렇지 않을 경우 예상할 수 없는 결과가 나옴!

    // 위 규칙을 지킨 대입 연산
    int a = 10;
    int *pa = &a;
    int *px;

    px = pa;
    printf("가리키는 변수의 형태가 같을 경우 포인터끼리 대입 연산을 하면: %d\n", *px); // 10 -> 예상했던 결과

    // 위 규칙을 지키지 않은 대입 연산
    int b = 20;
    int *pb = &b;
    double *py;

    py = pb;
    // ! warning: incompatible pointer types assigning to 'double *' from 'int *' [-Wincompatible-pointer-types]
    printf("가리키는 변수의 형태가 다른데도 불구하고 포인터끼리 대입 연산을 하면: %lf\n", *py);
    // 118908090..(너무 길어서 중략)..651195948980502528.000000
    // -> 예상하지 못했던 결과

    // * 원인: 컴파일러는 pb에 저장된 값을 int형 변수의 주소로 생각하고, py에 저장된 값은 double형 변수의 주소로 생각한다.
    // * 이 상태에서 pb에 py을 대입하고 간접 참조 연산을 수행하면, 변수 b에 할당된 메모리 영역 이후의 할당되지 않은 영역까지 사용하게 된다.
    // * 즉 변수 b의 영역을 넘어 *pb가 사용하는 영역까지 하나의 double형 변수로 생각하고 그 안에 있는 값을 실수로 해석하게 되는 것이다.

    return 0;
}
