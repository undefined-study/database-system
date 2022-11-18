#include <stdio.h>

int main(void) {
  int a = 1;

  do {
    a *= 2;
  }
  while (a < 10);

  // 제어 변수(반복 횟수 세는 변수)를 초기식 안에서 바로 선언하는 경우
  // (타입 명시하지 않으면 에러가 발생한다.)
  for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
  }

  // 제어 변수(반복 횟수 세는 변수)를 반복문 이전에 미리 선언하는 경우
  int i;
  for (i = 0; i < 5; i++) {
    printf("%d\n", i);
  }

  // 중첩 반복문
  int j, k;
  for (j = 0; j < 3; j++) {
    for (k = 0; k < 5; k++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}