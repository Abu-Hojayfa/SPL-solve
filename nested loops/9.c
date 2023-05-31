#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  scanf("%d", &a);

  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= a; j++)
    {
      if (i % 2 != 0)
      {
        printf("%d", j % 2);
      }
      else
      {
        printf("%d", (j + 1) % 2);
      }
    }
    printf("\n");
  }
  return 0;
}