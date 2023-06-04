#include <stdio.h>
#include <math.h>

#define PI 3.141592654

int main()
{

  float a, angel, result;
  scanf("%f", &a);

  angel = (PI * a) / 180;

  result = 2 * pow(cos(angel), 2) - (sqrt(3) * sin(sin(angel))) + log10(angel / 2);

  printf("%f", result);

  return 0;
}