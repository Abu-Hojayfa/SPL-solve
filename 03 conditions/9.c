#include <stdio.h>

int main()
{

  char chr;
  scanf("%c", &chr);

  if ((chr >= 97 && chr <= 122) || (chr >= 65 && chr <= 90))
    printf("Alphabet\n");

  else if (chr >= 48 && chr <= 57)
    printf("Digit\n");

  else
    printf("Special\n");

  return 0;
}