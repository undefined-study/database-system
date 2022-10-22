#include <stdio.h>

int main()
{
  int a = 2, b = 2;
  int prefix, postfix;

  prefix = ++a * 3;
  postfix = b++ * 3;

  printf("prefix: %d\n", prefix); // prefix: 9
  printf("postfix: %d", postfix); // postfix: 6
}