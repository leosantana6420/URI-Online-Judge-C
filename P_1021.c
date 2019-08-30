#include <stdio.h>

int main(void)
{

  int N_100, N_50, N_20, N_10, N_5, N_2;
  int M_1, M_50, M_25, M_10, M_05, M_01;
  double VALOR;

  scanf("%lf", &VALOR);
  
  int NOTAS = VALOR;
  int MOEDAS = ((VALOR - NOTAS) * 100);

  N_100 = (NOTAS / 100);
  NOTAS = (NOTAS % 100);
  
  N_50 = (NOTAS / 50);
  NOTAS = (NOTAS % 50);
  
  N_20 = (NOTAS / 20);
  NOTAS = (NOTAS % 20);

  N_10 = (NOTAS / 10);
  NOTAS = (NOTAS % 10);

  N_5 = (NOTAS / 5);
  NOTAS = (NOTAS % 5);
  
  N_2 = (NOTAS / 2);
  NOTAS = (NOTAS % 2);

  M_1 = (NOTAS / 1);
  NOTAS = (NOTAS % 1);

  M_50 = (MOEDAS / 50);
  MOEDAS = (MOEDAS % 50);

  M_25 = (MOEDAS / 25);
  MOEDAS = (MOEDAS % 25);

  M_10 = (MOEDAS / 10);
  MOEDAS = (MOEDAS % 10);

  M_05 = (MOEDAS / 5);
  MOEDAS = (MOEDAS % 5);
  
  M_01 = MOEDAS / 1;

  printf("NOTAS:\n");

  printf("%d nota(s) de R$ 100.00\n", N_100);
  printf("%d nota(s) de R$ 50.00\n", N_50);
  printf("%d nota(s) de R$ 20.00\n", N_20);
  printf("%d nota(s) de R$ 10.00\n", N_10);
  printf("%d nota(s) de R$ 5.00\n", N_5);
  printf("%d nota(s) de R$ 2.00\n", N_2);

  printf("MOEDAS:\n");

  printf("%d moeda(s) de R$ 1.00\n", M_1);
  printf("%d moeda(s) de R$ 0.50\n", M_50);
  printf("%d moeda(s) de R$ 0.25\n", M_25);
  printf("%d moeda(s) de R$ 0.10\n", M_10);
  printf("%d moeda(s) de R$ 0.05\n", M_05);
  printf("%d moeda(s) de R$ 0.01\n", M_01);

  return 0;

}
