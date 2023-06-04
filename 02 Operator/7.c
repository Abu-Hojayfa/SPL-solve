#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a;
  float b;
  scanf("%d%f", &a, &b);

  int f = b;
  float i = a;

  printf("Assignment: %f assigned to an int produces %d\n", b, f);
  printf("Assignment: %d assigned to an int produces %f\n", a, i);
  printf("Type Casting: (float) %d produces %f\n", a, (float)a);
  printf("Type Casting: (float) %f produces %d\n", b, (int)b);

  return 0;
}