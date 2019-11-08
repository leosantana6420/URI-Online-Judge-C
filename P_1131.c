#include <stdio.h>

int main(void)
{

  int X, Y, RESPOSTA, GRENAIS = 0, INTER = 0, GREMIO = 0, EMPATE = 0;

  do
  {
    scanf("%d %d", &X, &Y);
    
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &RESPOSTA);

    X+=X;
    Y+=Y;
    GRENAIS++;

    if (X > Y)
    {
      INTER++;
    }

    else if (X < Y)
    {
      GREMIO++;
    }

    else
    {
      EMPATE++;
    }
  } while (RESPOSTA == 1);

  printf("%d grenais\n", GRENAIS);
  printf("Inter:%d\n", INTER);
  printf("Gremio:%d\n", GREMIO);
  printf("Empates:%d\n", EMPATE);

  if (INTER > GREMIO)
  {
    printf("Inter venceu mais\n");
  }

  else if (INTER < GREMIO)
  {
    printf("Gremio venceu mais\n");
  }

  else
  {
    printf("Nao houve vencedor\n");
  }

  return 0;

}
