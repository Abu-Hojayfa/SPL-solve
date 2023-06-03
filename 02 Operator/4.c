#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b;
  scanf("%d", &a);
  b = a;
  printf("X++: %d\n", b++);
  b = a;
  printf("++X: %d\n", ++b);
  b = a;
  printf("X--: %d\n", b--);
  b = a;
  printf("--X: %d\n", --b);

  return 0;
}