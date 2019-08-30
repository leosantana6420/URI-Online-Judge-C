#include <stdio.h>

int main(void)
{

  float A, B, C, PERIMETRO, AREA_TRAPEZIO;

  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);

  if (((A + B) > C) && ((A + C) > B) && ((B + C) > A))
  {
    PERIMETRO = (A + B + C);
    printf("Perimetro = %.1f", PERIMETRO);
  }

  else
  {
    AREA_TRAPEZIO = (((A + B) * C) / 2);
    printf("Area = %.1f", AREA_TRAPEZIO);
  }

  return 0;

}
