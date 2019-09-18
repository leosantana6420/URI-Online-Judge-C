#include <stdio.h>

int main(void)
{

  int HORA_INICIAL, HORA_FINAL, TEMPO_JOGO;

  scanf("%d %d", &HORA_INICIAL, &HORA_FINAL);

  if (HORA_FINAL > HORA_INICIAL)
  {
    TEMPO_JOGO = (HORA_FINAL - HORA_INICIAL);
    printf("O JOGO DUROU %d HORA(S)\n", TEMPO_JOGO);
  }

  else if (HORA_INICIAL >= HORA_FINAL)
  {
    TEMPO_JOGO = ((HORA_FINAL + 24) - HORA_INICIAL);
    printf("O JOGO DUROU %d HORA(S)\n", TEMPO_JOGO);
  }

  return 0;

}
