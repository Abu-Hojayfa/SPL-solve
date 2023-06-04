#include <stdio.h>
#include <stdlib.h>

int main()
{

  float a, b;
  scanf("%f%f", &a, &b);

  printf("Addition: %g\n", a + b);
  printf("Subtraction: %g\n", a - b);
  printf("Multiplication: %g\n", a * b);
  printf("Quotient: %d\n", (int)(a / b));    
  printf("Reminder: %i\n", (int)a % (int)b); 

  return 0;
}