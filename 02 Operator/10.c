#include <stdio.h>
#include <stdbool.h>

int main()
{

  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  printf("a) %d\n", (a + b) <= 80);
  printf("b) %d\n", !(a + b));
  printf("c) %d", c != 0);

  return 0;
}