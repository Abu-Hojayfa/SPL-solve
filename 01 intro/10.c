#include <stdio.h>

int main()
{
  long int a = 2147483647;
  long long int b = 9223372036854775807;
  long double c = 1.1E+4932;
  long double cM = 3.4E-4932;
  int d = 32767;

  printf("The long int value: %li\n", a);
  printf("The long long value: %lli\n", b);
  printf("The long double value: %Lf\n", c); // When you run this code, the output will vary depending on the platform. It may print the value as inf (infinity) or indicate an overflow or some other kind of error, depending on the capabilities of the long double type on your system.
  printf("The short value: %i\n", d);

  printf("The long int value: %li\n", -a);
  printf("The long long value: %lli\n", -b);
  printf("The long double value: %Lf\n", cM); // same issue
  printf("The short value: %i\n", -d);

  return 0;
}