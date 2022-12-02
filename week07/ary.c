#include <stdio.h>
#include <string.h>

int main(void) {
    int ary[5] = {1, 2, 3, 4, 5};

    printf("%d\n", ary[4]); // 5

    printf("%d\n", ary[5]); // 1
    printf("%d\n", ary[499]); // 1196380752
    // ! warning: array index 499 is past the end of the array
    // ! (which contains 5 elements) [-Warray-bounds]

    int score[5] = {100, 200, 300, 400, 500};
    int count = sizeof(score) / sizeof(score[0]);

    printf("%d\n", count); // 5

    // 문자열 대입
    char test_char[20] = "hello, world!";
    printf("%s\n", test_char); // hello, world!
    // test_char = "hi"; // ! 식이 수정할 수 있는 lvalue여야 합니다.C/C++(137)
    strcpy(test_char, "hi");
    printf("%s\n", test_char); // hi

    return 0;
}
