#include <stdio.h>

int main(void)
{
  
  float TOTAL, NOTA_1, NOTA_2;

  do
  {
    
    scanf("%f", &NOTA_1);

    if (NOTA_1 < 0 || NOTA_1 > 10)
    {
      printf("nota invalida\n");
    }
    
  } while (NOTA_1 < 0 || NOTA_1 > 10);

  do
  {
    
    scanf("%f", &NOTA_2);

    if (NOTA_2 < 0 || NOTA_2 > 10)
    {
      printf("nota invalida\n");
    }

  } while (NOTA_2 < 0 || NOTA_2 > 10);

  printf("media = %.2f\n", ((NOTA_1 + NOTA_2) / 2));

  return 0;

}
