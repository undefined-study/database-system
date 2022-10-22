#include <stdio.h>

int main()
{
  int hour, min, sec;
  double time = 3.76;

  hour = (int)time;
  time = time - (double)hour;
  time *= 60;
  min = (int)time;
  time = time - (double)min;
  time *= 60;
  sec = (int)time;

  printf("3.76시간은 %d시간 %d분 %d초입니다.\n", hour, min, sec);
  // 3.76시간은 3시간 45분 35초입니다.
}