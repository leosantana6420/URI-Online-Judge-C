#include <stdio.h>

int main(void)
{

  int NUMERO, HORAS;
  float SALARIO_HORA, SALARIO;

  scanf("%d %d %f", &NUMERO, &HORAS, &SALARIO_HORA);
  SALARIO = (HORAS * SALARIO_HORA);

  printf("NUMBER = %d\n", NUMERO);
  printf("SALARY = U$ %.2f\n", SALARIO);

  return 0;

}
