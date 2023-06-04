#include <stdio.h>

int main()
{
  int a, flag = 1;
  scanf("%d", &a);

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

  return 0;
}