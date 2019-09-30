#include <stdio.h>

int main(void)
{
  
  int N, X = 2, RESULTADO;

  scanf("%d",&N);
  
  while (X <= N)
  {
    RESULTADO = X * X;
    printf("%d^2 = %d\n", X, RESULTADO);
    X = X + 2;
  }  
   
  return 0;

}
