#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b, c, d;
  scanf("%d%d", &a, &b);
  c = a, d = b;

  printf("Incremented Value: %d\n", a += b);
  printf("Decremented Value: %d", c -= d);

  return 0;
}