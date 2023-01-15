#include <stdio.h>

int main(void) {
    int a = 10;

    int *pa = &a;
    double *pb;

    pb = pa;
    // ! warning: incompatible pointer types
    // ! assigning to 'double *' from 'int *' [-Wincompatible-pointer-types]
    printf("%d\n", *pa); // 10
    printf("%lf\n", *pb); // 0.000000

    // * 컴파일러는 `pb`에 저장된 값을 `double`형 변수의 주소로 생각하므로,
    // * 위와 같이 `pb`에 `pa`를 대입하고 간접 참조 연산을 수행하면
    // * 변수 `a`에 할당된 영역 이후의 할당되지 않은 영역까지 사용하게 되어버린다.

    printf("int형 변수의 크기: %lu\n", sizeof(int)); // 4
    printf("double형 변수의 크기: %lu\n", sizeof(double)); // 8

    return 0;
}