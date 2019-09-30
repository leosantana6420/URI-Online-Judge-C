#include <stdio.h>

int main(void)
{

  int N, QUANTIA;
  int X = 1;
  float QUANTIA_C = 0, QUANTIA_R = 0, QUANTIA_S = 0, TOTAL_COBAIAS;
  float PERCENT_C, PERCENT_R, PERCENT_S;
  char ANIMAL;

  scanf("%d", &N);

  while (X <= N)
  {
    scanf("%d %c", &QUANTIA, &ANIMAL);

    if (ANIMAL == 'C')
    {
      QUANTIA_C = QUANTIA_C + QUANTIA;
    }

    else if (ANIMAL == 'R')
    {
      QUANTIA_R = QUANTIA_R + QUANTIA;
    }

    else if (ANIMAL == 'S')
    {
      QUANTIA_S = QUANTIA_S + QUANTIA;
    }
    X++;
  }

  TOTAL_COBAIAS = QUANTIA_C + QUANTIA_R + QUANTIA_S;
  PERCENT_C = ((QUANTIA_C * 100) / TOTAL_COBAIAS);
  PERCENT_R = ((QUANTIA_R * 100) / TOTAL_COBAIAS);
  PERCENT_S = ((QUANTIA_S * 100) / TOTAL_COBAIAS);

  printf("Total: %.0f cobaias\n", TOTAL_COBAIAS);
  printf("Total de coelhos: %.0f\n", QUANTIA_C);
  printf("Total de ratos: %.0f\n", QUANTIA_R);
  printf("Total de sapos: %.0f\n", QUANTIA_S);
  printf("Percentual de coelhos: %.2f %%\n", PERCENT_C);
  printf("Percentual de ratos: %.2f %%\n", PERCENT_R);
  printf("Percentual de sapos: %.2f %%\n", PERCENT_S);

  return 0;

}
