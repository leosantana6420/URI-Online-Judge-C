#include <stdio.h>

int main(void)
{

  int N, N_100, N_50, N_20, N_10, N_5, N_2, N_1, RESTO;

  scanf("%d", &N);

  N_100 = (N / 100);
  RESTO = (N % 100);
  
  N_50 = (RESTO / 50);
  RESTO = (RESTO % 50);
  
  N_20 = (RESTO / 20);
  RESTO = (RESTO % 20);

  N_10 = (RESTO / 10);
  RESTO = (RESTO % 10);

  N_5 = (RESTO / 5);
  RESTO = (RESTO % 5);
  
  N_2 = (RESTO / 2);
  RESTO = (RESTO % 2);

  N_1 = (RESTO / 1);

  printf("%d\n", N);
  printf("%d nota(s) de R$ 100,00\n", N_100);
  printf("%d nota(s) de R$ 50,00\n", N_50);
  printf("%d nota(s) de R$ 20,00\n", N_20);
  printf("%d nota(s) de R$ 10,00\n", N_10);
  printf("%d nota(s) de R$ 5,00\n", N_5);
  printf("%d nota(s) de R$ 2,00\n", N_2);
  printf("%d nota(s) de R$ 1,00\n", N_1);

  return 0;

}
