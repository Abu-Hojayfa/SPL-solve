#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, arr[a];
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = a-1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}