#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a;
  scanf("%d", &a);

  for (int i = a; i > 0; i--)
  {
    for (int j = 0; j <= a - i; j++)
    {
      printf("%d", a-j);
    }
    printf("\n");
  }
  return 0;
}