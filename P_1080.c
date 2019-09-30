#include <stdio.h>

int main(void)
{
  
  int X = 0, A, VALOR, POSICAO, MAIOR = 0;
  
  for (A = 1; A <= 100; A++)
  {
    scanf("%d", &VALOR);
    
    X++;
    
    if (VALOR > MAIOR)
    {
      POSICAO = X;
      MAIOR = VALOR;
    }
  }
  
  printf("%d\n", MAIOR);
  printf("%d\n", POSICAO);

  return 0;

}
