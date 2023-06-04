#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b;
  scanf("%d%d", &a, &b);

  if (a > b)
    printf("%d is grater than %d", a, b);
  else if (a < b)
    printf("%d is less than %d", a, b);
  else
    printf("%d is equal to %d", a, b);

  return 0;
}