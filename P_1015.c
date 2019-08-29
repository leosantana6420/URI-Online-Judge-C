#include <stdio.h>
#include <math.h>

int main(void)
{

  float X1, Y1, X2, Y2, DISTANCIA;

  scanf("%f", &X1);
  scanf("%f", &Y1);
  scanf("%f", &X2);
  scanf("%f", &Y2);

  DISTANCIA = sqrt((pow((X2 - X1), 2) + pow((Y2 - Y1), 2)));

  printf("%.4f\n", DISTANCIA);

  return 0;

}
