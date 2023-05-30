#include<stdio.h>
#include<stdlib.h>

#include <time.h>

int main (){
  clock_t begin = clock();


  int  a ;
  scanf("%d",&a);

  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < a-1; j++)
    {
      printf("_");
    }
    printf("\n");
  }
  

  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("%g sec\n", time_spent);
  return 0;
}