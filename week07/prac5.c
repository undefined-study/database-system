#include <stdio.h>
#include <string.h>

// 배열
int main(void) {
    // 1. 4개의 변수를 하나씩 선언하는 경우
    int a, b, c, d;
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    int *pd = &d;

    // 2. 4개의 요소를 가진 배열을 선언하는 경우
    int ary[4];

    ary[0] = 10;
    ary[1] = 5;
    ary[2] = 3;

    printf("%d\n", ary[3]); // 값을 할당하지 않았으므로 쓰레기 값 출력
    // 첨자의 사용 범위를 벗어날 경우에는 warning만 표시하고 그대로 컴파일 및 실행이 됨. -> 버그 주의!
    // 배열 요소에 포인터 연산을 통해 접근하는데, 이렇게 첨자의 사용 범위를 벗어나게 되면
    // 배열이 아닌 메모리 영역에 접근하게 되므로 결과를 예측할 수 없다.
    printf("%d\n", ary[4]);

    // 배열 초기화
    int test_ary1[3] = {1, 2};
    printf("%d\n", test_ary1[2]); // 초기화되지 않은 부분은 0으로 채워짐.
    char test_ary2[3] = {'a', 'b'};
    printf("%c\n", test_ary2[2]); // 초기화되지 않은 부분은 빈 문자열로 채워짐.
    double test_ary3[3] = {0.1, 0.2};
    printf("%lf\n", test_ary3[2]); // 초기화되지 않은 부분은 0.0으로 채워짐.

    // char형 배열은 주로 문자열을 저장하는 용도로 사용된다.
    // 널 문자를 저장해야 하므로 문자열의 길이 + 1의 크기로 선언한다.
    char test_ary4[3] = "ab";
    printf("%s\n", test_ary4); // ab
    printf("널 문자: %c\n", test_ary4[2]);
    // 널 문자는 문자열의 끝을 표시하는 용도로 쓰인다.

    // 초기화 이후에 배열 요소의 값 바꾸기
    printf("%d\n", test_ary1[1]); // 2
    test_ary1[1] = 3;
    printf("%d\n", test_ary1[1]); // 3

    // 배열 요소의 개수를 직접 계산을 하여 사용하면,
    // 배열 크기가 변하더라도 배열 처리를 위한 반복문을 수정할 필요가 없어 편리하다.
    int count = sizeof(test_ary2) / sizeof(test_ary2[0]);
    printf("%d\n", count); // 3

    // ! 대입 연산자 왼쪽에는 배열명이 올 수 없다.
    // 배열명은 컴파일 과정에서 해당 배열이 할당된 메모리의 주소 값으로 바뀌게 되고,
    // 상수는 대입 연산자의 왼쪽에 올 수 없기 때문이다.
    // 즉 다음과 같이 쓰게 될 경우 컴파일 과정에서 에러가 발생한다.
    // test_ary4 = "hi";

    // 그렇다면 char형 배열에 새로운 문자열을 저장하려면 어떻게 해야 할까?

    // char형 배열에 새로운 문자열을 저장하려면 strcpy 함수를 사용한다.
    char test_ary5[10] = "cat";
    printf("%s\n", test_ary5); // cat
    printf("%u\n", sizeof(test_ary5)); // 100
    strcpy(test_ary5, "tiger");
    printf("%s\n", test_ary5); // tiger

    // 초기에 지정해 둔 배열 요소 개수보다 큰 문자열을 저장하게 된다면?
    // strcpy(test_ary5, "tigertigertiger");
    // ! zsh: trace trap
    // 저장할 공간이 부족하기 때문에 할당이 될 수 없음.

    // float a = 3.4;
    // float *pa = &a;
    // printf("%f\n", a);
    // int *pi;
    // pi = (int *)pa;

    // *pi = 10;
    // printf("pi: %d\n", *pi);
    // printf("pa: %d\n", *pa);
    // printf("%f\n", a);

    // printf("%p\n", &a);
    // printf("%p\n", pa);
    // printf("%p\n", pi);

    return 0;
}
