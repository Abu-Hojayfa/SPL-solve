#include <stdio.h>
#include <math.h>

int main()
{

  float c;
  scanf("%f", &c);

  printf("A = %g, ", ceilf(c));
  printf("B = %g, ", floorf(c));
  printf("C = %g\n", c);

  return 0;
}