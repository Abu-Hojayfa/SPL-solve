#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  scanf("%d", &a);

  float arr[a], sum = 0;

  for (int i = 0; i < a; i++)
  {
    scanf("%f", &arr[i]);
  }

  for (int i = 0; i < a; i++)
  {
    sum += arr[i];
  }

  printf("%g", sum / a);

  return 0;
}