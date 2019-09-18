#include <stdio.h>

int main(void)
{
  
  int A, VALOR, PARES=0, IMPARES=0, POSITIVOS=0, NEGATIVOS=0;
  
  for (A = 1; A <= 5; A++)
  {
    scanf("%d", &VALOR);

    if (VALOR % 2 == 0)
    {
      PARES++;
    }
    
    if (VALOR % 2 == 1 || VALOR % 2 == -1)
    {
      IMPARES++;
    }
    
    if (VALOR > 0)
    {
      POSITIVOS++;
    }
    
    if (VALOR < 0)
    {
      NEGATIVOS++;
    }
  }
  
  printf("%d valor(es) par(es)\n", PARES);
  printf("%d valor(es) impar(es)\n", IMPARES);
  printf("%d valor(es) positivo(s)\n", POSITIVOS);
  printf("%d valor(es) negativo(s)\n", NEGATIVOS);
  
  return 0;

}
