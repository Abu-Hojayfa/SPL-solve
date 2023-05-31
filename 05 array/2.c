#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, c, sum = 0;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &c);
    sum += c;
  }

  printf("%d", sum);

  return 0;
}