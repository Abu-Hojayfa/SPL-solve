#include <stdio.h>

int a = 10;

int main()
{

  printf("Global: %d\n", a);

  int a = 20;
  printf("Local: %d\n", a);

  // for calling the global variable
  {
    extern int a;
    printf("Global: %d\n", a);
  }

  return 0;
}