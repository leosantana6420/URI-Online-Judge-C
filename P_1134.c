#include <stdio.h>

int main(void)
{
  
  int N, ALCOOL = 0, GASOLINA = 0, DIESEL = 0;

  do
  {
    scanf("%d", &N);

    if (N < 1 || N > 5)
    {
      scanf("%d", &N);
    }

    if (N == 1)
    {
      ALCOOL+=1;
    }

    else if (N == 2)
    {
      GASOLINA+=1;
    }

    else if (N == 3)
    {
      DIESEL+=1;
    }
  } while (N != 4);

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", ALCOOL);
  printf("Gasolina: %d\n", GASOLINA);
  printf("Diesel: %d\n", DIESEL);

  return 0;

}
