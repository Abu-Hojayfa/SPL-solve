#include<stdio.h>
#include<stdlib.h>

#include <time.h>

int main (){
  clock_t begin = clock();


  int a;
  float b;
  char c;

  scanf("%d%f %c", &a, &b, &c);

  printf("The integer value: %d\n", a);
  printf("The floating point value: %f\n", b);
  printf("The character value: %c\n", c);


  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\n%g sec\n", time_spent);
  return 0;
}