#include <stdio.h>

int main()
{
  unsigned int a = 4294967295;
  unsigned long  int b = 4294967295;
  unsigned long long int c = 18446744073709551615;
  unsigned short d = 65535;

  printf("The unsigned int value: %u\n", a);
  printf("The unsigned long int value: %lu\n", b);
  printf("The unsigned long long int value: %llu\n", c);
  printf("The unsigned short value: %hu\n", d);


  unsigned int as = 0;
  unsigned long  int bs = 0;
  unsigned long long int cs = 0;
  unsigned short ds = 0;

  printf("The unsigned long int value: %u\n", as);
  printf("The unsigned long int value: %lu\n", bs);
  printf("The unsigned long long int value: %llu\n", cs);
  printf("The unsigned short value: %hu\n", ds);

  return 0;
}