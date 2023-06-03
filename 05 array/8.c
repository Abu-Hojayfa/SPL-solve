#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, max = 0, indexMax = 0, min = 0, indexMin = 0;
  scanf("%d", &a);

  int arr[a];

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
    if (max <= arr[i])
    {
      max = arr[i];
      indexMax = i;
    }
    if (min >= arr[i])
    {
      min = arr[i];
      indexMin = i;
    }
  }

  printf("Max: %d, Index: %d\n", max, indexMax);
  printf("Min: %d, Index: %d\n", min, indexMin);

  return 0;
}