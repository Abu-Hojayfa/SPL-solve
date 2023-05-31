#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    for (int j = a - i; j > 1; j--)
    {
      printf("_");
    }

    for (int k = 0; k <= i; k++)
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}