#include <stdio.h>

int main(void) {
    int test_ary1[4] = {0};
    // 컴파일러는 첫 번째 배열 요소의 주소를 쉽게 사용하도록,
    // 컴파일 과정에서 배열명을 첫 번째 배열 요소의 주소로 변경한다.
    printf("%d\n", test_ary1); // 1797321256
    // 주소 + 정수 연산하게 될 경우
    printf("%d\n", test_ary1 + 1); // 1797321256 + (더한 정수 * int형의 크기) = 1797321260

    int test_ary2[4];
    int cnt = sizeof(test_ary2) / sizeof(test_ary2[0]);
    for (int i = 0; i < cnt; i++) {
        printf("%d번째 요소의 값을 입력하세요: ", i);
        scanf("%d", test_ary2 + i);
    }

    printf("완성된 배열\n");
    for (int i = 0; i < cnt; i++) {
        printf("%-5d", test_ary2[i]);
    }

    // 포인터를 배열명처럼 사용하기
    int *pi = test_ary2;
    printf("%d, %d\n", pi, test_ary2); // 둘 다 test_ary2 배열의 첫 번째 요소의 주소를 출력

    for (int i = 0; i < cnt; i++) {
        printf("%5d", pi[i]);
    }
    printf("\n");

    printf("1 더하기 전 *pi: %d\n", *pi); // test_ary2의 첫 번째 요소를 출력한다.
    // 포인터는 값을 바꿀 수 있으나, 배열명은 상수이므로 값을 바꿀 수 없다.
    printf("%d\n", pi + 1);
    printf("%d\n", test_ary2 + 1);

    pi += 1;
    // test_ary2 += 1; // ! 식이 수정할 수 있는 lvalue여야 합니다.C/C++(137)
    printf("1 더한 후 *pi: %d\n", *pi); // test_ary2의 두 번째 요소를 출력한다.

    return 0;
}
