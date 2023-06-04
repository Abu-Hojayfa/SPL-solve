#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b, c, x;
  scanf("%d%d%d", &a, &b, &c);

  x = a + b + c;

  if (a != 180 && b != 180 && c != 180 && x == 180 )
    printf("Yes");
  else
    printf("No");

  return 0;
}