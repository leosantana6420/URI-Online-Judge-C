#include <stdio.h>

int main(void)
{

  int I, X, Y, MAIOR = 0, MENOR = 0, SOMA = 0;

  scanf("%d %d", &X, &Y);

  if (X >= Y)
  {
    MAIOR = X;
    MENOR = Y;
  }

  else
  {
    MAIOR = Y;
    MENOR = X;
  }

  for (I = MENOR; I <= MAIOR; I++)
  {
    if (I % 13 != 0)
    {
      SOMA += I;
    }

    else
    {
      ;
    }
  }

  printf("%d\n", SOMA);

  return 0;

}
