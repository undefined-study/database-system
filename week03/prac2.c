#include <stdio.h>

int main()
{
  // 증감 연산자 예제
  int a = 2, b = 2;
  int prefix, postfix;

  prefix = ++a * 3;
  postfix = b++ * 3;

  printf("prefix: %d\n", prefix); // prefix: 9
  printf("postfix: %d\n", postfix); // postfix: 6

  // 복합대입 연산자 예제
  int c = 5;
  int d = 2;

  d *= c + 10;

  printf("d의 값: %d\n", d); // d의 값: 30

  // 비트 이동 연산자 예제
  int e = 80;
  int f;
  int g;
  f = e << 1;
  g = e << 3;

  printf("e의 값: %d\n", e); // e의 값은 그대로 80
  printf("f의 값: %d\n", f); // f의 값: 160
  printf("g의 값: %d\n", g); // g의 값: 640

  int h = 80;
  int i;
  int j;
  i = h >> 1;
  j = h >> 3;

  printf("h의 값: %d\n", h); // h의 값은 그대로 80
  printf("i의 값: %d\n", i); // i의 값: 40
  printf("j의 값: %d\n", j); // j의 값: 10
}