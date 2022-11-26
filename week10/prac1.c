#include <stdio.h>

// 두 포인터가 서로의 값을 swap하도록 하는 함수를 만들어보자!
void swap_p(char **p1, char **p2);

int main(void) {

    char *pa = "hello";
    char *pb = "world";

    // 매개변수 포인터가 넘겨받을 주소 값을 인자로 전달한다.
    swap_p(&pa, &pb);
    printf("%s, %s\n", pa, pb);

    return 0;
}

void swap_p(char **p1, char **p2) {
    char *ptemp = *p1;
    *p1 = *p2;
    *p2 = ptemp;
};
