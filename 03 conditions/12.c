#include <stdio.h>
#include <stdlib.h>

int main()
{

  float a, b;
  int c;
  scanf("%f%f %d", &a, &b, &c);

  if (c == 1)
    printf("Addition: %g", a + b); 

  else if (c == 2)
    printf("Subtraction: %g", a - b);

  else if (c == 3)
    printf("Multiplication: %g", a * b);
    
  else
    printf("Quotient: %d", (int)(a / b));

  return 0;
}