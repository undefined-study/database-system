#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("%lf\n", 3.5); // 3.500000
  printf("%.2lf\n", 3.5); // 3.50
  printf("%.2lf\n", 2.166); // 2.17

  // 세 가지 진법의 정수 상수
  printf("%d\n", 9); // 9
  printf("%d\n", 011); // 9
  printf("%d\n", 0x9); // 9

  // 8진수 또는 16진수로 출력하기
  printf("%d\n", 12); // 12
  printf("%o\n", 12); // 14
  printf("%x\n", 12); // c
  printf("%X\n", 12); // C

  // 지수 형태로 출력하기
  printf("%le\n", 0.0000314); // 3.140000e-05
  printf("%.2le\n", 0.0000314); // 3.14e-05

  const int test = pow(2.0, 31.0) - 1;
  // sizeof 연산자
  printf("4.153 = %lu byte \n", sizeof(4.153)); // 8 byte
	printf("kim = %lu byte \n", sizeof("kim")); // 4 byte
	printf("9 = %lu byte \n", sizeof(9)); // 4 byte
	printf("1 = %lu byte \n", sizeof(1)); // 4 byte
	printf("0 = %lu byte \n", sizeof(0)); // 4 byte
	printf("4294967295 = %lu byte \n", sizeof(4294967295)); // 8 byte
	printf("4294967296 = %lu byte \n", sizeof(4294967296)); // 8 byte
	printf("%d = %lu byte \n", test, sizeof(test)); // 2147483647 = 4 byte
}