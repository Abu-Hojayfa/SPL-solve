#include <stdio.h>
#include <stdbool.h>

int main()
{

  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  printf("1) %d\n", ((a + b) <= 80 && c >= 0)); // ans ques e  vul :)

  printf("2) %d\n", ((a - b) == 0 || c != 0)); // ans ques e  vul :)

  printf("3) %d\n", (a != b || !(b < c) && c > 0));

  printf("4) %d", ((a != b || !(b < c)) && c > 0));

  return 0;
}