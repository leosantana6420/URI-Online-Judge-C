#include <stdio.h>

int main(void)
{

  int TEMPO_VIAGEM, VELOCIDADE;
  
  float QUANTIDADE_LITROS;

  scanf("%d", &TEMPO_VIAGEM);
  scanf("%d", &VELOCIDADE);

  QUANTIDADE_LITROS = ((TEMPO_VIAGEM * VELOCIDADE) / 12.0);

  printf("%.3f\n", QUANTIDADE_LITROS);

  return 0;

}
