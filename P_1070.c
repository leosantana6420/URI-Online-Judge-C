#include <stdio.h>

int main(void)
{

  int X, A, VALOR;

  scanf("%d", &X);

  if (X % 2 != 0)
  {
    VALOR = X;
  }

  else
  {
    VALOR = X + 1;
  }
  
  A = 1;

  while (A <= 6)
  {
    printf("%d\n", VALOR);
    VALOR = VALOR + 2;
    A++;
  }

  return 0;

}
