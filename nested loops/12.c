#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int main()
{
  clock_t begin = clock();

  int a, b = 1;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    if ((a / 2) + 1 >= i)
    {
      for (int j = a/2 - i; j > 0; j--)
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

    else
    {
      
    }
    
  }

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\n%g sec\n", time_spent);
  return 0;
}