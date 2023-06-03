#include<stdio.h>
#include<stdlib.h>

#include <time.h>

int main (){
  clock_t begin = clock();


  int a ;
  scanf("%d", &a);

  int arr [a];

  for (int i = 0; i < a; i++)
  {
    scanf("%s", &arr[i]);
  }
  
  for (int i = 0; i < a; i++)
  {
    if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == a || arr[i] == a || arr[i] == a)
    {
      /* code */
    }
    
  }
  


  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\n%g sec\n", time_spent);
  return 0;
}