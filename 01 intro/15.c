#include <stdio.h>

int main()
{
  float number;
  scanf("%f", &number);

  // (a) Print the number right justified within 10 columns
  printf("Val:%10.3f\n", number);

  // (b) Print the number right justified to 2 columns
  printf("Val:%2f\n", number);

  // (c) Print the number rounded to two decimal places
  printf("Val:%.2f\n", number);

  // (d) Print the number rounded to an integer (without conversion)
  printf("Val:%d\n", (int)number);

  // (e) Print the number in exponential notation
  printf("Val:%e\n", number);

  return 0;
}
