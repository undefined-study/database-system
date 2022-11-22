#include <stdio.h>

// 주소와 포인터의 크기를 확인해보자.
int main(void) {
    char c;
    int in;
    double db;

    char *pc = &c;
    int *pi = &in;
    double *pd = &db;

    printf("char형 변수의 주소의 크기: %u\n", sizeof(&c)); // 8
    printf("int형 변수의 주소의 크기: %u\n", sizeof(&in)); // 8
    printf("double형 변수의 주소의 크기: %u\n", sizeof(&db)); // 8

    printf("char형 변수를 가리키는 포인터의 크기: %u\n", sizeof(pc)); // 8
    printf("int형 변수를 가리키는 포인터의 크기: %u\n", sizeof(pi)); // 8
    printf("double형 변수를 가리키는 포인터의 크기: %u\n", sizeof(pd)); // 8

    printf("pc가 가리키는 char형 변수의 크기: %u\n", sizeof(*pc)); // 1
    printf("pi가 가리키는 int형 변수의 크기: %u\n", sizeof(*pi)); // 4
    printf("pd가 가리키는 double형 변수의 크기: %u\n", sizeof(*pd)); // 8

    return 0;
}
