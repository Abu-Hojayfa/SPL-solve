#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, count = 0;
  scanf("%d", &a);

  char arr[a];

  for (int i = 0; i < a; i++)
  {
    scanf("%c", &arr[i]);
  }

  for (int i = 0; i < a; i++)
  {
    if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
      count++;
  }

  printf("count: %d", count);

  return 0;
}