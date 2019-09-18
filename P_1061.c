#include <stdio.h>

int main(void)
{
    
  char DIA_1[5];
  char DIA_2[5];
  char PONTOS[5];

  int DIA_INI, DIA_FIM, HORA_INI, HORA_FIM, MINUTO_INI, MINUTO_FIM, SEG_INI, SEG_FIM, DIA_TOTAL, HORA_TOTAL, MINUTO_TOTAL, SEG_TOTAL;
  
  scanf("%s %d", DIA_1, &DIA_INI);

  scanf("%d %s %d %s %d", &HORA_INI, PONTOS, &MINUTO_INI, PONTOS, &SEG_INI);

  scanf("%s %d", DIA_2, &DIA_FIM);

  scanf("%d %s %d %s %d", &HORA_FIM, PONTOS, &MINUTO_FIM, PONTOS, &SEG_FIM);

  DIA_TOTAL = (DIA_FIM - DIA_INI);

  if (DIA_TOTAL < 0)
  {
    DIA_TOTAL = ((DIA_FIM - DIA_INI) + 1);
  }
  
  HORA_TOTAL = HORA_FIM - HORA_INI;

  if (HORA_TOTAL < 0)
  {
    HORA_TOTAL = (HORA_FIM - HORA_INI) + 24;
    DIA_TOTAL--;
  }

  MINUTO_TOTAL = MINUTO_FIM - MINUTO_INI;
 
  if (MINUTO_TOTAL < 0)
  {
    MINUTO_TOTAL = (MINUTO_FIM - MINUTO_INI) + 60;
    HORA_TOTAL--;
  }

  SEG_TOTAL = (SEG_FIM - SEG_INI);

  if (SEG_TOTAL < 0)
  {
    SEG_TOTAL = (SEG_FIM - SEG_INI) + 60;
    MINUTO_TOTAL--;
  }

  printf("%d dia(s)\n", DIA_TOTAL);
  printf("%d hora(s)\n", HORA_TOTAL);
  printf("%d minuto(s)\n", MINUTO_TOTAL);
  printf("%d segundo(s)\n", SEG_TOTAL);
    
  return 0;

}
