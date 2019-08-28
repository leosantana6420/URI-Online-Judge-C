#include <stdio.h>

int main(void)
{

  int COD_PECA1, NUM_PECA1;
  int COD_PECA2, NUM_PECA2;
  double VALOR_PECA1, VALOR_PECA2, TOTAL_PECA1, TOTAL_PECA2, TOTAL_FINAL;

  scanf("%d %d %lf", &NUM_PECA1, &NUM_PECA1, &VALOR_PECA1);
  scanf("%d %d %lf", &NUM_PECA2, &NUM_PECA2, &VALOR_PECA2);

  TOTAL_PECA1 = (NUM_PECA1 * VALOR_PECA1);
  TOTAL_PECA2 = (NUM_PECA2 * VALOR_PECA2);

  TOTAL_FINAL = (TOTAL_PECA1 + TOTAL_PECA2);

  printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL_FINAL);

  return 0;

}
