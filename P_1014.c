#include <stdio.h>

int main(void)
{

  double X, Y, CONSUMO;

  scanf("%lf", &X);
  scanf("%lf", &Y);

  CONSUMO = (X / Y);

  printf("%.3lf km/l\n", CONSUMO);

  return 0;

}
