#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a;
  scanf("%d", &a);

  int arr[a];

  for (int i = 0; i < a; i++)
  {
    scanf("%s", &arr[i]);
  }

  for (int i = 0; i < a; i++)
  {
    if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == a || arr[i] == a || arr[i] == a)
    {
      /* code */
    }
  }

  return 0;
}