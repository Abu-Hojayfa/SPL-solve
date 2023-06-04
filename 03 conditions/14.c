#include <stdio.h>

int main()
{

  float a, b;
  int c, d;
  scanf("%f%f%d", &a, &b, &c);

  if (c == 1)
    printf("Addition: %g", a + b);

  else if (c == 2)
    printf("Subtraction: %g", a - b);

  else if (c == 3)
    printf("Multiplication: %g", a * b);

  else
  {
    if (b == 0)
      printf("Error: Zero as divisor is not valid!");
    else
    {
      scanf("%d", &d);
      if (d == 1)
        printf("Quotient: %d", (int)(a / b));
      else
        printf("Reminder: %d\n", (int)a % (int)b);
    }
  }

  return 0;
}