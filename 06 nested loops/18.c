#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    if (i == a / 2)
    {
      for (int j = 0; j < a; j++)
      {
        printf("H ");
      }
      printf("\n");
    }
    else
    {
      for (int j = 1; j <= a; j++)
      {
        if (a - j == 0 || j == 1)
          printf("H ");
        else
          printf("  "); // 2 ta space lagbe casue middle line e "H and akta empty space"
      }
      printf("\n");
    }
  }
  return 0;
}