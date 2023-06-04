#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b, flag = 3;
  scanf("%d", &a);

  if (flag == 3)
  {
    scanf("%d", &b);

    if (a == b)
      printf("Right, Player-2 wins!\n");
    else
      printf("Wrong, %d Chance(s) Left!\n", flag -= 1);
  }

  if (flag == 2)
  {
    scanf("%d", &b);

    if (a == b)
      printf("Right, Player-2 wins!\n");
    else
      printf("Wrong, %d Chance(s) Left!\n", flag -= 1);
  }

  if (flag == 1)
  {
    scanf("%d", &b);

    if (a == b)
      printf("Right, Player-2 wins!\n");
    else
      printf("Wrong, 0 Chance(s) Left!\nPlayer-1 wins!");
  }

  return 0;
}