#include <stdio.h>

int main(void) {
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char형 변수 크기: %lu\n", sizeof(ch));
    printf("int형 변수 크기: %lu\n", sizeof(in));
    printf("double형 변수 크기: %lu\n", sizeof(db));
    /*
     * char형 변수 크기: 1
     * int형 변수 크기: 4
     * double형 변수 크기: 8
    */

    printf("char형 변수의 주소 크기: %lu\n", sizeof(&ch));
    printf("int형 변수의 주소 크기: %lu\n", sizeof(&in));
    printf("double형 변수의 주소 크기: %lu\n", sizeof(&db));
    /*
     * char형 변수의 주소 크기: 8
     * int형 변수의 주소 크기: 8
     * double형 변수의 주소 크기: 8
    */

    printf("char * 포인터의 크기: %lu\n", sizeof(pc));
    printf("int * 포인터의 크기: %lu\n", sizeof(pi));
    printf("double * 포인터의 크기: %lu\n", sizeof(pd));

    /*
     * char * 포인터의 크기: 8
     * int * 포인터의 크기: 8
     * double * 포인터의 크기: 8
    */

    return 0;
}
