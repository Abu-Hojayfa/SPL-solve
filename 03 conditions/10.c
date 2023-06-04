#include <stdio.h>
#include <stdlib.h>

int main()
{

  float a, b;
  char chr;
  scanf("%f %c%f", &a, &chr, &b);

  if (chr == '*')
    printf("Multiplication: %g", a * b);

  else if (chr == '+')
    printf("Addition: %g", a + b);

  else if (chr == '-')
    printf("Subtraction: %g", a - b);
    
  else
  {
    if (b == 0)
      printf("Division: Zero as divisor is not valid!");
    else
      printf("Division: %g", a / b);
  }

  return 0;
}