#include <stdio.h>

// p.99 연습 문제 - 태희의 평점 평균 구하고 res 값 출력하기
int main()
{
  int kor = 3, eng = 5, mat = 4;
  int credits;
  int res;
  double kscore = 3.8, escore = 4.4, mscore = 3.9;
  double grade;

  credits = kor + eng + mat;
  grade = (kor * kscore + eng * escore + mat * mscore) / credits;
  printf("%.1lf\n", grade); // 4.1
  res = (credits >= 10) && (grade >= 4.0);

  printf("%d\n", res); // 1

  return 0;
}