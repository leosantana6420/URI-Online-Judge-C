#include <stdio.h>

int main(void)
{
  
  int N, MULTI, RESULTADO;
  
  scanf("%d", &N); 
  
  for (MULTI = 1; MULTI <= 10; MULTI++)
  {
    RESULTADO = MULTI * N;
    printf("%d x %d = %d\n", MULTI, N, RESULTADO);
  }
  
  return 0;

}
