#include <stdio.h>
#include <string.h>

int main(void)
{

  int M, N, I, ABAS;
  char ACAO[10];
  char ACAO_1[] = "fechou";
  char ACAO_2[] = "clicou";

  scanf("%d %d", &M, &N);

  ABAS = M;
  
  for (I = 1; I <= N; I++)
  {
    scanf("%s", ACAO);

    if (strcmp(ACAO, ACAO_1) == 0)
    {
      ABAS = ABAS + 1;
    }

    else if (strcmp(ACAO, ACAO_2) == 0)
    {
      ABAS = ABAS - 1;
    }
  }

  printf("%d\n", ABAS);

  return 0;

}
