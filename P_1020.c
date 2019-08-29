#include <stdio.h>

int main(void)
{

  int IDADE_DIAS;
  float ANOS, MESES, DIAS;

  scanf("%d", &IDADE_DIAS);

  ANOS = (IDADE_DIAS / 365);

  MESES = ((IDADE_DIAS % 365) / 30);

  DIAS = ((IDADE_DIAS % 365) % 30);

  printf("%.f ano(s)\n", ANOS);
  printf("%.f mes(es)\n", MESES);
  printf("%.f dia(s)\n", DIAS);

  return 0;

}
