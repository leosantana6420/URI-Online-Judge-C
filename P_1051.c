#include <stdio.h>

int main(void)
{
 
  float SALARIO;

  scanf("%f", &SALARIO);

  if (SALARIO <= 2000.00)
  {
    printf("Isento\n");
  }
  
  else if (SALARIO <= 3000.00)
  {
    printf("R$ %.2f\n", (SALARIO - 2000.00) * 0.08);
  }
  
  else if (SALARIO <= 4500.00)
  {
    printf("R$ %.2f\n", 1000.0 * 0.08 + (SALARIO - 3000.0) * 0.18);
  }
  
  else
  {
    printf("R$ %.2f\n", 1000.0 * 0.08 + 1500.0 * 0.18 + 
    (SALARIO - 4500.0) * 0.28);
  }
  
  return 0;

}
