#include <stdio.h>

int main()
{
  int a, flag = 1;
  scanf("%d", &a);

  if (a > 0)
  {
    while (a > 1)
    {
      if (a % 2 != 0)
      {
        flag = 0;
        break;
      }
      a /= 2;
    }
    if (flag == 1)
      printf("Yes");
    else
      printf("No");
  }
  else if (a == 0)

    printf("Zero is not a valid input");
  else
    printf("Negative input is not valid");

  return 0;
}