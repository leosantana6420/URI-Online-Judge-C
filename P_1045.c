#include <stdio.h>

int main(void)
{
    
  double VALOR_A, VALOR_B, VALOR_C;
  double A, B, C;

  scanf("%lf %lf %lf", &VALOR_A, &VALOR_B, &VALOR_C);

  if (VALOR_A >= VALOR_B && VALOR_B >= VALOR_C)
  {
    A = VALOR_A;
    B = VALOR_B;
    C = VALOR_C;
  }

  if (VALOR_A >= VALOR_B && VALOR_C >= VALOR_B)
  {
    A = VALOR_A;
    B = VALOR_C;
    C = VALOR_B;
  }

  if (VALOR_B >= VALOR_A && VALOR_C >= VALOR_A)
  {
    A = VALOR_B;
    B = VALOR_C;
    C = VALOR_A;
  }

  if (VALOR_B >= VALOR_A && VALOR_A >= VALOR_C)
  {
    A = VALOR_B;
    B = VALOR_A;
    C = VALOR_C;
  }

  if (VALOR_C >= VALOR_B && VALOR_B >= VALOR_A)
  {
    A = VALOR_C;
    B = VALOR_B;
    C = VALOR_A;
  }

  if (VALOR_C >= VALOR_A && VALOR_A >= VALOR_B)
  {
    A = VALOR_C;
    B = VALOR_A;
    C = VALOR_B;
  }

  if (A >= B + C)
  {
    printf("NAO FORMA TRIANGULO\n");
  }

  else if (A * A == B * B + C * C)
  {
    printf("TRIANGULO RETANGULO\n");
  }

  else if (A * A > B * B + C * C)
  {
    printf("TRIANGULO OBTUSANGULO\n");
  }

  else if (A * A < B * B + C * C)
  {
    printf("TRIANGULO ACUTANGULO\n");
  }

  if (A == B && B == C)
  {
    printf("TRIANGULO EQUILATERO\n");
  }

  else if (A == B || B == C)
  {
    printf("TRIANGULO ISOSCELES\n");
  }

  return 0;

}
