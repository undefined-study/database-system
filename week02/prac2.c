#include <stdio.h>

int main(void)
{
  char a;
  short b;
  int c;
  long d;
  long long e;

  printf("char의 크기: %lu 바이트\n", sizeof(a)); // 1 바이트
  printf("short의 크기: %lu 바이트\n", sizeof(b)); // 2 바이트
  printf("int의 크기: %lu 바이트\n", sizeof(c)); // 4 바이트
  printf("long의 크기: %lu 바이트\n", sizeof(d)); // 8 바이트
  printf("long long의 크기: %lu 바이트\n", sizeof(e)); // 8 바이트

  // p.60 참고
  // 두 정수 4294967295, -1이 메모리에 저장되는 형태는 같지만,
  // 변환 문자에 따라 데이터가 다르게 해석된다.
  unsigned int test = 4294967295;
  printf("%d\n", test); // -1
  test = -1;
  printf("%u\n", test); // 4294967295
  printf("%zu\n", sizeof(test)); // 4

  signed int test2 = 4294967295;
  printf("%d\n", test2); // -1
  printf("%zu\n", sizeof(test2)); // 4
  // warning: implicit conversion from 'long' to 'int' changes value from 4294967295 to -1

  unsigned int test3 = 2147483647;
  printf("%d\n", test3); // 2147483647

  long double f;
  printf("long double의 크기: %lu 바이트\n", sizeof(f)); // 8 바이트
}