#include <stdio.h>

int main(void)
{
    
  int HORA_INI, HORA_FIM, MINUTO_INI, MINUTO_FIM, HORA_TOTAL, MINUTO_TOTAL;
  
  scanf("%d %d %d %d", &HORA_INI, &MINUTO_INI, &HORA_FIM, &MINUTO_FIM);
    
  HORA_TOTAL = HORA_FIM - HORA_INI;

  if (HORA_TOTAL < 0)
  {
    HORA_TOTAL = (HORA_FIM - HORA_INI) + 24;
  }

  MINUTO_TOTAL = MINUTO_FIM - MINUTO_INI;
 
  if (MINUTO_TOTAL < 0)
  {
    MINUTO_TOTAL = (MINUTO_FIM - MINUTO_INI) + 60;
    HORA_TOTAL--;
  }

  if (HORA_INI == HORA_FIM && MINUTO_INI == MINUTO_FIM)
  {
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  }
  
  else
  {
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HORA_TOTAL, MINUTO_TOTAL);
  }
  
  return 0;

}
