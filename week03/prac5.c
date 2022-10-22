#include <stdio.h>

int main()
{
  int res;

  res = sizeof(short) > sizeof(long);

  printf(res == 1 ? "short" : "long"); // long
}