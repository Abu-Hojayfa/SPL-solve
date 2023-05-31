#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b = 1;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    for (int j = a - i; j > 1; j--)
    {
      printf("_");
    }
    for (int k = 0; k < b; k++)
    {
      printf("*");
    }
    b += 2;
    printf("\n");
  }

  return 0;
}