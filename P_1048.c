#include <stdio.h>

int main(void)
{

  int VALOR_REAJUSTE;
  double SALARIO, REAJUSTE, SALARIO_FINAL;

  scanf("%lf", &SALARIO);

  if (SALARIO == 0 || SALARIO <= 400.00){
    REAJUSTE = (SALARIO * 0.15);
    SALARIO_FINAL = (SALARIO + REAJUSTE);
    VALOR_REAJUSTE = 15;
  }

  else if (SALARIO == 400.01 || SALARIO <= 800.00)
  {
    REAJUSTE = (SALARIO * 0.12);
    SALARIO_FINAL = (SALARIO + REAJUSTE);
    VALOR_REAJUSTE = 12;
  }

  else if (SALARIO == 800.01 || SALARIO <= 1200.00)
  {
    REAJUSTE = (SALARIO * 0.10);
    SALARIO_FINAL = (SALARIO + REAJUSTE);
    VALOR_REAJUSTE = 10;
  }

  else if (SALARIO == 1200.01 || SALARIO <= 2000.00)
  {
    REAJUSTE = (SALARIO * 0.07);
    SALARIO_FINAL = (SALARIO + REAJUSTE);
    VALOR_REAJUSTE = 7;
  }

  else if (SALARIO > 2000.00)
  {
    REAJUSTE = (SALARIO * 0.04);
    SALARIO_FINAL = (SALARIO + REAJUSTE);
    VALOR_REAJUSTE = 4;
  }

  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", SALARIO_FINAL, REAJUSTE, VALOR_REAJUSTE);
  
  return 0;

}
