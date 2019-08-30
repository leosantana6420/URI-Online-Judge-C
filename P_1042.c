#include <stdio.h>

int main(void)
{

  int A, B, C;

  scanf("%d %d %d", &A, &B, &C);

  if (A > B && B > C)
  {
    printf("%d\n%d\n%d\n", C, B, A);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);
  }

  else if (A > C && C > B)
  {
    printf("%d\n%d\n%d\n", B, C, A);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);
  }

  else if (B > A && A > C)
  {
    printf("%d\n%d\n%d\n", C, A, B);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);
  }

  else if (B > C && C > A)
  {
    printf("%d\n%d\n%d\n", A, C, B);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);
  }

  else if (C > A && A > B)
  {
    printf("%d\n%d\n%d\n", B, A, C);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);
  }

  else if (A == B || A == C || B == C)
  {
    printf("IMPOSSÍVEL CALCULAR, POIS EXISTEM NÚMEROS IGUAIS");
  }

  else
  {
    printf("%d\n%d\n%d\n", A, B, C);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);
  }

  return 0;

}
