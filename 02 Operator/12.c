#include <stdio.h>
#include <math.h>

int main()
{

  float a, b, c, root1, root2;
  scanf("%f%f%f", &a, &b, &c);

  root1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  root2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

  if ((b * b - 4 * a * c) >= 0)
    printf("%g  %g", root1, root2);
  else
    printf("Imaginary");

  return 0;
}