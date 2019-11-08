#include <stdio.h>

int main(void)
{
  
  int I, QUANTIDADE, QUANTIDADE_PRODUTO, CODIGO;
  float COMPRA;

  scanf("%d", &QUANTIDADE);

  for (I = 1; I <= QUANTIDADE; I++)
  {
    scanf("%d %d", &CODIGO, &QUANTIDADE_PRODUTO);
    
    switch (CODIGO)
    {
      case (1001):
      COMPRA += (1.50 * QUANTIDADE_PRODUTO);
      break;

      case (1002):
      COMPRA += (2.50 * QUANTIDADE_PRODUTO);
      break;

      case (1003):
      COMPRA += (3.50 * QUANTIDADE_PRODUTO);
      break;

      case (1004):
      COMPRA += (4.50 * QUANTIDADE_PRODUTO);
      break;

      case (1005):
      COMPRA += (5.50 * QUANTIDADE_PRODUTO);
      break;
    }
  }

  printf("%.2f\n", COMPRA);

  return 0;

}
