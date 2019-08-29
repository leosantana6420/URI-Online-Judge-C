#include <stdio.h>

int main(void)
{

  int N;
  float HORAS, MINUTOS, SEGUNDOS;

  scanf("%d", &N);

  HORAS = (N / 3600);

  MINUTOS = ((N % 3600) / 60);

  SEGUNDOS = ((N % 3600) % 60);

  printf("%.f:%.f:%.0f\n", HORAS, MINUTOS, SEGUNDOS);

  return 0;

}
