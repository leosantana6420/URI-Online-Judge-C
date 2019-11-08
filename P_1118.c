#include <stdio.h>

int main(void)
{
  
  float NOTA_1, NOTA_2, MEDIA;
  int RESPOSTA;

  do
  {
    while(1)
    {
      scanf("%f", &NOTA_1);

      if (NOTA_1 < 0 || NOTA_1 > 10)
      {
        printf("nota invalida\n");
      }

      else
      {
        break;
      }
    }

    while(1)
    {
      scanf("%f", &NOTA_2);

      if (NOTA_2 < 0 || NOTA_2 > 10)
      {
        printf("nota invalida\n");
      }

      else
      {
        break;
      }
    }

    MEDIA = ((NOTA_1 + NOTA_2) / 2);
    printf("media = %.2f\n", MEDIA);
    
    do
    {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &RESPOSTA);
    } while (RESPOSTA < 1 || RESPOSTA > 2);

  } while (RESPOSTA == 1);

  return 0;

}
