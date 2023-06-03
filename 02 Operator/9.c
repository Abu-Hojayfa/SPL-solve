#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);

  float x, y, z;

  x = a - b / 3 + c * 2 - 1;
  y = a - (b / (3 + c) * 2) - 1;
  z = a - ((b / 3) + c * 2) - 1;

  printf("X = %g\nY = %g\nZ = %g", x, y, z);

  return 0;
}