#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a;
  scanf("%d", &a);
  int arr1[a], arr2[a];

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr1[i]);
  }

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr2[i]);
  }

  for (int i = 0; i < a; i++)
  {
    printf("%d ", arr1[i] + arr2[i]);
  }

  return 0;
}