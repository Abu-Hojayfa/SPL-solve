#include <stdio.h>
#include <stdlib.h>

int main()
{

  /* for solving this problem, but in this case we have to use array.. so it is technically wrong ngl
    int a, c, sum = 0;
    scanf("%d", &a);


    for (int i = 0; i < a; i++)
    {
      scanf("%d", &c);
      sum += c;
    }

    printf("%d", sum);*/

  int a;
  scanf("%d", &a);
  
  int arr[a], sum = 0;

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < a; i++)
  {
    sum += arr[i];
  }

  printf("%d", sum);

  return 0;
}