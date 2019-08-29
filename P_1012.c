#include <stdio.h>

int main(void)
{

  double A, B, C, AREA_TRIANGULO, AREA_CIRCULO, AREA_TRAPEZIO, AREA_QUADRADO, AREA_RETANGULO;

  scanf("%lf", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);

  AREA_TRIANGULO = ((A * C) / 2);

  AREA_CIRCULO = (3.14159 * (C * C));

  AREA_TRAPEZIO = (((A + B) * C) / 2);

  AREA_QUADRADO = (B * B);

  AREA_RETANGULO = (A * B);

  printf("TRIANGULO: %.3lf\n", AREA_TRIANGULO);

  printf("CIRCULO: %.3lf\n", AREA_CIRCULO);

  printf("TRAPEZIO: %.3lf\n", AREA_TRAPEZIO);

  printf("QUADRADO: %.3lf\n", AREA_QUADRADO);

  printf("RETANGULO: %.3lf\n", AREA_RETANGULO);

  return 0;

}
