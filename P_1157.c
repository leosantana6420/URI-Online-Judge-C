#include <stdio.h>

int main(void)
{
  
  int N, I;
  
  scanf("%d", &N);
  
  for (I = 1; I <= N; I++)
  {
    if (N % I == 0)
    {
      printf("%d\n", I);
    }

    else
    {
      ;
    }
  }

  return 0;

}
