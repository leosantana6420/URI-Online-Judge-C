#include <stdio.h>

int main(void)
{

  char NOME [20];
  double SALARIO_FIXO, TOTAL_VENDAS, COMISSAO, TOTAL;

  scanf("%s %lf %lf", NOME, &SALARIO_FIXO, &TOTAL_VENDAS);
  TOTAL = (SALARIO_FIXO + TOTAL_VENDAS * 0.15);

  printf("TOTAL = R$ %.2f\n", TOTAL);

  return 0;

}
