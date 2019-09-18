#include <stdio.h>

int main(void)
{

  int X, A;

  scanf("%d",&X);
  
  for (A = 1; A <= X; A = A + 2)
  {
    printf("%d\n", A);
  }
      
  return 0;

}
